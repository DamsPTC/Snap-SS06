/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c04738; end: 104c0476b;  */

void FUN_104c04738(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x000104c047e4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104c0476c; end: 104c047a3;  */

long * FUN_104c0476c(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = param_1 + 2;
    FUN_104c04880();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 4);
    return plVar1;
  }
  FUN_104c0486c();
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x7ffffffffffffff;
    }
    return plVar1;
  }
  FUN_104c0486c();
  FUN_104c047f8();
  return param_1;
}



/* Entry: 104c047a4; end: 104c047f7;  */

long * FUN_104c047a4(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x7ffffffffffffff;
    }
    return plVar1;
  }
  FUN_104c0486c();
  FUN_104c047f8();
  return param_1;
}



/* Entry: 104c047f8; end: 104c0486b;  */

void FUN_104c047f8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x000104c0582c(param_4);
    param_4 = param_4 + 0x20;
  }
  return;
}



/* Entry: 104c0486c; end: 104c0487f;  */

void FUN_104c0486c(void)

{
  FUN_104bd47e8(&DAT_10f62a4d8);
  FUN_104c048a4();
  return;
}



/* Entry: 104c04880; end: 104c048a3;  */

void FUN_104c04880(void)

{
  FUN_104c048a4();
  return;
}



/* Entry: 104c048a4; end: 104c048bf;  */

void FUN_104c048a4(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  FUN_104bd35f4();
  *param_1 = &PTR_FUN_1107ea9c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c048c0; end: 104c048c3;  */

void FUN_104c048c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ea9c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c048c4; end: 104c048d7;  */

void FUN_104c048c4(void)

{
  func_0x000104c048e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c048d8; end: 104c048f3;  */

void FUN_104c048d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c048e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104c048f4; end: 104c049af;  */

void FUN_104c048f4(long param_1)

{
  func_0x0001000df750();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104c049b0; end: 104c049d7;  */

void FUN_104c049b0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010028ad98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104c049d8; end: 104c049f7;  */

void FUN_104c049d8(void)

{
  func_0x000104c0579c();
  FUN_104c049f8();
  return;
}



/* Entry: 104c049f8; end: 104c04a1f;  */

void FUN_104c049f8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010897d388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104c04a20; end: 104c04b13;  */

void FUN_104c04a20(long param_1)

{
  func_0x0001000df750();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104c04b14; end: 104c04b3b;  */

void FUN_104c04b14(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000108b83f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104c04b3c; end: 104c04c0b;  */

void FUN_104c04b3c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x21;
  
  func_0x000104c05698();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (*param_3 == 0) {
      return;
    }
    if (*(int *)(*param_3 + 8) != 1) {
      return;
    }
  }
  lVar1 = *unaff_x21;
  func_0x000108b82ca4(lVar1,param_3,param_4);
  if ((int)lVar1 == 0) {
    return;
  }
  __ZNSt3__15mutex4lockEv(param_5);
  lVar1 = *unaff_x21;
  if (*(char *)(lVar1 + 0x90) == '\x01') {
    func_0x000108b83190();
    lVar1 = *unaff_x21;
  }
  if (lVar1 != *(long *)(unaff_x20 + 0x70)) {
    if (*(long *)(lVar1 + 0x88) == unaff_x20 + 0x150) {
      func_0x000108b84d90();
      goto LAB_104c04be8;
    }
    __ZNSt3__118condition_variable10notify_oneEv(unaff_x20 + 0x100);
  }
  __ZNSt3__118condition_variable10notify_oneEv(unaff_x20 + 0xa8);
LAB_104c04be8:
  __ZNSt3__15mutex6unlockEv(param_5);
  return;
}



/* Entry: 104c04c0c; end: 104c04c43;  */

void FUN_104c04c0c(void)

{
  func_0x000104c0561c();
  return;
}



/* Entry: 104c04c44; end: 104c04fdb;  */

void FUN_104c04c44(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [40];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char cStack_58;
  undefined1 auStack_50 [16];
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar5 + 0x40) == '\x01') {
    FUN_104c04fdc(param_1 + 0x20);
  }
  else {
    func_0x000100100ed0(auStack_50);
    func_0x000104c057d0();
    func_0x000108981498(&uStack_b0,auStack_50,auStack_d8,0x5b);
    func_0x000104c056b8();
    if (cStack_58 == '\x01') {
      FUN_104c02778(lVar5 + 0x128,&uStack_b0);
    }
    func_0x000104c057b4();
    func_0x000104c057d0();
    func_0x000108981498(&uStack_b0,auStack_50,auStack_d8,0x5c);
    func_0x000104c056b8();
    if (cStack_58 == '\x01') {
      FUN_104c02778(lVar5 + 0x180,&uStack_b0);
    }
    func_0x000104c057b4();
    puVar1 = (undefined8 *)0x28;
    __Znwm();
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 4) = 0x3f800000;
    uStack_b0 = 0;
    FUN_104c049b0(lVar5 + 0x30);
    func_0x000104c04990(&uStack_b0);
    puVar2 = *(undefined8 **)(lVar5 + 0x20);
    uVar4 = *(undefined8 *)(lVar5 + 0x10);
    uVar6 = *(undefined8 *)(lVar5 + 0x30);
    puVar1 = (undefined8 *)0x38;
    __Znwm();
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_1107eaa50;
    puVar1[1] = 0;
    puVar1[3] = &PTR_DAT_110aa2018;
    puVar1[4] = 0;
    puVar1[5] = uVar4;
    puVar1[6] = uVar6;
    uStack_a8 = puVar2[1];
    uStack_b0 = *puVar2;
    *puVar2 = puVar1 + 3;
    puVar2[1] = puVar1;
    func_0x000104c04944(&uStack_b0);
    plVar3 = (long *)(lVar5 + 0x98);
    while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
      func_0x00010897cbb8(*(undefined8 *)(lVar5 + 0x30),plVar3 + 2,plVar3 + 5);
    }
    func_0x000100603ea8(lVar5 + 0x88);
    uVar4 = *(undefined8 *)(lVar5 + 0x10);
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1 + 3;
    *puVar1 = &PTR_DAT_1107eaaa0;
    func_0x00010895557c(puVar2,uVar4);
    uStack_a8 = *(undefined8 *)(lVar5 + 0x80);
    uStack_b0 = *(undefined8 *)(lVar5 + 0x78);
    *(undefined8 **)(lVar5 + 0x78) = puVar2;
    *(undefined8 **)(lVar5 + 0x80) = puVar1;
    func_0x000104c04a8c(&uStack_b0);
    if (*(long *)(lVar5 + 0x58) != 0) {
      (**(code **)(**(long **)(lVar5 + 0x78) + 8))();
    }
    if (*(long *)(lVar5 + 0x68) != 0) {
      (**(code **)(**(long **)(lVar5 + 0x78) + 0x10))();
    }
    if ((undefined8 *)**(long **)(lVar5 + 0x20) != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)**(long **)(lVar5 + 0x20))();
    }
    *(undefined1 *)(lVar5 + 0x40) = 1;
    FUN_104c04fdc(param_1 + 0x20);
    func_0x0001000df75c(auStack_50);
  }
  return;
}



/* Entry: 104c04fdc; end: 104c05023;  */

void FUN_104c04fdc(undefined8 *param_1)

{
  undefined1 auStack_50 [40];
  undefined1 uStack_28;
  
  auStack_50[0] = 0;
  uStack_28 = 0;
  (*(code *)*param_1)(auStack_50,param_1);
  FUN_104c05024(auStack_50);
  return;
}



/* Entry: 104c05024; end: 104c05043;  */

void FUN_104c05024(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000108b80d84();
  }
  return;
}



/* Entry: 104c05044; end: 104c05073;  */

long FUN_104c05044(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    func_0x000104c03d34(param_1 + 0x30);
  }
  return param_1;
}



/* Entry: 104c05074; end: 104c05077;  */

void FUN_104c05074(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eaa50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c05078; end: 104c0508b;  */

void FUN_104c05078(void)

{
  func_0x000104c05094();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c0508c; end: 104c050a3;  */

void FUN_104c0508c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c057f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 104c050a4; end: 104c050b7;  */

void FUN_104c050a4(void)

{
  func_0x000104c050c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c050b8; end: 104c050cb;  */

void FUN_104c050b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c057f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 104c050cc; end: 104c0512f;  */

bool FUN_104c050cc(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  __ZNSt3__16chrono12system_clock3nowEv();
  lVar3 = *param_3;
  if (lVar2 < lVar3) {
    FUN_104c05130();
    __ZNSt3__118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE
              (param_1,param_2,lVar3);
    __ZNSt3__16chrono12system_clock3nowEv();
    bVar1 = *param_3 <= param_1;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 104c05130; end: 104c05187;  */

long FUN_104c05130(ulong param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    if ((long)param_1 < 1) {
      if (param_1 < 0xffdf3b645a1cac09) {
        return -0x8000000000000000;
      }
    }
    else if (0x20c49ba5e353f7 < param_1) {
      return 0x7fffffffffffffff;
    }
    lVar1 = param_1 * 1000;
  }
  return lVar1;
}



/* Entry: 104c05188; end: 104c051eb;  */

void FUN_104c05188(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010054f924();
  if (*(long *)(*(long *)(lVar1 + 0x10) + 0x68) == param_1) {
    if (*(long *)(lVar1 + 0x38) != 0) {
      func_0x00010897d3d4();
    }
    plVar2 = *(long **)(lVar1 + 0x20);
    if (*plVar2 != 0) {
      FUN_104c0559c();
      lStack_28 = plVar2[1];
      lStack_30 = *plVar2;
      *plVar2 = 0;
      plVar2[1] = 0;
      func_0x000104c04944(&lStack_30);
    }
  }
  return;
}



/* Entry: 104c051ec; end: 104c05207;  */

void FUN_104c051ec(void)

{
  return;
}



/* Entry: 104c05208; end: 104c05257;  */

void FUN_104c05208(long param_1)

{
  func_0x0001000df750();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104c05258; end: 104c0526b;  */

void FUN_104c05258(void)

{
  func_0x000104c0522c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c0526c; end: 104c052db;  */

void FUN_104c0526c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000104c05858();
  if ((bool)in_ZR) {
    func_0x000107c27d10(*(undefined8 *)(extraout_x8 + 0x30),param_1 + 0x20);
  }
  else {
    func_0x00010060413c(extraout_x8 + 0x88,param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)
            ();
  return;
}



/* Entry: 104c052dc; end: 104c052df;  */

void FUN_104c052dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eab48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c052e0; end: 104c052f3;  */

void FUN_104c052e0(void)

{
  FUN_104c05370();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c052f4; end: 104c05303;  */

void FUN_104c052f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c052fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x50))();
  return;
}



/* Entry: 104c05304; end: 104c0536f;  */

void FUN_104c05304(long param_1)

{
  func_0x0001000df750();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104c05370; end: 104c0537b;  */

void FUN_104c05370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eab48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104c0537c; end: 104c053e7;  */

void FUN_104c0537c(long param_1)

{
  func_0x0001000df750();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 104c053e8; end: 104c0540b;  */

void FUN_104c053e8(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000df370(&uStack_18,8);
  return;
}



/* Entry: 104c0540c; end: 104c05423;  */

void FUN_104c0540c(long *param_1,long param_2)

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



/* Entry: 104c05424; end: 104c0544b;  */

void FUN_104c05424(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001006203c8();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 104c0544c; end: 104c05453;  */

void FUN_104c0544c(void)

{
  return;
}



/* Entry: 104c05454; end: 104c054c7;  */

void FUN_104c05454(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined8 uStack_38;
  
  func_0x000104c05858();
  if (((bool)in_ZR) && (*(long *)(extraout_x8 + 0x38) == 0)) {
    __Znwm(0xe0);
    func_0x00010897d2f4();
    uStack_38 = 0;
    func_0x00010060416c();
    FUN_104c049f8();
    FUN_104c049d8(&uStack_38);
  }
  return;
}



/* Entry: 104c054c8; end: 104c054f3;  */

undefined8 * FUN_104c054c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107eabd8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 4);
  return param_1;
}



/* Entry: 104c054f4; end: 104c05507;  */

void FUN_104c054f4(void)

{
  FUN_104c054c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104c05508; end: 104c0555b;  */

void FUN_104c05508(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
  func_0x000104c057d0(param_1,&UNK_10dd629e6);
  func_0x00010897cbb8(uVar1,auStack_38,param_1 + 0x20);
  func_0x000104c056b8();
  return;
}



/* Entry: 104c0555c; end: 104c05563;  */

void FUN_104c0555c(void)

{
  return;
}



/* Entry: 104c05564; end: 104c0559b;  */

void FUN_104c05564(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x38);
  if (*plVar2 == 0) {
    return;
  }
  func_0x00010897d3d4();
  lVar1 = *plVar2;
  *plVar2 = 0;
  if (lVar1 != 0) {
    func_0x00010897d388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 104c0559c; end: 104c058cb;  */

void FUN_104c0559c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104c055a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 104c058cc; end: 104c06243;  */

/* WARNING: Possible PIC construction at 0x000104c05e44: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

void FUN_104c058cc(long param_1,long *******param_2,long param_3,long ******param_4,int param_5,
                  int param_6,int param_7)

{
  uint uVar1;
  long ******pppppplVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined2 *puVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  undefined1 *puVar25;
  long *******ppppppplVar26;
  undefined1 *puVar27;
  long ******pppppplVar28;
  long lVar29;
  long ******pppppplVar30;
  uint uVar31;
  long ******pppppplVar32;
  int iVar33;
  ulong uVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  long *plVar39;
  code *extraout_x8;
  code *extraout_x8_00;
  code *pcVar40;
  ulong uVar41;
  long lVar42;
  uint uVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  uint uVar48;
  uint uVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  ulong uVar53;
  uint uVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  uint uVar58;
  undefined1 uVar59;
  uint uVar60;
  ulong uVar61;
  long ******pppppplStack_2c0;
  long ******pppppplStack_2b8;
  long *******ppppppplStack_2b0;
  int iStack_18c;
  long *******ppppppplStack_148;
  uint uStack_ec;
  long *******ppppppplStack_e8;
  long ******apppppplStack_e0 [2];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [80];
  long lStack_70;
  
  uVar61 = 0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar25 = *(undefined1 **)(param_1 + 8);
  uVar31 = (uint)param_4;
  pppppplVar28 = (long ******)0x8;
  uVar36 = 0xc;
  if ((int)uVar31 < 1) {
    uVar36 = 8;
  }
  iVar33 = *(int *)(puVar25 + 0x878);
  iVar20 = 3 - iVar33;
  uVar35 = (ulong)(iVar20 != 0);
  iVar19 = (4 << (ulong)(*(byte *)(*(long *)(puVar25 + 8) + 0x188) & 0x1f)) * param_7;
  bVar23 = iVar33 == 1;
  uVar11 = *(uint *)(*(long *)(puVar25 + 0xcb8) + 0x18);
  lVar46 = *(long *)(puVar25 + 0x868);
  lVar42 = 2;
  if (!bVar23) {
    lVar42 = 6;
  }
  lVar7 = 3;
  if (!bVar23) {
    lVar7 = 7;
  }
  lVar4 = 2;
  if (!bVar23) {
    lVar4 = 3;
  }
  bVar22 = uVar11 < 2;
  iVar18 = 0;
  if (!bVar22) {
    iVar18 = param_7;
  }
  lVar44 = lVar46 * (iVar18 << 3);
  lVar45 = *(long *)(puVar25 + 0x860);
  lVar55 = lVar46 * (param_7 << 3);
  lVar52 = *(long *)(puVar25 + 0x18);
  uVar34 = 0;
  if (!bVar22) {
    uVar34 = lVar45 * (param_7 * 4);
  }
  lVar8 = 0;
  if (!bVar22) {
    lVar8 = lVar55;
  }
  bVar24 = *(int *)(lVar52 + 0xec) != *(int *)(lVar52 + 0xf0);
  uVar9 = (ulong)*(byte *)(*(long *)(puVar25 + 8) + 0x188) * 4 + (long)iVar19 | 2;
  if (bVar24) {
    uVar9 = (long)(int)(param_7 << 2 | 2);
  }
  if (bVar24) {
    iVar19 = param_7 * 4;
  }
  ppppppplStack_2b0 = (long *******)*param_2;
  pppppplStack_2b8 = param_2[1];
  pppppplStack_2c0 = param_2[2];
  iVar12 = *(int *)(puVar25 + 0xd80);
  bVar15 = *(byte *)(lVar52 + 0x34f);
  lVar52 = lVar45 * (iVar18 << 2);
  uVar53 = (ulong)(0x40 >> uVar35);
  puVar10 = puVar25 + 0x1480;
  if (bVar24) {
    puVar10 = puVar25 + 0x1468;
  }
  lVar47 = *(long *)(puVar25 + 0xcd0);
  pppppplVar2 = (long ******)(puVar25 + 0x860);
  uVar35 = (ulong)(8 >> uVar35);
  puVar27 = puVar25;
  pppppplVar30 = param_4;
  do {
    uVar60 = (uint)pppppplVar30;
    if (param_5 <= (int)uVar60) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      iVar33 = param_5;
      ___stack_chk_fail();
FUN_104c06244:
      if ((uVar34 & 1) != 0) {
        lVar46 = 0;
        for (lVar42 = 0; lVar42 != 0x10; lVar42 = lVar42 + 2) {
          *(undefined2 *)(puVar27 + lVar42) =
               *(undefined2 *)((long)*param_2 + lVar46 + ((ulong)param_4 & 0xffffffff) + -2);
          lVar46 = (long)*pppppplVar28 + lVar46;
        }
      }
      if ((iVar33 != 0) && (1 < (uint)uVar34)) {
        lVar42 = 0;
        puVar21 = (undefined2 *)(puVar27 + 0x20);
        for (uVar61 = (ulong)(8 >> (iVar33 == 1)); uVar61 != 0; uVar61 = uVar61 - 1) {
          lVar46 = ((ulong)((uint)param_4 >> (iVar33 != 3)) - 2) + lVar42;
          puVar21[-8] = *(undefined2 *)((long)param_2[1] + lVar46);
          *puVar21 = *(undefined2 *)((long)param_2[2] + lVar46);
          lVar42 = (long)pppppplVar28[1] + lVar42;
          puVar21 = puVar21 + 1;
        }
      }
      return;
    }
    iVar18 = *(int *)(param_1 + 0x3f1f0);
    uVar1 = uVar60 + 2;
    if (*(int *)(puVar25 + 0xd7c) <= (int)uVar1) {
      uVar36 = uVar36 & 0xfffffff7;
    }
    if (((int)uVar1 < param_5 || (bVar22 || param_6 != 0)) && (uVar36 & 8) != 0) {
      plVar39 = (long *)(puVar25 + (ulong)(iVar18 == 0) * 0x18 + 0x1438);
      lVar50 = plVar39[1];
      lVar51 = *plVar39 + lVar52;
      lVar56 = plVar39[2];
      if (lVar45 < 0) {
        lVar57 = lVar45 * 7;
        lVar29 = lVar45 * -2;
        lVar51 = lVar51 + lVar45;
      }
      else {
        lVar57 = lVar45 * 6;
        lVar29 = lVar45 << 1;
      }
      _memcpy(lVar51,(long)ppppppplStack_2b0 + lVar57,lVar29);
      if (iVar33 != 0) {
        lVar50 = lVar50 + lVar44;
        lVar56 = lVar56 + lVar44;
        lVar45 = *(long *)(puVar25 + 0x868);
        if (lVar45 < 0) {
          lVar57 = lVar45 * -2;
          func_0x000104c06310(lVar50 + lVar45);
          lVar56 = lVar56 + lVar45;
          lVar51 = lVar7;
        }
        else {
          lVar57 = lVar45 << 1;
          func_0x000104c06310(lVar50);
          lVar51 = lVar42;
        }
        _memcpy(lVar56,(long ******)((long)pppppplStack_2c0 + lVar45 * lVar51),lVar57);
      }
    }
    uVar48 = 0;
    uVar37 = 0;
    uVar36 = uVar36 & 0xfffffffc | 2;
    uVar3 = uVar60 >> 3 & 2;
    bVar24 = true;
    lVar45 = (long)iVar18 * 0x18 + 0x1440;
    param_2 = ppppppplStack_2b0;
    pppppplVar28 = pppppplStack_2b8;
    param_4 = pppppplStack_2c0;
    for (uVar54 = 0; puVar27 = (undefined1 *)(ulong)uVar3,
        uVar54 != (iVar12 << 1 & ((iVar12 << 1) >> 0x1f ^ 0xffffffffU)); uVar54 = uVar54 + 1) {
      lVar50 = param_3 + (ulong)(uVar54 >> 1) * 0x544;
      lVar51 = (long)*(char *)(lVar50 + (ulong)(uVar54 & 1 | uVar3) + 0x500);
      if (lVar51 == -1) {
LAB_104c05d30:
        bVar24 = true;
      }
      else {
        lVar51 = *(long *)(puVar25 + 0x18) + lVar51;
        bVar16 = *(byte *)(lVar51 + 0x351);
        bVar17 = *(byte *)(lVar51 + 0x359);
        if (bVar16 == 0 && bVar17 == 0) goto LAB_104c05d30;
        uVar13 = *(uint *)(lVar50 + (ulong)(uVar60 >> 1 & 0xf) * 4 + 0x504);
        uVar49 = 0;
        if (bVar17 != 0) {
          uVar49 = 2;
        }
        if (bVar16 != 0) {
          uVar49 = uVar49 + 1;
        }
        bVar5 = 4;
        if ((bVar16 & 3) != 3) {
          bVar5 = bVar16 & 3;
        }
        bVar6 = 4;
        if ((bVar17 & 3) != 3) {
          bVar6 = bVar17 & 3;
        }
        ppppppplStack_e8 = param_2;
        apppppplStack_e0[0] = pppppplVar28;
        apppppplStack_e0[1] = param_4;
        iVar18 = uVar54 * 0x10 + 0x10;
        pppppplVar30 = pppppplVar28;
        pppppplVar32 = param_4;
        ppppppplStack_148 = param_2;
        uVar58 = uVar48;
        while( true ) {
          uVar41 = (ulong)uVar49;
          iVar14 = *(int *)(puVar25 + 0xd78);
          iVar38 = iVar18;
          if (iVar14 <= iVar18) {
            iVar38 = iVar14;
          }
          ppppppplStack_e8 = ppppppplStack_148;
          apppppplStack_e0[0] = pppppplVar30;
          apppppplStack_e0[1] = pppppplVar32;
          if (iVar38 <= (int)uVar58) break;
          if (iVar14 <= (int)(uVar58 + 2)) {
            uVar36 = uVar36 & 0xfffffffd;
          }
          if ((uVar13 >> (ulong)(uVar58 & 0x1e) & 3) == 0) {
            bVar24 = true;
          }
          else {
            uVar43 = 3;
            if (!bVar24) {
              uVar43 = ~uVar37;
            }
            uVar34 = (ulong)(uVar43 & uVar49);
            if (((uVar43 & uVar49) != 0) && ((uVar36 & 1) != 0)) {
              puVar27 = auStack_d0 + uVar61 * 0x30;
              param_2 = (long *******)&ppppppplStack_e8;
              param_4 = (long ******)0x0;
              pppppplVar28 = pppppplVar2;
              goto FUN_104c06244;
            }
            if ((uVar36 >> 1 & 1) != 0) {
              lVar51 = 0x30;
              if (uVar61 != 0) {
                lVar51 = 0;
              }
              func_0x000104c06244(auStack_d0 + lVar51,&ppppppplStack_e8,pppppplVar2,8,iVar33);
              uVar34 = uVar41;
            }
            if (3 < bVar16 || 3 < bVar17) {
              ppppppplVar26 = ppppppplStack_148;
              (**(code **)(lVar47 + 0xce0))(ppppppplStack_148,*pppppplVar2,&uStack_ec);
              iStack_18c = (int)ppppppplVar26;
            }
            if (bVar16 < 4) {
              if (bVar5 != 0) {
                func_0x000104c062e8();
                uVar34 = 0;
                pcVar40 = extraout_x8;
                goto LAB_104c05fd8;
              }
            }
            else {
              if (uStack_ec == 0) {
                uVar34 = 0;
              }
              else {
                if (uStack_ec < 0x40) {
                  iVar38 = 4;
                }
                else {
                  uVar37 = (uint)LZCOUNT(uStack_ec >> 6) ^ 0x1f;
                  if (0xb < uVar37) {
                    uVar37 = 0xc;
                  }
                  iVar38 = uVar37 + 4;
                }
                uVar34 = (ulong)(iVar38 * (uint)(bVar16 >> 2) + 8 >> 4);
              }
              if ((int)uVar34 != 0 || bVar5 != 0) {
                func_0x000104c062e8();
                pcVar40 = extraout_x8_00;
LAB_104c05fd8:
                (*pcVar40)();
              }
            }
            if (bVar17 != 0) {
              if (bVar17 < 4) {
                uVar59 = 0;
              }
              else {
                uVar59 = (&UNK_10dd62ad7)[(long)iStack_18c + (ulong)(iVar33 == 2) * 8];
              }
              uVar41 = (ulong)((uVar58 << 2) >> (ulong)(iVar20 != 0));
              puVar27 = auStack_c0 + uVar61 * 0x30;
              for (lVar51 = 0; lVar51 != 0x10; lVar51 = lVar51 + 8) {
                if (uVar11 < 2) {
LAB_104c06060:
                  lVar50 = *(long *)(puVar25 + lVar51 + lVar45) + lVar8 + uVar41;
LAB_104c06084:
                  lVar57 = *(long *)((long)apppppplStack_e0 + lVar51);
                  lVar56 = lVar57 + (lVar46 << lVar4);
                }
                else {
                  if (uVar60 == uVar31 && param_6 != 0) {
                    lVar50 = *(long *)(puVar10 + lVar51 + 8) + (iVar19 + -4) * lVar46 + uVar41;
                    goto LAB_104c06084;
                  }
                  if ((int)uVar1 < param_5 || param_6 != 0) goto LAB_104c06060;
                  lVar50 = *(long *)(puVar25 + lVar51 + lVar45) + lVar55 + uVar41;
                  lVar56 = *(long *)(puVar10 + lVar51 + 8) + uVar9 * lVar46 + uVar41;
                  lVar57 = *(long *)((long)apppppplStack_e0 + lVar51);
                }
                uVar34 = (ulong)(bVar17 >> 2);
                (**(code **)(lVar47 + 0xce8 + (long)iVar20 * 8))
                          (lVar57,*(undefined8 *)(puVar25 + 0x868),puVar27,lVar50,lVar56,
                           (ulong)(bVar17 >> 2),bVar6,uVar59,bVar15 - 1,uVar36);
                puVar27 = puVar27 + 0x10;
              }
            }
            bVar24 = false;
            uVar61 = uVar61 ^ 1;
            uVar37 = uVar49;
          }
          ppppppplStack_148 = ppppppplStack_148 + 1;
          pppppplVar30 = (long ******)((long)pppppplVar30 + uVar35);
          ppppppplStack_e8 = ppppppplStack_148;
          apppppplStack_e0[0] = pppppplVar30;
          pppppplVar32 = (long ******)((long)pppppplVar32 + uVar35);
          apppppplStack_e0[1] = pppppplVar32;
          uVar36 = uVar36 | 1;
          uVar58 = uVar58 + 2;
        }
      }
      param_2 = param_2 + 8;
      pppppplVar28 = (long ******)((long)pppppplVar28 + uVar53);
      param_4 = (long ******)((long)param_4 + uVar53);
      uVar36 = uVar36 | 1;
      uVar48 = uVar48 + 0x10;
    }
    lVar45 = *(long *)(puVar25 + 0x860);
    ppppppplStack_2b0 = ppppppplStack_2b0 + lVar45;
    lVar51 = (*(long *)(puVar25 + 0x868) << 3) >> (ulong)bVar23;
    pppppplStack_2b8 = (long ******)((long)pppppplStack_2b8 + lVar51);
    pppppplStack_2c0 = (long ******)((long)pppppplStack_2c0 + lVar51);
    *(uint *)(param_1 + 0x3f1f0) = *(uint *)(param_1 + 0x3f1f0) ^ 1;
    uVar36 = uVar36 | 4;
    pppppplVar30 = (long ******)(ulong)uVar1;
  } while( true );
}



/* Entry: 104c06244; end: 104c0631f;  */

void FUN_104c06244(long param_1,long *param_2,long *param_3,uint param_4,int param_5,uint param_6)

{
  undefined2 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if ((param_6 & 1) != 0) {
    lVar4 = 0;
    for (lVar2 = 0; lVar2 != 0x10; lVar2 = lVar2 + 2) {
      *(undefined2 *)(param_1 + lVar2) = *(undefined2 *)(*param_2 + lVar4 + (ulong)param_4 + -2);
      lVar4 = *param_3 + lVar4;
    }
  }
  if ((param_5 != 0) && (1 < param_6)) {
    lVar2 = 0;
    puVar1 = (undefined2 *)(param_1 + 0x20);
    for (uVar3 = (ulong)(8 >> (param_5 == 1)); uVar3 != 0; uVar3 = uVar3 - 1) {
      lVar4 = ((ulong)(param_4 >> (param_5 != 3)) - 2) + lVar2;
      puVar1[-8] = *(undefined2 *)(param_2[1] + lVar4);
      *puVar1 = *(undefined2 *)(param_2[2] + lVar4);
      lVar2 = param_3[1] + lVar2;
      puVar1 = puVar1 + 1;
    }
  }
  return;
}



/* Entry: 104c06320; end: 104c0644b;  */

void FUN_104c06320(void)

{
  undefined1 in_ZR;
  long unaff_x26;
  
  FUN_104c0644c();
  func_0x000104c064d8(unaff_x26 + 0x50);
  func_0x000100d727b4();
  func_0x000104c06488();
  func_0x000100d732e0();
  func_0x000104c064a4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_104c0644c();
  func_0x000104c064d8(unaff_x26 + 0x30);
  func_0x000100d72ad8();
  func_0x000104c06488();
  func_0x000100d73798();
  func_0x000104c064a4();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_104c0644c();
    func_0x000100d72ad8(unaff_x26 + 0x30);
    func_0x000104c06488();
    func_0x000100d73798();
    func_0x000104c064a4();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      return;
    }
  }
  return;
}



/* Entry: 104c0644c; end: 104c064eb;  */

void FUN_104c0644c(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return;
}



/* Entry: 104c064ec; end: 104c06d0b;  */

void FUN_104c064ec(long param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar4;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x10_02;
  long lVar5;
  long extraout_x10_03;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long extraout_x11_02;
  long extraout_x11_03;
  long lVar6;
  
  _memcpy(param_2,param_3,0x2b04);
  *(undefined2 *)(param_2 + 8) = 0;
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined2 *)(param_2 + 0x28) = 0;
  *(undefined2 *)(param_2 + 0x38) = 0;
  *(undefined2 *)(param_2 + 0x4a) = 0;
  *(undefined2 *)(param_2 + 0x5a) = 0;
  *(undefined2 *)(param_2 + 0x6a) = 0;
  *(undefined2 *)(param_2 + 0x7a) = 0;
  *(undefined2 *)(param_2 + 0x8c) = 0;
  *(undefined2 *)(param_2 + 0x9c) = 0;
  *(undefined2 *)(param_2 + 0xac) = 0;
  *(undefined2 *)(param_2 + 0xbc) = 0;
  *(undefined2 *)(param_2 + 0xce) = 0;
  *(undefined2 *)(param_2 + 0xde) = 0;
  *(undefined2 *)(param_2 + 0xee) = 0;
  *(undefined2 *)(param_2 + 0xfe) = 0;
  *(undefined2 *)(param_2 + 0x110) = 0;
  *(undefined2 *)(param_2 + 0x130) = 0;
  *(undefined2 *)(param_2 + 0x150) = 0;
  *(undefined2 *)(param_2 + 0x170) = 0;
  *(undefined2 *)(param_2 + 0x192) = 0;
  *(undefined2 *)(param_2 + 0x1b2) = 0;
  *(undefined2 *)(param_2 + 0x1d4) = 0;
  *(undefined2 *)(param_2 + 500) = 0;
  lVar3 = 0;
  while (lVar3 != 5) {
    func_0x000104c06e4c();
    lVar5 = extraout_x11;
    for (lVar3 = extraout_x10; lVar3 != 2; lVar3 = lVar3 + 1) {
      for (lVar6 = 0; lVar6 != 0x20; lVar6 = lVar6 + 8) {
        *(undefined2 *)(lVar5 + lVar6) = 0;
      }
      lVar5 = lVar5 + 0x20;
    }
    lVar3 = extraout_x8 + 1;
  }
  lVar3 = 0;
  while (lVar3 != 5) {
    func_0x000104c06e4c();
    lVar5 = extraout_x11_00;
    for (lVar3 = extraout_x10_00; lVar3 != 2; lVar3 = lVar3 + 1) {
      for (lVar6 = 0; lVar6 != 0x148; lVar6 = lVar6 + 8) {
        *(undefined2 *)(lVar5 + lVar6) = 0;
      }
      lVar5 = lVar5 + 0x148;
    }
    lVar3 = extraout_x8_00 + 1;
  }
  lVar3 = 0;
  while (lVar3 != 4) {
    func_0x000104c06e4c();
    lVar5 = extraout_x11_01;
    for (lVar3 = extraout_x10_01; lVar3 != 2; lVar3 = lVar3 + 1) {
      for (lVar6 = 0; lVar6 != 0xa8; lVar6 = lVar6 + 8) {
        *(undefined2 *)(lVar5 + lVar6) = 0;
      }
      lVar5 = lVar5 + 0xa8;
    }
    lVar3 = extraout_x8_01 + 1;
  }
  lVar3 = 0;
  while (lVar3 != 5) {
    func_0x000104c06e4c();
    lVar5 = extraout_x11_02;
    for (lVar3 = extraout_x10_02; lVar3 != 2; lVar3 = lVar3 + 1) {
      for (lVar6 = 0; lVar6 != 0x2c; lVar6 = lVar6 + 4) {
        *(undefined2 *)(lVar5 + lVar6) = 0;
      }
      lVar5 = lVar5 + 0x2c;
    }
    lVar3 = extraout_x8_02 + 1;
  }
  lVar5 = param_2 + 0x170a;
  for (lVar3 = 0; lVar3 != 5; lVar3 = lVar3 + 1) {
    for (lVar6 = 0; lVar6 != 0x34; lVar6 = lVar6 + 4) {
      *(undefined2 *)(lVar5 + lVar6) = 0;
    }
    lVar5 = lVar5 + 0x34;
  }
  *(undefined2 *)(param_2 + 0x180e) = 0;
  *(undefined2 *)(param_2 + 0x1812) = 0;
  *(undefined2 *)(param_2 + 0x1816) = 0;
  *(undefined2 *)(param_2 + 0x181a) = 0;
  *(undefined2 *)(param_2 + 0x181e) = 0;
  lVar3 = param_2 + 0x185a;
  *(undefined2 *)(param_2 + 0x1822) = 0;
  for (uVar4 = 0; uVar4 != 2; uVar4 = uVar4 + 1) {
    for (lVar5 = 0; lVar5 != 0x1a0; lVar5 = lVar5 + 0x20) {
      *(undefined2 *)(lVar3 + (uVar4 ^ 1) * -2 + lVar5) = 0;
    }
    lVar3 = lVar3 + 0x1a0;
  }
  lVar3 = 0;
  while (lVar3 != 0x80) {
    func_0x000104c06e40();
    lVar3 = extraout_x8_03;
  }
  lVar5 = param_2 + 0x1c12;
  for (lVar3 = 1; lVar3 != 4; lVar3 = lVar3 + 1) {
    for (lVar6 = 0; lVar6 != 0x80; lVar6 = lVar6 + 0x20) {
      *(undefined2 *)(lVar5 + lVar6) = 0;
    }
    lVar5 = lVar5 + 0x80;
  }
  lVar3 = 0;
  while (lVar3 != 0x80) {
    func_0x000104c06e40();
    lVar3 = extraout_x8_04;
  }
  lVar3 = 0;
  while (lVar3 != 0xc0) {
    func_0x000104c06e40();
    lVar3 = extraout_x8_05;
  }
  *(undefined2 *)(param_2 + 0x1ede) = 0;
  *(undefined2 *)(param_2 + 0x1efe) = 0;
  *(undefined2 *)(param_2 + 0x1f16) = 0;
  lVar5 = param_2 + 0x1f2c;
  for (lVar3 = 0; lVar3 != 2; lVar3 = lVar3 + 1) {
    for (lVar6 = 0; lVar6 != 0xd0; lVar6 = lVar6 + 0x10) {
      *(undefined2 *)(lVar5 + lVar6) = 0;
    }
    lVar5 = lVar5 + 0xd0;
  }
  lVar5 = param_2 + 0x20c8;
  for (lVar3 = 0; lVar3 != 3; lVar3 = lVar3 + 1) {
    for (lVar6 = 0; lVar6 != 0xd0; lVar6 = lVar6 + 0x10) {
      *(undefined2 *)(lVar5 + lVar6) = 0;
    }
    lVar5 = lVar5 + 0xd0;
  }
  *(undefined2 *)(param_2 + 0x233e) = 0;
  for (lVar3 = 0; lVar3 != 0x80; lVar3 = lVar3 + 0x10) {
    *(undefined2 *)(param_2 + 0x234c + lVar3) = 0;
  }
  *(undefined2 *)(param_2 + 0x23c8) = 0;
  *(undefined2 *)(param_2 + 0x23de) = 0;
  *(undefined2 *)(param_2 + 0x23ee) = 0;
  *(undefined2 *)(param_2 + 0x23fe) = 0;
  lVar5 = param_2 + 0x240c;
  for (lVar3 = 0; lVar3 != 2; lVar3 = lVar3 + 1) {
    for (lVar6 = 0; lVar6 != 0x70; lVar6 = lVar6 + 0x10) {
      *(undefined2 *)(lVar5 + lVar6) = 0;
    }
    lVar5 = lVar5 + 0x70;
  }
  lVar3 = 0;
  while (lVar3 != 2) {
    func_0x000104c06e4c();
    lVar3 = extraout_x10_03;
    lVar5 = extraout_x11_03;
    while (lVar3 != 7) {
      lVar3 = lVar3 + 1;
      for (lVar6 = 0; lVar6 != 0x50; lVar6 = lVar6 + 0x10) {
        *(undefined2 *)(lVar5 + lVar6) = 0;
      }
      lVar5 = lVar5 + 0x52;
    }
    lVar3 = extraout_x8_06 + 1;
  }
  lVar3 = 0;
  lVar5 = param_2 + 0x2942;
  while( true ) {
    uVar2 = (uint)lVar3;
    if (0 < (int)uVar2) {
      uVar2 = 1;
    }
    if (lVar3 == 4) break;
    for (lVar6 = 0; lVar6 != 0x18; lVar6 = lVar6 + 8) {
      *(undefined2 *)(lVar5 + (ulong)uVar2 * 2 + lVar6) = 0;
    }
    lVar3 = lVar3 + 1;
    lVar5 = lVar5 + 0x18;
  }
  *(undefined2 *)(param_2 + 0x29a6) = 0;
  for (lVar3 = 0; lVar3 != 0x28; lVar3 = lVar3 + 8) {
    *(undefined2 *)(param_2 + 0x29ae + lVar3) = 0;
  }
  lVar3 = 0;
  *(undefined2 *)(param_2 + 0x29d4) = 0;
  *(undefined2 *)(param_2 + 0x29da) = 0;
  *(undefined2 *)(param_2 + 0x29de) = 0;
  while (lVar3 != 0x10) {
    func_0x000104c06e34();
    lVar3 = extraout_x8_07;
  }
  lVar3 = 0;
  while (lVar3 != 0x58) {
    func_0x000104c06e34();
    lVar3 = extraout_x8_08;
  }
  do {
    func_0x000104c06e20();
  } while (extraout_x9 != 0);
  *(undefined2 *)(param_2 + 0x2a9e) = 0;
  *(undefined2 *)(param_2 + 0x2aa2) = 0;
  *(undefined2 *)(param_2 + 0x2aa6) = 0;
  do {
    func_0x000104c06e20();
  } while (extraout_x9_00 != 0);
  *(undefined2 *)(param_2 + 0x2afe) = 0;
  *(undefined2 *)(param_2 + 0x2b02) = 0;
  if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
    _memcpy(param_2 + 0x2b20,param_3 + 0x2b20,0x6c0);
    lVar3 = 0;
    while (lVar3 != 0x80) {
      func_0x000104c06e40();
      lVar3 = extraout_x8_09;
    }
    lVar3 = 0;
    while (lVar3 != 0x120) {
      func_0x000104c06e40();
      lVar3 = extraout_x8_10;
    }
    for (lVar3 = 0; lVar3 != 0x80; lVar3 = lVar3 + 0x10) {
      *(undefined2 *)(param_2 + 0x2cce + lVar3) = 0;
    }
    lVar5 = param_2 + 0x2d44;
    for (lVar3 = 0; lVar3 != 2; lVar3 = lVar3 + 1) {
      for (lVar6 = 0; lVar6 != 0x40; lVar6 = lVar6 + 8) {
        *(undefined2 *)(lVar5 + lVar6) = 0;
      }
      lVar5 = lVar5 + 0x40;
    }
    for (lVar3 = 0; lVar3 != 0x20; lVar3 = lVar3 + 8) {
      *(undefined2 *)(param_2 + 0x2dc6 + lVar3) = 0;
    }
    for (lVar3 = 0; lVar3 != 0xb0; lVar3 = lVar3 + 8) {
      *(undefined2 *)(param_2 + 0x2de4 + lVar3) = 0;
    }
    lVar3 = 0;
    *(undefined2 *)(param_2 + 0x2e92) = 0;
    *(undefined2 *)(param_2 + 0x2e96) = 0;
    *(undefined2 *)(param_2 + 0x2e9a) = 0;
    while (lVar3 != 0x18) {
      func_0x000104c06e34();
      lVar3 = extraout_x8_11;
    }
    lVar3 = 0;
    *(undefined2 *)(param_2 + 0x2eb6) = 0;
    *(undefined2 *)(param_2 + 0x2eba) = 0;
    while (lVar3 != 0x18) {
      func_0x000104c06e34();
      lVar3 = extraout_x8_12;
    }
    lVar3 = 0;
    *(undefined2 *)(param_2 + 0x2ed6) = 0;
    *(undefined2 *)(param_2 + 0x2eda) = 0;
    *(undefined2 *)(param_2 + 0x2ede) = 0;
    while (lVar3 != 0x10) {
      func_0x000104c06e34();
      lVar3 = extraout_x8_13;
    }
    lVar3 = 0;
    while (lVar3 != 0x14) {
      func_0x000104c06e34();
      lVar3 = extraout_x8_14;
    }
    lVar3 = 0;
    while (lVar3 != 0x14) {
      func_0x000104c06e34();
      lVar3 = extraout_x8_15;
    }
    lVar3 = 0;
    while (lVar3 != 0x18) {
      func_0x000104c06e34();
      lVar3 = extraout_x8_16;
    }
    lVar3 = 0;
    while (lVar3 != 0x18) {
      func_0x000104c06e34();
      lVar3 = extraout_x8_17;
    }
    lVar3 = 0;
    while (lVar3 != 0x24) {
      func_0x000104c06e34();
      lVar3 = extraout_x8_18;
    }
    do {
      func_0x000104c06e20();
    } while (extraout_x9_01 != 0);
    do {
      func_0x000104c06e20();
    } while (extraout_x9_02 != 0);
    *(undefined2 *)(param_2 + 0x2fda) = 0;
    *(undefined2 *)(param_2 + 0x2fde) = 0;
    *(undefined2 *)(param_2 + 0x2fe2) = 0;
    *(undefined2 *)(param_2 + 0x2fe6) = 0;
    *(undefined2 *)(param_2 + 0x2fea) = 0;
    *(undefined2 *)(param_2 + 0x2fee) = 0;
    do {
      func_0x000104c06e20();
    } while (extraout_x9_03 != 0);
    lVar3 = 0;
    *(undefined2 *)(param_2 + 0x3016) = 0;
    *(undefined2 *)(param_2 + 0x301a) = 0;
    *(undefined2 *)(param_2 + 0x301e) = 0;
    while (lVar3 != 0x10) {
      func_0x000104c06e34();
      lVar3 = extraout_x8_19;
    }
    lVar3 = 0;
    while (lVar3 != 0x1c) {
      func_0x000104c06e34();
      lVar3 = extraout_x8_20;
    }
    lVar3 = 0;
    while (lVar3 != 0x58) {
      func_0x000104c06e34();
      lVar3 = extraout_x8_21;
    }
    lVar5 = param_2 + 0x30fe;
    for (lVar3 = 0; lVar3 != 2; lVar3 = lVar3 + 1) {
      lVar1 = param_2 + 0x30c0 + lVar3 * 0x80;
      *(undefined2 *)(lVar1 + 0x14) = 0;
      *(undefined2 *)(lVar1 + 0x22) = 0;
      *(undefined2 *)(lVar1 + 0x26) = 0;
      *(undefined2 *)(lVar1 + 0x2e) = 0;
      *(undefined2 *)(lVar1 + 0x36) = 0;
      *(undefined2 *)(lVar1 + 0x3a) = 0;
      for (lVar6 = 0; lVar6 != 0x28; lVar6 = lVar6 + 4) {
        *(undefined2 *)(lVar5 + lVar6) = 0;
      }
      *(undefined2 *)(lVar1 + 0x6e) = 0;
      *(undefined2 *)(lVar1 + 0x72) = 0;
      lVar5 = lVar5 + 0x80;
    }
    *(undefined2 *)(param_2 + 0x31c6) = 0;
  }
  return;
}



/* Entry: 104c06d0c; end: 104c06d2f;  */

void FUN_104c06d0c(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  
  *param_1 = 0;
  uVar1 = (uint)(0x3c < param_2);
  if (0x14 < param_2) {
    uVar1 = uVar1 + 1;
  }
  if (0x78 < param_2) {
    uVar1 = uVar1 + 1;
  }
  *(uint *)(param_1 + 1) = uVar1;
  return;
}



/* Entry: 104c06d30; end: 104c06db7;  */

void FUN_104c06d30(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*param_2 == 0) {
    _memcpy(param_1,&UNK_10dd62b00 + (ulong)*(uint *)(param_2 + 1) * 0x1840,0x1840);
    _memcpy(param_1 + 0x1840,&UNK_10dd68c00,0x1900);
    param_1 = param_1 + 0x3140;
    puVar1 = &UNK_10dd6a480;
    uVar2 = 0x3c0;
  }
  else {
    puVar1 = (undefined *)param_2[1];
    uVar2 = 0x3500;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,puVar1,uVar2);
  return;
}



/* Entry: 104c06db8; end: 104c06e17;  */

undefined8 FUN_104c06db8(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0xcdd0);
  FUN_104c28f20(plVar1,0x3504);
  *param_2 = (long)plVar1;
  if (plVar1 == (long *)0x0) {
    uVar2 = 0xfffffff4;
  }
  else {
    lVar3 = *plVar1;
    param_2[1] = lVar3;
    uVar2 = 0;
    if (param_3 != 0) {
      param_2[2] = lVar3 + 0x3500;
      *(undefined4 *)(lVar3 + 0x3500) = 0;
    }
  }
  return uVar2;
}



/* Entry: 104c06e18; end: 104c06e57;  */

void FUN_104c06e18(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  lVar5 = *param_1;
  if (lVar5 != 0) {
    *param_1 = 0;
    piVar1 = (int *)(lVar5 + 0x10);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((iVar2 + -1 == 0) &&
       (iVar2 = *(int *)(lVar5 + 0x14),
       (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x20)),
       iVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(lVar5);
      return;
    }
  }
  return;
}



/* Entry: 104c06e58; end: 104c06edf;  */

void FUN_104c06e58(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  
  if ((((-1 < param_3) && (param_1 != (long *)0x0)) && (param_2 != 0)) && (param_4 != 0)) {
    puVar1 = (undefined8 *)0x28;
    _malloc();
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = param_2;
      puVar1[2] = 0x100000001;
      puVar1[3] = param_4;
      puVar1[4] = param_5;
      param_1[1] = param_3;
      param_1[2] = (long)puVar1;
      *param_1 = param_2;
      FUN_104c07024(0);
    }
  }
  return;
}



/* Entry: 104c06ee0; end: 104c06f1f;  */

void FUN_104c06ee0(undefined8 param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x10) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x40) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x48);
  return;
}



/* Entry: 104c06f20; end: 104c06f73;  */

void FUN_104c06f20(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_104c28f7c(param_1 + 5);
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar6 = param_2[2];
  uVar8 = param_2[5];
  uVar7 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar6;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  if (param_1[5] != 0) {
    piVar1 = (int *)(param_1[5] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 104c06f74; end: 104c06fa3;  */

void FUN_104c06f74(long param_1)

{
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x28);
    func_0x000104c07048();
    FUN_104c28f7c(&uStack_18);
  }
  return;
}



/* Entry: 104c06fa4; end: 104c07023;  */

void FUN_104c06fa4(long *param_1)

{
  long lStack_28;
  
  if (param_1 != (long *)0x0) {
    lStack_28 = param_1[8];
    if (param_1[2] != 0) {
      if (*param_1 == 0) {
        return;
      }
      FUN_104c28f7c(param_1 + 2);
    }
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[3] = -0x8000000000000000;
    param_1[5] = -1;
    FUN_104c28f7c(&lStack_28);
  }
  return;
}



/* Entry: 104c07024; end: 104c07067;  */

void FUN_104c07024(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x8000000000000000;
  *(undefined8 *)(unaff_x20 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
  return;
}



/* Entry: 104c07068; end: 104c0773b;  */

undefined8 FUN_104c07068(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  code *extraout_x8;
  long extraout_x8_00;
  char *pcVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  cVar7 = *(char *)(*(long *)(lVar3 + 8) + 0x188);
  uVar24 = (ulong)(cVar7 == '\0');
  lVar22 = *(long *)(lVar3 + 0xcb8);
  iVar10 = *(int *)(lVar3 + 0xd90);
  iVar5 = *(int *)(lVar4 + 0x353c);
  iVar11 = *(int *)(lVar4 + 0x3538);
  lVar17 = *(long *)(lVar3 + 0x18);
  uVar9 = *(ushort *)(lVar17 + (long)iVar11 * 2 + 0x1c2);
  if (((*(byte *)(lVar17 + 0xe8) & 1) == 0) && (*(char *)(lVar17 + 0x1a3) == '\0')) {
    uVar16 = 1;
  }
  else {
    func_0x000104c2a4fc(param_1 + 0x298,lVar3 + 0xfd0,*(undefined4 *)(lVar4 + 0x3528),
                        *(undefined4 *)(lVar4 + 0x352c),*(undefined4 *)(lVar4 + 0x3530),
                        *(undefined4 *)(lVar4 + 0x3534),
                        *(int *)(param_1 + 0x1c) >> (*(uint *)(lVar3 + 0xd8c) & 0x1f),iVar5,
                        *(undefined4 *)(param_1 + 0x3f204));
    lVar17 = *(long *)(lVar3 + 0x18);
    if ((*(byte *)(lVar17 + 0xe8) & 1) == 0) {
      uVar16 = 1;
    }
    else if (*(uint *)(lVar22 + 8) < 2) {
      uVar16 = 0;
    }
    else {
      iVar15 = *(int *)(param_1 + 0x1c);
      iVar23 = *(int *)(lVar4 + 0x3530);
      uVar16 = *(uint *)(lVar3 + 0xd8c);
      lVar21 = *(long *)(lVar4 + 0x3578);
      for (lVar20 = 0; lVar20 != 0x38; lVar20 = lVar20 + 8) {
        *(undefined8 *)(lVar21 + (long)(iVar15 - iVar23 >> (uVar16 & 0x1f)) * 0x38 + lVar20) =
             0x8000000080000000;
      }
      uVar16 = (*(uint *)(lVar17 + 0xe8) ^ 0xffffffff) & 1;
    }
  }
  uVar19 = (uint)(uVar9 >> uVar24);
  FUN_104c0773c(param_1 + 0x20,uVar16,*(undefined4 *)(param_1 + 0x3f204));
  if (*(int *)(param_1 + 0x3f204) == 2) {
    iVar11 = *(int *)(lVar3 + 0xd80);
    if (*(uint *)(lVar22 + 0x18) < 2) {
      lVar17 = 0;
    }
    else {
      lVar17 = (long)iVar11 * (long)(int)(uint)*(byte *)(*(long *)(lVar3 + 0x18) + 0x1c1);
    }
    iVar15 = *(int *)(lVar4 + 0x3528);
    *(int *)(param_1 + 0x18) = iVar15;
    *(ulong *)(param_1 + 0x290) =
         *(long *)(lVar3 + 0xfc0) + lVar17 * 0x270 + (ulong)uVar19 * 0x270 +
         (long)(iVar11 * iVar5) * 0x270;
    while (iVar15 < *(int *)(lVar4 + 0x352c)) {
      if ((**(int **)(lVar22 + 0x340) != 0) ||
         (lVar17 = param_1, FUN_104c077c4(param_1,uVar24,(&PTR_DAT_1130a8620)[cVar7 == '\0']),
         (int)lVar17 != 0)) goto LAB_104c0769c;
      if (((*(uint *)(param_1 + 0x18) >> 4 & 1) != 0) ||
         (*(char *)(*(long *)(lVar3 + 8) + 0x188) != '\0')) {
        *(long *)(param_1 + 0x290) = *(long *)(param_1 + 0x290) + 0x270;
      }
      iVar15 = *(uint *)(param_1 + 0x18) + iVar10;
      *(int *)(param_1 + 0x18) = iVar15;
    }
    func_0x000104c12a24();
LAB_104c076a8:
    uVar14 = 0;
  }
  else {
    if ((1 < *(uint *)(*(long *)(lVar3 + 0xcb8) + 0x18)) &&
       (*(char *)(*(long *)(lVar3 + 0x18) + 0x1b5) != '\0')) {
      func_0x000104c1278c(*(undefined8 *)(*(long *)(lVar3 + 0xcb8) + 63000));
      (*extraout_x8)(lVar3 + 0xfd0);
    }
    *(undefined8 *)(param_1 + 0x2038) = 0;
    *(undefined8 *)(param_1 + 0x2030) = 0;
    *(undefined8 *)(param_1 + 0x2028) = 0;
    *(undefined8 *)(param_1 + 0x2020) = 0;
    iVar15 = *(int *)(lVar4 + 0x3528);
    *(int *)(param_1 + 0x18) = iVar15;
    iVar23 = *(int *)(lVar3 + 0xd80);
    lVar17 = *(long *)(lVar3 + 0x1148);
    *(ulong *)(param_1 + 0x290) =
         *(long *)(lVar3 + 0xfc0) + (ulong)uVar19 * 0x270 + (long)(iVar23 * iVar5) * 0x270;
    *(ulong *)(param_1 + 0x3f1e8) =
         lVar17 + (long)(iVar23 * (*(int *)(param_1 + 0x1c) >> 5)) * 0x544 + (ulong)uVar19 * 0x544;
    while (iVar15 < *(int *)(lVar4 + 0x352c)) {
      if (**(int **)(lVar22 + 0x340) != 0) goto LAB_104c0769c;
      puVar1 = (undefined1 *)(*(long *)(param_1 + 0x3f1e8) + 0x500);
      if (cVar7 == '\0') {
        uVar24 = (ulong)(*(uint *)(param_1 + 0x1c) >> 3) & 2 |
                 (ulong)(*(uint *)(param_1 + 0x18) >> 4) & 1;
        *(undefined1 **)(param_1 + 0x3f1f8) = puVar1 + uVar24;
        puVar1[uVar24] = 0xff;
      }
      else {
        *(undefined1 **)(param_1 + 0x3f1f8) = puVar1;
        *puVar1 = 0xff;
        *(undefined1 *)(*(long *)(param_1 + 0x3f1f8) + 1) = 0xff;
        *(undefined1 *)(*(long *)(param_1 + 0x3f1f8) + 2) = 0xff;
        *(undefined1 *)(*(long *)(param_1 + 0x3f1f8) + 3) = 0xff;
      }
      for (lVar17 = 0; lVar17 != 3; lVar17 = lVar17 + 1) {
        if ((*(uint *)(lVar3 + 0x14d8) >> (ulong)((uint)lVar17 & 0x1f) & 1) != 0) {
          if (lVar17 == 0) {
            uVar19 = 0;
            uVar16 = 0;
          }
          else {
            uVar19 = (uint)(*(int *)(lVar3 + 0x878) == 1);
            uVar16 = (uint)(*(int *)(lVar3 + 0x878) != 3);
          }
          lVar21 = *(long *)(lVar3 + 0x18);
          lVar20 = lVar21;
          if (lVar17 != 0) {
            lVar20 = lVar21 + 1;
          }
          bVar8 = *(byte *)(lVar20 + 0x370);
          iVar23 = *(int *)(param_1 + 0x1c);
          uVar2 = (iVar23 << 2) >> uVar19;
          iVar15 = 1 << (ulong)(bVar8 & 0x1f);
          uVar12 = iVar15 - 1;
          if (((uVar2 & uVar12) == 0) &&
             ((iVar15 = iVar15 >> 1, iVar23 == 0 ||
              ((int)(uVar2 + iVar15) <= (int)(*(int *)(lVar3 + 0x874) + uVar19) >> uVar19)))) {
            if (*(int *)(lVar21 + 0xec) == *(int *)(lVar21 + 0xf0)) {
              iVar6 = *(int *)(param_1 + 0x18);
              uVar19 = (iVar6 << 2) >> uVar16;
              if (((uVar19 & uVar12) == 0) &&
                 ((iVar6 == 0 ||
                  ((int)(uVar19 + iVar15) <= (int)(*(int *)(lVar3 + 0x870) + uVar16) >> uVar16)))) {
                func_0x000104c12608(*(long *)(lVar3 + 0x1150) +
                                    (long)(*(int *)(lVar3 + 0xd94) * (iVar23 >> 5) + (iVar6 >> 5)) *
                                    0x6c + lVar17 * 0x24);
              }
            }
            else {
              iVar15 = ((int)(*(int *)(lVar3 + 0x980) + uVar16) >> uVar16) + iVar15 >>
                       (bVar8 & 0x1f);
              if (iVar15 < 2) {
                iVar15 = 1;
              }
              uVar19 = (uint)bVar8;
              iVar6 = (8 << (ulong)(uVar19 & 0x1f)) + -1;
              iVar23 = ((int)(*(int *)(param_1 + 0x18) * (uint)*(byte *)(lVar21 + 0x1a0) * 4) >>
                       uVar16) + iVar6 >> (uVar19 + 3 & 0x1f);
              iVar6 = ((int)((uint)*(byte *)(lVar21 + 0x1a0) * (*(int *)(param_1 + 0x18) + iVar10) *
                            4) >> uVar16) + iVar6 >> (uVar19 + 3 & 0x1f);
              if (iVar15 <= iVar6) {
                iVar6 = iVar15;
              }
              for (; iVar23 < iVar6; iVar23 = iVar23 + 1) {
                func_0x000104c12608(*(long *)(lVar3 + 0x1150) +
                                    (long)((*(int *)(param_1 + 0x1c) >> 5) * *(int *)(lVar3 + 0xd94)
                                          + ((iVar23 << (ulong)(uVar16 + uVar19 & 0x1f)) >> 7)) *
                                    0x6c + lVar17 * 0x24);
              }
            }
          }
        }
      }
      lVar17 = param_1;
      FUN_104c077c4(param_1,cVar7 == '\0',(&PTR_DAT_1130a8620)[cVar7 == '\0']);
      if ((int)lVar17 != 0) goto LAB_104c0769c;
      if (((*(uint *)(param_1 + 0x18) >> 4 & 1) != 0) ||
         (*(char *)(*(long *)(lVar3 + 8) + 0x188) != '\0')) {
        *(long *)(param_1 + 0x290) = *(long *)(param_1 + 0x290) + 0x270;
        *(long *)(param_1 + 0x3f1e8) = *(long *)(param_1 + 0x3f1e8) + 0x544;
      }
      iVar15 = *(uint *)(param_1 + 0x18) + iVar10;
      *(int *)(param_1 + 0x18) = iVar15;
    }
    if (((*(char *)(*(long *)(lVar3 + 8) + 0x191) != '\0') &&
        (1 < *(uint *)(*(long *)(lVar3 + 0xcb8) + 0x18))) &&
       ((*(byte *)(*(long *)(lVar3 + 0x18) + 0xe8) & 1) != 0)) {
      func_0x000104c1278c();
      FUN_104c081ec(*(undefined8 *)(extraout_x8_00 + 0xf620),param_1 + 0x298);
    }
    if (*(int *)(param_1 + 0x3f204) != 1) {
      func_0x000104c12a24();
    }
    uVar16 = *(int *)(lVar3 + 0xd7c) + 0x1fU & 0xffffffe0;
    _memcpy(*(long *)(lVar3 + 0x1418) + (long)(int)(*(uint *)(param_1 + 0x1c) + uVar16 * iVar11),
            param_1 + ((ulong)*(uint *)(param_1 + 0x1c) & 0x10) + 0x200,(long)iVar10);
    bVar13 = *(int *)(lVar3 + 0x878) == 1;
    _memcpy(*(long *)(lVar3 + 0x1420) +
            (long)(((int)*(uint *)(param_1 + 0x1c) >> bVar13) + ((int)uVar16 >> bVar13) * iVar11),
            param_1 + (ulong)((*(uint *)(param_1 + 0x1c) & 0x10) >> bVar13) + 0x220,
            (long)(iVar10 >> bVar13));
    iVar10 = *(int *)(lVar4 + 0x351c);
    if (-0xf < iVar10) {
      if ((*(int *)(lVar22 + 0xf660) == 0) ||
         ((*(int *)(param_1 + 0x1c) >> (*(uint *)(lVar3 + 0xd8c) & 0x1f)) + 1 <
          (int)(uint)*(ushort *)(*(long *)(lVar3 + 0x18) + (long)iVar5 * 2 + 0x246)))
      goto LAB_104c076a8;
      pcVar18 = (char *)(*(long *)(lVar4 + 0x3500) + (long)(-7 - iVar10 >> 3));
      uVar16 = 0x80 >> (ulong)(1U - iVar10 & 7);
      if ((uVar16 * 2 - 1 & (uint)(byte)pcVar18[-1]) != uVar16) {
        return 1;
      }
      do {
        if (*(char **)(lVar4 + 0x3508) <= pcVar18) goto LAB_104c076a8;
        cVar7 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      } while (cVar7 == '\0');
    }
LAB_104c0769c:
    uVar14 = 1;
  }
  return uVar14;
}



/* Entry: 104c0773c; end: 104c077c3;  */

void FUN_104c0773c(undefined8 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)param_2;
  param_1[0x1d] =
       CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,CONCAT12(uVar1,
                                                  CONCAT11(uVar1,uVar1)))))));
  param_1[0x1c] =
       CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,CONCAT12(uVar1,
                                                  CONCAT11(uVar1,uVar1)))))));
  param_1[0x1f] =
       CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,CONCAT12(uVar1,
                                                  CONCAT11(uVar1,uVar1)))))));
  param_1[0x1e] =
       CONCAT17(uVar1,CONCAT16(uVar1,CONCAT15(uVar1,CONCAT14(uVar1,CONCAT13(uVar1,CONCAT12(uVar1,
                                                  CONCAT11(uVar1,uVar1)))))));
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  if (param_2 != 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  if (param_3 != 2) {
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    param_1[0x3d] = 0x202020202020202;
    param_1[0x3c] = 0x202020202020202;
    param_1[0x3f] = 0x202020202020202;
    param_1[0x3e] = 0x202020202020202;
    param_1[0x41] = 0x101010101010101;
    param_1[0x40] = 0x101010101010101;
    param_1[0x43] = 0x101010101010101;
    param_1[0x42] = 0x101010101010101;
    param_1[0x45] = 0;
    param_1[0x44] = 0;
    param_1[0x35] = 0xffffffffffffffff;
    param_1[0x34] = 0xffffffffffffffff;
    param_1[0x37] = 0xffffffffffffffff;
    param_1[0x36] = 0xffffffffffffffff;
    param_1[0x39] = 0x404040404040404;
    param_1[0x38] = 0x404040404040404;
    param_1[0x3b] = 0x404040404040404;
    param_1[0x3a] = 0x404040404040404;
    if (param_2 == 0) {
      param_1[0x29] = 0xffffffffffffffff;
      param_1[0x28] = 0xffffffffffffffff;
      param_1[0x2b] = 0xffffffffffffffff;
      param_1[0x2a] = 0xffffffffffffffff;
      param_1[0x25] = 0xffffffffffffffff;
      param_1[0x24] = 0xffffffffffffffff;
      param_1[0x27] = 0xffffffffffffffff;
      param_1[0x26] = 0xffffffffffffffff;
      param_1[0x21] = 0;
      param_1[0x20] = 0;
      param_1[0x23] = 0;
      param_1[0x22] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
    }
    param_1[5] = 0x4040404040404040;
    param_1[4] = 0x4040404040404040;
    param_1[7] = 0x4040404040404040;
    param_1[6] = 0x4040404040404040;
    param_1[9] = 0x4040404040404040;
    param_1[8] = 0x4040404040404040;
    param_1[0xb] = 0x4040404040404040;
    param_1[10] = 0x4040404040404040;
    param_1[0xd] = 0x4040404040404040;
    param_1[0xc] = 0x4040404040404040;
    param_1[0xf] = 0x4040404040404040;
    param_1[0xe] = 0x4040404040404040;
    param_1[0x2d] = 0x303030303030303;
    param_1[0x2c] = 0x303030303030303;
    param_1[0x2f] = 0x303030303030303;
    param_1[0x2e] = 0x303030303030303;
    param_1[0x31] = 0x303030303030303;
    param_1[0x30] = 0x303030303030303;
    param_1[0x33] = 0x303030303030303;
    param_1[0x32] = 0x303030303030303;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
  }
  return;
}



/* Entry: 104c077c4; end: 104c07ff7;  */

void FUN_104c077c4(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ushort *puVar15;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long extraout_x10;
  long lVar16;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x11;
  uint uVar17;
  int iVar18;
  ulong unaff_x27;
  long lVar19;
  
  iVar18 = (int)unaff_x27;
  func_0x000104c12c6c();
  lVar19 = *(long *)(param_2 + 8);
  iVar11 = *(int *)(lVar19 + 0xd78);
  iVar10 = *(int *)(lVar19 + 0xd7c);
  param_3 = param_3 & 0xffffffff;
  lVar13 = param_3 * 0x80 + 0x1b90;
  while( true ) {
    uVar17 = (uint)param_3;
    uVar6 = 0x10 >> (ulong)(uVar17 & 0x1f);
    iVar1 = uVar6 + *(uint *)(param_2 + 0x18);
    iVar2 = uVar6 + *(uint *)(param_2 + 0x1c);
    if (iVar1 < iVar11 || iVar2 < iVar10) break;
    param_4 = (ulong)*(ushort *)(param_4 + 8) + param_4;
    param_3 = param_3 + 1;
    lVar13 = lVar13 + 0x80;
  }
  if (*(int *)(param_2 + 0x3f204) == 2) {
    if ((iVar1 < iVar11 && iVar10 != iVar2) && (iVar11 <= iVar1 || iVar2 <= iVar10)) {
      lVar13 = param_2;
      func_0x000104c12530();
      iVar11 = (int)lVar13;
      pbVar3 = (byte *)(extraout_x8_00 + extraout_x10_00 * 0x20);
      if (*pbVar3 == uVar17) {
        uVar14 = (ulong)pbVar3[2];
        goto LAB_104c07a0c;
      }
      if (uVar17 == 4) {
        lVar13 = param_2;
        func_0x000104c12aa8(param_2,4,0x15,3);
        iVar11 = (int)lVar13;
        if (iVar11 != 0) {
          return;
        }
        uVar5 = *(undefined4 *)(param_2 + 0x3f200);
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
        func_0x000104c12344();
        if (iVar11 != 0) {
          return;
        }
        *(ulong *)(param_2 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_2 + 0x18) + -1);
        func_0x000104c12344();
        if (iVar11 != 0) {
          return;
        }
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
        *(undefined4 *)(param_2 + 0x3f200) = uVar5;
        func_0x000104c12344();
        if (iVar11 != 0) {
          return;
        }
        uVar12 = 0;
        param_1 = CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) + -1,
                           (int)*(undefined8 *)(param_2 + 0x18) + -1);
      }
      else {
        func_0x000104c12240(*(undefined2 *)(param_4 + 8));
        if (iVar11 != 0) {
          return;
        }
        func_0x000104c12314();
        func_0x000104c12240(*(undefined2 *)(param_4 + 10));
        if (iVar11 != 0) {
          return;
        }
        func_0x000104c12c1c();
        func_0x000104c12240(*(undefined2 *)(param_4 + 0xc));
        if (iVar11 != 0) {
          return;
        }
        func_0x000104c12314();
        func_0x000104c12408(*(undefined2 *)(param_4 + 0xe));
        if (iVar11 != 0) {
          return;
        }
        func_0x000104c128f8(0);
        uVar12 = extraout_w8;
      }
      *(undefined8 *)(param_2 + 0x18) = param_1;
      goto LAB_104c07bfc;
    }
    if (iVar11 <= iVar1) {
      func_0x000104c12530();
      uVar12 = (uint)(*(byte *)(extraout_x8_01 + extraout_x10_01 * 0x20) != uVar17);
LAB_104c07af8:
      iVar18 = (int)unaff_x27;
      if (uVar12 == 0) {
        func_0x000104c123b4();
        func_0x000104c12aa0();
        if (uVar12 != 0) {
          return;
        }
        uVar12 = 1;
      }
      else {
        func_0x000104c12240(*(undefined2 *)(param_4 + 8));
        if (uVar12 != 0) {
          return;
        }
        func_0x000104c12444();
        func_0x000104c12408(*(undefined2 *)(param_4 + 0xc));
        if (uVar12 != 0) {
          return;
        }
        uVar12 = 0;
        *(uint *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) - uVar6;
      }
      goto LAB_104c07bfc;
    }
    lVar13 = param_2;
    func_0x000104c12530();
    iVar11 = (int)lVar13;
    iVar10 = iVar11;
    if (*(byte *)(extraout_x8 + extraout_x10 * 0x20) == uVar17) {
LAB_104c078a0:
      iVar18 = (int)unaff_x27;
      func_0x000104c123b4();
      func_0x000104c12a14();
      if (iVar11 != 0) {
        return;
      }
      uVar12 = 1;
      goto LAB_104c07bfc;
    }
  }
  else {
    lVar16 = *(long *)(param_2 + 0x10);
    unaff_x27 = (ulong)(*(uint *)(param_2 + 0x18) >> 1) & 0xf;
    uVar12 = *(byte *)(*(long *)(param_2 + 0x290) + unaff_x27 + 0x220) >> (ulong)(4 - uVar17 & 0x1f)
             & 1;
    uVar7 = (uint)(*(byte *)(param_2 + ((ulong)(*(uint *)(param_2 + 0x1c) >> 1) & 0xf) + 0x240) >>
                  (ulong)(4 - uVar17 & 0x1f));
    puVar15 = (ushort *)(lVar16 + (ulong)(uVar12 | (uVar7 & 1) << 1) * 0x20 + lVar13 + -0x10);
    if ((iVar1 < iVar11 && iVar10 != iVar2) && (iVar11 <= iVar1 || iVar2 <= iVar10)) {
      uVar14 = lVar16 + 0x3500;
      func_0x000100daf650(uVar14,puVar15,(&UNK_10dd74eae)[param_3]);
      if (((*(int *)(lVar19 + 0x878) == 2) && (uVar6 = (int)uVar14 - 2, uVar6 < 8)) &&
         ((0xb1U >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
        return;
      }
LAB_104c07a0c:
                    /* WARNING: Could not recover jumptable at 0x000104c07a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(&UNK_10dd6a850 + (uVar14 & 0xffffffff) * 2) * 4 + 0x104c07a34))
                ();
      return;
    }
    iVar10 = (uVar7 & 1) * 2;
    if (iVar11 <= iVar1) {
      uVar14 = (ulong)(iVar10 + uVar12);
      lVar4 = lVar16 + uVar14 * 0x20 + lVar13;
      iVar11 = (((uint)*puVar15 - (uint)*(ushort *)(lVar4 + -0xe)) - (uint)*(ushort *)(lVar4 + -4))
               + (uint)*(ushort *)(lVar4 + -0xc);
      if (uVar17 != 0) {
        puVar15 = (ushort *)(lVar16 + uVar14 * 0x20 + lVar13);
        iVar11 = (iVar11 + (uint)puVar15[-1]) - (uint)*puVar15;
      }
      lVar16 = lVar16 + 0x3500;
      func_0x000100daf940(lVar16,iVar11);
      uVar12 = (uint)lVar16;
      if ((*(int *)(lVar19 + 0x878) == 2) && (uVar12 == 0)) {
        return;
      }
      goto LAB_104c07af8;
    }
    uVar14 = (ulong)(iVar10 + uVar12);
    lVar19 = lVar16 + uVar14 * 0x20 + lVar13;
    iVar11 = ((uint)*(ushort *)(lVar19 + -6) - (uint)*(ushort *)(lVar19 + -8)) +
             (uint)*(ushort *)(lVar19 + -0xe);
    if (uVar17 != 0) {
      puVar15 = (ushort *)(lVar16 + uVar14 * 0x20 + lVar13);
      iVar11 = (iVar11 + (uint)*puVar15) - (uint)puVar15[-1];
    }
    lVar16 = lVar16 + 0x3500;
    func_0x000100daf940(lVar16,iVar11);
    iVar10 = (int)lVar16;
    iVar11 = 0;
    if (iVar10 == 0) goto LAB_104c078a0;
  }
  iVar18 = (int)unaff_x27;
  func_0x000104c12240(*(undefined2 *)(param_4 + 8));
  if (iVar10 != 0) {
    return;
  }
  func_0x000104c12314();
  func_0x000104c12408(*(undefined2 *)(param_4 + 10));
  if (iVar10 != 0) {
    return;
  }
  uVar12 = 0;
  *(uint *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) - uVar6;
LAB_104c07bfc:
  uVar7 = 0;
  if (uVar17 != 4) {
    uVar7 = uVar12 ^ 1;
  }
  if ((uVar7 & 1) == 0) {
    bVar8 = 1 < *(uint *)(param_2 + 0x3f204);
    bVar9 = *(uint *)(param_2 + 0x3f204) == 2;
    if (!bVar9) {
      func_0x000104c12c10(0);
      if (!bVar8 || bVar9) {
                    /* WARNING: Could not recover jumptable at 0x000104c07c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10dd6a864)[extraout_x8_02] * 4 + 0x104c07c44))();
        return;
      }
      if (uVar6 == 0x10) {
        func_0x000104c127b8();
        *(undefined8 *)(extraout_x11 + iVar18 + 0x220) = extraout_x9;
        *(undefined8 *)(*(long *)(param_2 + 0x290) + (long)iVar18 + 0x228) = extraout_x9;
        func_0x000104c12bbc();
        *(undefined8 *)(extraout_x9_00 + 0x248) = extraout_x8_03;
      }
    }
  }
  return;
}



/* Entry: 104c07ff8; end: 104c081eb;  */

void FUN_104c07ff8(long param_1,char *param_2,int param_3,uint param_4)

{
  long *plVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  char cVar8;
  char cVar9;
  
  if (param_4 == 1) {
    lVar4 = param_1 + 0x3500;
    func_0x000100daf3e4(lVar4,param_1 + 0x29d0,2);
    uVar3 = (uint)lVar4;
    param_4 = uVar3;
    if (uVar3 != 0) {
      param_4 = uVar3 + 1;
    }
  }
  else {
    lVar4 = 0x29d8;
    if (param_4 != 2) {
      lVar4 = 0x29dc;
    }
    lVar5 = param_1 + 0x3500;
    func_0x000100daf99c(lVar5,param_1 + lVar4);
    uVar3 = (uint)lVar5;
    if (uVar3 == 0) {
      *param_2 = '\0';
      return;
    }
  }
  cVar9 = (char)uVar3;
  *param_2 = (char)param_4;
  if ((param_4 & 0xff) == 3) {
    uVar6 = param_1 + 0x3500;
    FUN_104c10a00(uVar6,4);
    lVar4 = (uVar6 & 0xffffffff) * 4;
    *param_2 = *param_2 + (char)uVar6;
    cVar9 = (char)*(short *)(&UNK_10dd74fd8 + lVar4);
    lVar5 = param_1 + (long)param_3 * 8;
    if (*(short *)(&UNK_10dd74fd8 + lVar4) != 0) {
      lVar7 = param_1 + 0x3500;
      func_0x000104c12a64(lVar7,*(char *)(*(long *)(lVar5 + 0x37f8) + 7) + 0x60);
      cVar9 = (char)lVar7 + -0x60;
    }
    param_2[7] = cVar9;
    if (*(short *)(&UNK_10dd74fda + lVar4) == 0) {
      cVar9 = '_';
    }
    else {
      lVar4 = param_1 + 0x3500;
      func_0x000104c12a64(lVar4,*(char *)(*(long *)(lVar5 + 0x37f8) + 8) + 0x20);
      cVar9 = (char)lVar4 + -0x20;
    }
    param_2[8] = cVar9;
    param_1 = param_1 + (long)param_3 * 8;
    uVar2 = *(undefined2 *)(*(long *)(param_1 + 0x37f8) + 4);
    param_2[6] = *(char *)(*(long *)(param_1 + 0x37f8) + 6);
    *(undefined2 *)(param_2 + 4) = uVar2;
    uVar2 = *(undefined2 *)(*(long *)(param_1 + 0x37f8) + 1);
    param_2[3] = *(char *)(*(long *)(param_1 + 0x37f8) + 3);
    *(undefined2 *)(param_2 + 1) = uVar2;
    *(char **)(param_1 + 0x37f8) = param_2;
  }
  else if ((param_4 & 0xff) == 2) {
    if (param_3 == 0) {
      func_0x000104c1261c((long)*(char *)(*(long *)(param_1 + 0x37f8) + 4));
      cVar8 = cVar9 + -5;
    }
    else {
      cVar8 = '\0';
    }
    param_2[4] = cVar8;
    plVar1 = (long *)(param_1 + 0x37f8);
    func_0x000104c12630((long)*(char *)(plVar1[param_3] + 5));
    param_2[5] = cVar9 + -0x17;
    func_0x000104c12644((long)*(char *)(plVar1[param_3] + 6));
    param_2[6] = cVar9 + -0x11;
    if (param_3 == 0) {
      func_0x000104c1261c((long)*(char *)(*plVar1 + 1));
      cVar8 = cVar9 + -5;
    }
    else {
      cVar8 = '\0';
    }
    param_2[1] = cVar8;
    func_0x000104c12630((long)*(char *)(plVar1[param_3] + 2));
    param_2[2] = cVar9 + -0x17;
    func_0x000104c12644((long)*(char *)(plVar1[param_3] + 3));
    param_2[3] = cVar9 + -0x11;
    *(undefined2 *)(param_2 + 7) = *(undefined2 *)(plVar1[param_3] + 7);
    plVar1[param_3] = (long)param_2;
  }
  return;
}



/* Entry: 104c081ec; end: 104c08233;  */

void FUN_104c081ec(code *UNRECOVERED_JUMPTABLE,long *param_2,undefined8 param_3,int param_4,
                  ulong param_5,int param_6)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 0x14) <= param_6) {
    param_6 = *(int *)(lVar1 + 0x14);
  }
  if (*(int *)(lVar1 + 0x10) <= param_4) {
    param_4 = *(int *)(lVar1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000104c08230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(long *)(lVar1 + 0xa0) + *(long *)(lVar1 + 0xb8) * (param_5 & 0xffffffff) * 5,
             *(long *)(lVar1 + 0xb8),param_2 + 7,lVar1 + 0x27,param_4,param_6,param_3);
  return;
}



/* Entry: 104c08234; end: 104c08d97;  */

undefined8 FUN_104c08234(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  ushort *puVar12;
  bool bVar13;
  undefined1 uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  uint uVar32;
  long lVar33;
  undefined4 in_stack_0000000c;
  
  func_0x000104c12c6c();
  lVar31 = *(long *)(param_1 + 0xcb8);
  if (*(int *)(param_1 + 0x14a0) < *(int *)(param_1 + 0xd88)) {
    _free(*(undefined8 *)(param_1 + 0x1498));
    iVar25 = *(int *)(param_1 + 0xd88);
    lVar15 = (long)iVar25;
    _malloc();
    *(long *)(param_1 + 0x1498) = lVar15;
    if (lVar15 != 0) {
      *(int *)(param_1 + 0x14a0) = iVar25;
      goto LAB_104c08280;
    }
    *(undefined4 *)(param_1 + 0x14a0) = 0;
LAB_104c08d8c:
    uVar16 = 0xfffffff4;
  }
  else {
LAB_104c08280:
    uVar17 = 0;
    uVar23 = 0;
    lVar15 = *(long *)(param_1 + 0x18);
    while( true ) {
      uVar26 = (ulong)*(byte *)(lVar15 + 0x1c1);
      if (uVar26 <= uVar17) break;
      *(char *)(*(long *)(param_1 + 0x1498) + (uVar23 & 0xffffffff)) = (char)uVar17;
      uVar17 = uVar17 + 1;
      uVar23 = (ulong)(int)uVar23;
      while( true ) {
        uVar23 = uVar23 + 1;
        lVar15 = *(long *)(param_1 + 0x18);
        if ((long)(ulong)*(ushort *)(lVar15 + uVar17 * 2 + 0x244) <= (long)uVar23) break;
        *(undefined1 *)(*(long *)(param_1 + 0x1498) + uVar23) = 0;
      }
    }
    uVar20 = (uint)*(byte *)(lVar15 + 0x1bd) * (uint)*(byte *)(lVar15 + 0x1c1);
    bVar13 = *(uint *)(param_1 + 0xcc8) <= uVar20;
    if (uVar20 != *(uint *)(param_1 + 0xcc8)) {
      func_0x000104c12b08();
      if (bVar13) {
        _free(*(undefined8 *)(param_1 + 0x1138));
        uVar17 = (ulong)(uVar20 * 4);
        _malloc();
        *(ulong *)(param_1 + 0x1138) = uVar17;
        if (uVar17 == 0) {
          *(undefined4 *)(param_1 + 0xcc8) = 0;
          goto LAB_104c08d8c;
        }
      }
      _free(*(undefined8 *)(param_1 + 0xcc0));
      uVar17 = (ulong)(uVar20 * 0x3820);
      FUN_104c08d98(uVar17,0x20);
      *(ulong *)(param_1 + 0xcc0) = uVar17;
      if (uVar17 == 0) goto LAB_104c08d8c;
      *(uint *)(param_1 + 0xcc8) = uVar20;
      uVar26 = (ulong)*(byte *)(*(long *)(param_1 + 0x18) + 0x1c1);
    }
    iVar19 = *(int *)(param_1 + 0xd80);
    uVar20 = *(uint *)(lVar31 + 8);
    iVar25 = 1;
    if ((1 < uVar20) && (iVar25 = 1, 1 < *(uint *)(lVar31 + 0x18))) {
      iVar25 = 2;
    }
    iVar25 = iVar19 * (int)uVar26 * iVar25;
    if (iVar25 != *(int *)(param_1 + 0xfc8)) {
      _free(*(undefined8 *)(param_1 + 0xfc0));
      lVar15 = (long)iVar25 * 0x270;
      _malloc();
      *(long *)(param_1 + 0xfc0) = lVar15;
      if (lVar15 == 0) {
        *(undefined4 *)(param_1 + 0xfc8) = 0;
        goto LAB_104c08d8c;
      }
      *(int *)(param_1 + 0xfc8) = iVar25;
      iVar19 = *(int *)(param_1 + 0xd80);
      uVar20 = *(uint *)(lVar31 + 8);
    }
    lVar15 = (long)*(int *)(param_1 + 0xd84) * (long)iVar19;
    bVar13 = *(char *)(*(long *)(param_1 + 8) + 0x20) != '\0';
    uVar32 = (uint)lVar15;
    if (1 < uVar20) {
      uVar17 = 0;
      lVar27 = 0;
      lVar33 = (ulong)*(uint *)(param_1 + 0x878) * 2;
      iVar25 = *(int *)(param_1 + 0xd90) * 4;
      lVar18 = *(long *)(param_1 + 0x18);
      uVar23 = (ulong)*(byte *)(lVar18 + 0x1c1);
      while (uVar17 != uVar23) {
        iVar19 = *(int *)(param_1 + 0xd80);
        uVar20 = (uint)*(ushort *)(lVar18 + 0x244 + uVar17 * 2);
        uVar17 = uVar17 + 1;
        uVar7 = *(ushort *)(lVar18 + 0x244 + uVar17 * 2);
        lVar27 = (long)(int)lVar27;
        puVar12 = (ushort *)(lVar18 + 0x1c2);
        for (uVar26 = (ulong)*(byte *)(lVar18 + 0x1bd); uVar26 != 0; uVar26 = uVar26 - 1) {
          *(uint *)(*(long *)(param_1 + 0x1138) + lVar27 * 4) =
               (uVar20 * iVar19 * 0x80 + (uVar7 - uVar20) * iVar25 * (uint)*puVar12) * iVar25;
          lVar27 = lVar27 + 1;
          puVar12 = puVar12 + 1;
        }
      }
      lVar30 = (long)*(int *)(param_1 + 0xd88) * (long)(int)(uint)*(byte *)(lVar18 + 0x1bd);
      lVar27 = *(long *)(param_1 + 0x1628);
      iVar25 = (int)lVar30;
      if (iVar25 != *(int *)(param_1 + 0x1630)) {
        _free();
        lVar27 = lVar30 * 0x38;
        _malloc();
        *(long *)(param_1 + 0x1628) = lVar27;
        if (lVar27 == 0) {
          *(undefined4 *)(param_1 + 0x1630) = 0;
          goto LAB_104c08d8c;
        }
        *(int *)(param_1 + 0x1630) = iVar25;
        lVar18 = *(long *)(param_1 + 0x18);
        uVar23 = (ulong)*(byte *)(lVar18 + 0x1c1);
      }
      lVar30 = 0;
      uVar17 = 0;
      while (uVar17 != uVar23) {
        uVar7 = *(ushort *)(lVar18 + 0x244 + (uVar17 + 1) * 2);
        uVar8 = *(ushort *)(lVar18 + 0x244 + uVar17 * 2);
        bVar4 = *(byte *)(lVar18 + 0x1bd);
        lVar29 = lVar30 * 0x3820 + 0x3578;
        for (uVar26 = (ulong)bVar4; uVar26 != 0; uVar26 = uVar26 - 1) {
          *(long *)(*(long *)(param_1 + 0xcc0) + lVar29) = lVar27;
          lVar29 = lVar29 + 0x3820;
          lVar27 = lVar27 + (ulong)uVar7 * 0x38 + (ulong)uVar8 * -0x38;
        }
        lVar30 = lVar30 + (ulong)bVar4;
        uVar17 = uVar17 + 1;
      }
      iVar25 = uVar32 * (byte)(&UNK_10dd6a9ac)[lVar33];
      if (iVar25 != *(int *)(param_1 + 0x1124)) {
        _free(*(undefined8 *)(param_1 + 0x1100));
        lVar27 = ((long)iVar25 & 0x1fffffffffffffU) << 9;
        func_0x000104c12584();
        *(long *)(param_1 + 0x1100) = lVar27;
        if (lVar27 == 0) {
          *(undefined4 *)(param_1 + 0x1124) = 0;
          goto LAB_104c08d8c;
        }
        *(int *)(param_1 + 0x1124) = iVar25;
      }
      iVar25 = iVar25 << bVar13;
      if (iVar25 != *(int *)(param_1 + 0x1130)) {
        _free(*(undefined8 *)(param_1 + 0x1118));
        lVar27 = ((long)iVar25 & 0x3ffffffffffffU) << 0xd;
        func_0x000104c12584();
        *(long *)(param_1 + 0x1118) = lVar27;
        if (lVar27 == 0) {
          *(undefined4 *)(param_1 + 0x1130) = 0;
          goto LAB_104c08d8c;
        }
        _bzero();
        *(int *)(param_1 + 0x1130) = iVar25;
      }
      if (*(char *)(*(long *)(param_1 + 0x18) + 0x10c) == '\0') {
        if (*(long *)(param_1 + 0x1108) != 0) {
          FUN_104c08dc8(param_1 + 0x1108);
          FUN_104c08dc8(param_1 + 0x1110);
          *(undefined8 *)(param_1 + 0x1128) = 0;
        }
      }
      else {
        iVar25 = uVar32 << (ulong)bVar13;
        if (iVar25 != *(int *)(param_1 + 0x1128)) {
          _free(*(undefined8 *)(param_1 + 0x1108));
          lVar27 = (long)iVar25 * 0x1800;
          func_0x000104c12584();
          *(long *)(param_1 + 0x1108) = lVar27;
          if (lVar27 == 0) {
            *(undefined4 *)(param_1 + 0x1128) = 0;
            goto LAB_104c08d8c;
          }
          *(int *)(param_1 + 0x1128) = iVar25;
        }
        iVar25 = uVar32 * (byte)(&UNK_10dd6a9ad)[lVar33];
        if (iVar25 != *(int *)(param_1 + 0x112c)) {
          _free(*(undefined8 *)(param_1 + 0x1110));
          lVar33 = ((long)iVar25 & 0x3ffffffffffffU) << 0xb;
          func_0x000104c12584();
          *(long *)(param_1 + 0x1110) = lVar33;
          if (lVar33 == 0) {
            *(undefined4 *)(param_1 + 0x112c) = 0;
            goto LAB_104c08d8c;
          }
          *(int *)(param_1 + 0x112c) = iVar25;
        }
      }
    }
    uVar23 = *(ulong *)(param_1 + 0x860);
    uVar17 = *(ulong *)(param_1 + 0x868);
    uVar20 = *(uint *)(lVar31 + 0x18);
    bVar1 = 1 < uVar20 &&
            *(int *)(*(long *)(param_1 + 0x18) + 0xec) != *(int *)(*(long *)(param_1 + 0x18) + 0xf0)
    ;
    iVar25 = *(int *)(param_1 + 0xd88);
    uVar21 = (uint)bVar1;
    if (((((long)*(int *)(param_1 + 0x1160) != uVar23 * (long)iVar25 * 4) ||
         ((long)*(int *)(param_1 + 0x1164) != uVar17 * (long)iVar25 * 8)) ||
        (*(uint *)(param_1 + 0x14a4) != uVar21)) || (iVar25 != *(int *)(param_1 + 0x1168))) {
      _free(*(undefined8 *)(param_1 + 0x1428));
      uVar26 = -uVar23;
      if (-1 < (long)uVar23) {
        uVar26 = uVar23;
      }
      uVar3 = -uVar17;
      if (-1 < (long)uVar17) {
        uVar3 = uVar17;
      }
      lVar33 = ((uVar3 * 8 + uVar26 * 4) * (long)*(int *)(param_1 + 0xd88) << (ulong)bVar1) + 0x40;
      FUN_104c08d98(lVar33,0x20);
      *(long *)(param_1 + 0x1428) = lVar33;
      if (lVar33 == 0) {
        *(undefined8 *)(param_1 + 0x1160) = 0;
        goto LAB_104c08d8c;
      }
      lVar33 = lVar33 + 0x20;
      if ((long)uVar23 < 0) {
        iVar25 = *(int *)(param_1 + 0xd88);
        lVar27 = lVar33 - uVar23 * ((long)iVar25 * 4 + -1);
        lVar18 = -(uVar23 * (long)((int)((long)iVar25 * 4) + -3));
      }
      else {
        lVar18 = uVar23 << 1;
        iVar25 = *(int *)(param_1 + 0xd88);
        lVar27 = lVar33;
      }
      *(long *)(param_1 + 0x1438) = lVar27;
      *(long *)(param_1 + 0x1450) = lVar33 + lVar18;
      lVar22 = (long)iVar25;
      lVar24 = uVar26 * 4 * lVar22;
      lVar33 = lVar33 + lVar24;
      iVar19 = iVar25 * 8;
      lVar27 = uVar17 * 6;
      lVar18 = uVar17 << 2;
      lVar30 = uVar17 << 1;
      lVar29 = lVar33;
      if ((uVar17 & 0x8000000000000000) != 0) {
        lVar27 = -(uVar17 * (long)(iVar19 + -7));
        lVar18 = -(uVar17 * (long)(iVar19 + -5));
        lVar30 = -(uVar17 * (long)(iVar19 + -3));
        lVar29 = lVar33 - uVar17 * (long)(iVar19 + -1);
      }
      *(long *)(param_1 + 0x1440) = lVar29;
      *(long *)(param_1 + 0x1448) = lVar33 + lVar30;
      *(long *)(param_1 + 0x1458) = lVar33 + lVar18;
      *(long *)(param_1 + 0x1460) = lVar33 + lVar27;
      if (uVar21 != 0) {
        lVar33 = lVar33 + uVar3 * 8 * lVar22;
        iVar10 = iVar25 * 4 + -1;
        lVar27 = lVar33;
        if ((uVar23 & 0x8000000000000000) != 0) {
          lVar27 = lVar33 - uVar23 * (long)iVar10;
        }
        *(long *)(param_1 + 0x1468) = lVar27;
        lVar33 = lVar33 + lVar24;
        lVar27 = uVar17 * lVar22 * 4;
        lVar18 = lVar33;
        if ((uVar17 & 0x8000000000000000) != 0) {
          lVar27 = -(uVar17 * (long)(iVar19 + -1));
          lVar18 = lVar33 - uVar17 * (long)iVar10;
        }
        *(long *)(param_1 + 0x1470) = lVar18;
        *(long *)(param_1 + 0x1478) = lVar33 + lVar27;
      }
      *(int *)(param_1 + 0x1160) = (int)uVar23 * iVar25 * 4;
      *(int *)(param_1 + 0x1164) = (int)uVar17 * iVar25 * 8;
      *(uint *)(param_1 + 0x14a4) = uVar21;
      *(int *)(param_1 + 0x1168) = iVar25;
      uVar20 = *(uint *)(lVar31 + 0x18);
    }
    if (uVar20 < 2) {
      iVar25 = 0xc;
    }
    else {
      iVar25 = (iVar25 << 2) << (ulong)(*(byte *)(*(long *)(param_1 + 8) + 0x188) & 0x1f);
    }
    lVar33 = *(long *)(param_1 + 0x970);
    lVar31 = *(long *)(param_1 + 0x978);
    lVar27 = (long)iVar25;
    lVar18 = lVar31 * lVar27;
    if ((lVar33 * lVar27 - (long)*(int *)(param_1 + 0x116c) != 0) ||
       ((long)*(int *)(param_1 + 0x1170) != lVar18 * 2)) {
      _free(*(undefined8 *)(param_1 + 0x1430));
      lVar30 = -lVar33;
      if (-1 < lVar33) {
        lVar30 = lVar33;
      }
      lVar29 = -lVar31;
      if (-1 < lVar31) {
        lVar29 = lVar31;
      }
      lVar29 = lVar30 * lVar27 + lVar27 * lVar29 * 2 + 0x80;
      func_0x000104c12584();
      *(long *)(param_1 + 0x1430) = lVar29;
      if (lVar29 == 0) {
        *(undefined8 *)(param_1 + 0x116c) = 0;
        goto LAB_104c08d8c;
      }
      *(long *)(param_1 + 0x1480) = lVar29 + 0x40 + (-(lVar33 * (iVar25 + -1)) & lVar33 >> 0x3f);
      lVar27 = lVar29 + 0x40 + lVar30 * lVar27;
      if (lVar31 < 0) {
        lVar30 = lVar27 - lVar31 * (iVar25 + -1);
        iVar19 = iVar25 * 2;
        lVar18 = -(lVar31 * (iVar19 + -1));
      }
      else {
        iVar19 = iVar25 << 1;
        lVar30 = lVar27;
      }
      *(long *)(param_1 + 0x1488) = lVar30;
      *(long *)(param_1 + 0x1490) = lVar27 + lVar18;
      *(int *)(param_1 + 0x116c) = iVar25 * (int)lVar33;
      *(int *)(param_1 + 0x1170) = iVar19 * (int)lVar31;
    }
    uVar14 = *(uint *)(param_1 + 0x1158) <= uVar32;
    if (uVar32 != *(uint *)(param_1 + 0x1158)) {
      _free(*(undefined8 *)(param_1 + 0x1148));
      _free(*(undefined8 *)(param_1 + 0x1140));
      lVar31 = lVar15 * 0x544;
      _malloc();
      *(long *)(param_1 + 0x1148) = lVar31;
      uVar17 = lVar15 * 0x1000 | 3;
      _malloc();
      *(ulong *)(param_1 + 0x1140) = uVar17;
      if ((lVar31 == 0) || (uVar17 == 0)) {
LAB_104c08b8c:
        *(undefined4 *)(param_1 + 0x1158) = 0;
        goto LAB_104c08d8c;
      }
      func_0x000104c12b08();
      if ((bool)uVar14) {
        _free(*(undefined8 *)(param_1 + 0x10f8));
        lVar15 = lVar15 * 0x8000;
        _malloc();
        *(long *)(param_1 + 0x10f8) = lVar15;
        if (lVar15 == 0) goto LAB_104c08b8c;
      }
      *(uint *)(param_1 + 0x1158) = uVar32;
    }
    iVar25 = *(int *)(param_1 + 0x980) + 0x7f >> 7;
    *(int *)(param_1 + 0xd94) = iVar25;
    lVar31 = (long)*(int *)(param_1 + 0xd84) * (long)iVar25;
    iVar25 = (int)lVar31;
    if (iVar25 != *(int *)(param_1 + 0x115c)) {
      _free(*(undefined8 *)(param_1 + 0x1150));
      lVar31 = lVar31 * 0x6c;
      _malloc();
      *(long *)(param_1 + 0x1150) = lVar31;
      if (lVar31 == 0) {
        *(undefined4 *)(param_1 + 0x115c) = 0;
        goto LAB_104c08d8c;
      }
      *(int *)(param_1 + 0x115c) = iVar25;
    }
    lVar31 = *(long *)(param_1 + 0x18);
    uVar20 = 0;
    if (*(int *)(lVar31 + 0x368) != 0) {
      uVar20 = 2;
    }
    if (*(int *)(lVar31 + 0x364) != 0) {
      uVar20 = uVar20 + 1;
    }
    uVar21 = 0;
    if (*(int *)(lVar31 + 0x36c) != 0) {
      uVar21 = 4;
    }
    *(uint *)(param_1 + 0x14d8) = uVar20 | uVar21;
    if (*(uint *)(param_1 + 0x1410) != (uint)*(byte *)(lVar31 + 0x34e)) {
      FUN_104c1b568(param_1 + 0x1180,*(byte *)(lVar31 + 0x34e));
      lVar31 = *(long *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x1410) = (uint)*(byte *)(lVar31 + 0x34e);
    }
    in_stack_0000000c = 0;
    FUN_104c1b5dc(param_1 + 0x1210,lVar31,&stack0x0000000c);
    _bzero(*(undefined8 *)(param_1 + 0x1148),(long)(int)uVar32 * 0x544);
    iVar25 = *(int *)(param_1 + 0xd80) * *(int *)(param_1 + 0xd88) << bVar13;
    if (iVar25 != *(int *)(param_1 + 0xd48)) {
      _free(*(undefined8 *)(param_1 + 0xd50));
      lVar31 = (long)(iVar25 * 0x180);
      func_0x000104c12584();
      *(long *)(param_1 + 0xd50) = lVar31;
      if (lVar31 == 0) {
        *(undefined4 *)(param_1 + 0xd48) = 0;
        goto LAB_104c08d8c;
      }
      *(long *)(param_1 + 0xd58) = lVar31 + (long)iVar25 * 0x80;
      *(long *)(param_1 + 0xd60) = lVar31 + (long)iVar25 * 0x100;
      *(int *)(param_1 + 0xd48) = iVar25;
    }
    lVar31 = *(long *)(param_1 + 0x18);
    iVar25 = *(int *)(param_1 + 0xd84) * (uint)*(byte *)(lVar31 + 0x1bd);
    if (iVar25 != *(int *)(param_1 + 0x1174)) {
      _free(*(undefined8 *)(param_1 + 0x1418));
      lVar31 = (long)(iVar25 * 0x40);
      _malloc();
      *(long *)(param_1 + 0x1418) = lVar31;
      if (lVar31 == 0) {
        *(undefined4 *)(param_1 + 0x1174) = 0;
        goto LAB_104c08d8c;
      }
      *(long *)(param_1 + 0x1420) = lVar31 + iVar25 * 0x20;
      *(int *)(param_1 + 0x1174) = iVar25;
      lVar31 = *(long *)(param_1 + 0x18);
    }
    if (((*(byte *)(lVar31 + 0xe8) & 1) != 0) || (*(char *)(lVar31 + 0x1a3) != '\0')) {
      lVar15 = param_1 + 0xfd0;
      FUN_104c2a640(lVar15,*(undefined8 *)(param_1 + 8),lVar31,param_1 + 0xb10,
                    *(undefined8 *)(param_1 + 0xa78),param_1 + 0xb2c,param_1 + 0xa80,
                    *(undefined4 *)(*(long *)(param_1 + 0xcb8) + 0x18));
      if ((int)lVar15 < 0) goto LAB_104c08d8c;
      lVar31 = *(long *)(param_1 + 0x18);
    }
    FUN_104c08df4(*(undefined1 *)(*(long *)(param_1 + 8) + 0x20),lVar31,
                  *(undefined1 *)(lVar31 + 0x2c8),param_1 + 0xd98);
    lVar31 = *(long *)(param_1 + 0x18);
    if (*(char *)(lVar31 + 0x2ce) == '\0') {
      _bzero(param_1 + 0xdf8,0x1c8);
    }
    else {
      bVar4 = *(byte *)(lVar31 + 0x2cf);
      bVar5 = *(byte *)(lVar31 + 0x2d0);
      bVar6 = *(byte *)(lVar31 + 0x2d1);
      puVar28 = (undefined8 *)(param_1 + 0xe08);
      for (lVar15 = 0; lVar15 != 0x98; lVar15 = lVar15 + 8) {
        puVar28[-2] = *(undefined8 *)((ulong)bVar4 * 0x130 + 0x1138473c8 + lVar15);
        puVar28[-1] = *(undefined8 *)((ulong)bVar5 * 0x130 + 0x113847460 + lVar15);
        *puVar28 = *(undefined8 *)((ulong)bVar6 * 0x130 + 0x113847460 + lVar15);
        puVar28 = puVar28 + 3;
      }
    }
    if (*(char *)(lVar31 + 0x378) != '\0') {
      lVar15 = 1;
      for (lVar31 = 0; lVar31 != 7; lVar31 = lVar31 + 1) {
        bVar4 = *(byte *)(*(long *)(param_1 + 0x28 + lVar31 * 0x128) + 0xf8);
        for (lVar33 = lVar15; lVar33 != 7; lVar33 = lVar33 + 1) {
          bVar5 = *(byte *)(*(long *)(param_1 + 8) + 0x19c);
          uVar20 = (uint)*(byte *)(*(long *)(param_1 + 0x840) + 0xf8);
          if (bVar5 == 0) {
            uVar32 = 0;
          }
          else {
            uVar32 = 1 << (ulong)(bVar5 - 1 & 0x1f);
            uVar21 = bVar4 - uVar20;
            uVar32 = (uVar21 & uVar32 - 1) - (uVar21 & uVar32);
          }
          uVar21 = -uVar32;
          if (-1 < (int)uVar32) {
            uVar21 = uVar32;
          }
          uVar32 = uVar21;
          if (0x1e < uVar21) {
            uVar32 = 0x1f;
          }
          if (bVar5 == 0) {
            uVar20 = 0;
          }
          else {
            uVar9 = 1 << (ulong)(bVar5 - 1 & 0x1f);
            uVar20 = *(byte *)(*(long *)(param_1 + 0x28 + lVar33 * 0x128) + 0xf8) - uVar20;
            uVar20 = (uVar20 & uVar9 - 1) - (uVar20 & uVar9);
          }
          lVar27 = 0;
          uVar9 = -uVar20;
          if (-1 < (int)uVar20) {
            uVar9 = uVar20;
          }
          if (0x1e < uVar9) {
            uVar9 = 0x1f;
          }
          if (uVar9 <= uVar21) {
            puVar11 = &UNK_10dd6a9b5;
            puVar2 = &UNK_10dd6a9b4;
          }
          else {
            puVar2 = &UNK_10dd6a9b5;
            puVar11 = &UNK_10dd6a9b4;
          }
          for (; lVar27 != 6; lVar27 = lVar27 + 2) {
            if ((uVar9 * (byte)puVar11[lVar27] < uVar32 * (byte)puVar2[lVar27] && uVar21 < uVar9) ||
               (uVar32 * (byte)puVar2[lVar27] < uVar9 * (byte)puVar11[lVar27] && uVar9 <= uVar21))
            break;
          }
          *(undefined *)(param_1 + 0x10a0 + lVar31 * 7 + lVar33) =
               (&UNK_10dd6a9ba)[lVar27 + (ulong)(uVar9 <= uVar21)];
        }
        lVar15 = lVar15 + 1;
      }
    }
    uVar16 = 0;
    bVar13 = *(int *)(param_1 + 0x878) != 0;
    uVar17 = (ulong)bVar13;
    *(undefined8 *)(param_1 + 0x14a8) = *(undefined8 *)(param_1 + 0x848);
    *(undefined8 *)(param_1 + 0x14b0) = *(undefined8 *)(param_1 + 0x848 + uVar17 * 8);
    lVar31 = 0x10;
    if (!bVar13) {
      lVar31 = 0;
    }
    *(undefined8 *)(param_1 + 0x14b8) = *(undefined8 *)(param_1 + 0x848 + lVar31);
    *(undefined8 *)(param_1 + 0x14c0) = *(undefined8 *)(param_1 + 0x958);
    *(undefined8 *)(param_1 + 0x14c8) = *(undefined8 *)(param_1 + 0x958 + uVar17 * 8);
    *(undefined8 *)(param_1 + 0x14d0) = *(undefined8 *)(param_1 + 0x958 + lVar31);
  }
  return uVar16;
}



/* Entry: 104c08d98; end: 104c08dc7;  */

undefined8 FUN_104c08d98(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_18;
  
  puVar1 = &uStack_18;
  _posix_memalign(puVar1,param_2,param_1);
  if ((int)puVar1 != 0) {
    uStack_18 = 0;
  }
  return uStack_18;
}



/* Entry: 104c08dc8; end: 104c08df3;  */

void FUN_104c08dc8(long *param_1)

{
  if (*param_1 != 0) {
    _free();
    *param_1 = 0;
  }
  return;
}



/* Entry: 104c08df4; end: 104c08eff;  */

void FUN_104c08df4(ulong param_1,long param_2,uint param_3,long param_4)

{
  short *psVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  uint uVar14;
  long lVar15;
  
  cVar8 = *(char *)(param_2 + 0x2d2);
  cVar9 = *(char *)(param_2 + 0x2c9);
  cVar10 = *(char *)(param_2 + 0x2cb);
  cVar11 = *(char *)(param_2 + 0x2ca);
  cVar12 = *(char *)(param_2 + 0x2cd);
  cVar13 = *(char *)(param_2 + 0x2cc);
  param_1 = param_1 & 0xff;
  psVar1 = (short *)(param_2 + 0x2d6);
  lVar15 = 8;
  if (cVar8 == '\0') {
    lVar15 = 1;
  }
  puVar2 = (undefined2 *)(param_4 + 6);
  for (; lVar15 != 0; lVar15 = lVar15 + -1) {
    uVar14 = param_3;
    if ((cVar8 != '\0') &&
       (uVar14 = param_3 + (int)*psVar1 & ((int)(param_3 + (int)*psVar1) >> 0x1f ^ 0xffffffffU),
       0xfe < (int)uVar14)) {
      uVar14 = 0xff;
    }
    uVar3 = uVar14 + (int)cVar9;
    uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    if (0xfe < (int)uVar3) {
      uVar3 = 0xff;
    }
    uVar4 = uVar14 + (int)cVar10;
    uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
    if (0xfe < (int)uVar4) {
      uVar4 = 0xff;
    }
    uVar5 = uVar14 + (int)cVar11;
    uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
    if (0xfe < (int)uVar5) {
      uVar5 = 0xff;
    }
    uVar6 = uVar14 + (int)cVar12;
    uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    if (0xfe < (int)uVar6) {
      uVar6 = 0xff;
    }
    uVar7 = uVar14 + (int)cVar13;
    uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
    if (0xfe < (int)uVar7) {
      uVar7 = 0xff;
    }
    puVar2[-3] = *(undefined2 *)(&UNK_10dd6a9c2 + (ulong)uVar3 * 4 + param_1 * 0x400);
    puVar2[-2] = *(undefined2 *)(&UNK_10dd6a9c2 + (long)(int)uVar14 * 4 + param_1 * 0x400 + 2);
    puVar2[-1] = *(undefined2 *)(&UNK_10dd6a9c2 + (ulong)uVar5 * 4 + param_1 * 0x400);
    *puVar2 = *(undefined2 *)(&UNK_10dd6a9c2 + (ulong)uVar4 * 4 + param_1 * 0x400 + 2);
    puVar2[1] = *(undefined2 *)(&UNK_10dd6a9c2 + (ulong)uVar7 * 4 + param_1 * 0x400);
    puVar2[2] = *(undefined2 *)(&UNK_10dd6a9c2 + (ulong)uVar6 * 4 + param_1 * 0x400 + 2);
    psVar1 = psVar1 + 5;
    puVar2 = puVar2 + 6;
  }
  return;
}



/* Entry: 104c08f00; end: 104c0a663;  */

undefined8 FUN_104c08f00(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  bool bVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  byte *pbVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  uint uVar32;
  undefined4 uVar33;
  ulong uStack_70;
  
  lVar30 = *(long *)(param_1 + 0xcb8);
  if (*(char *)(*(long *)(param_1 + 0x18) + 0x1b6) != '\0') {
    FUN_104c06d30(*(undefined8 *)(param_1 + 0xc18),param_1 + 0xbf8);
  }
  lVar11 = 0;
  iVar12 = 0;
  uVar32 = 0;
  *(undefined4 *)(param_1 + 0x15a8) = 0;
  do {
    if (*(int *)(param_1 + 0xc34) <= lVar11) {
      if (1 < *(uint *)(lVar30 + 0x18)) {
        lVar14 = 0;
        lVar11 = 0;
        uVar32 = *(uint *)(lVar30 + 8);
        while( true ) {
          lVar30 = (long)*(int *)(param_1 + 0xd80) *
                   (long)(int)(uint)*(byte *)(*(long *)(param_1 + 0x18) + 0x1c1);
          if ((int)lVar30 << (1 < uVar32) <= lVar11) break;
          uVar33 = 1;
          if (lVar30 <= lVar11) {
            uVar33 = 2;
          }
          if (uVar32 < 2) {
            uVar33 = 0;
          }
          FUN_104c0773c(*(long *)(param_1 + 0xfc0) + lVar14,
                        (*(uint *)(*(long *)(param_1 + 0x18) + 0xe8) ^ 0xffffffff) & 1,uVar33);
          lVar11 = lVar11 + 1;
          lVar14 = lVar14 + 0x270;
        }
      }
      return 0;
    }
    lVar16 = *(long *)(param_1 + 0xc28);
    puVar17 = (undefined8 *)(lVar16 + lVar11 * 0x50);
    pbVar28 = (byte *)*puVar17;
    uVar29 = puVar17[1];
    lVar14 = (long)*(int *)(puVar17 + 9) * 0x3820 + 0x37f8;
    for (uVar13 = (ulong)*(int *)(puVar17 + 9); iVar15 = *(int *)(lVar16 + lVar11 * 0x50 + 0x4c),
        (long)uVar13 <= (long)iVar15; uVar13 = uVar13 + 1) {
      uStack_70 = uVar29;
      if (iVar15 != (int)uVar13) {
        bVar5 = *(byte *)(*(long *)(param_1 + 0x18) + 0x1b9);
        uVar27 = (ulong)bVar5;
        bVar10 = uVar29 < uVar27;
        uVar29 = uVar29 - uVar27;
        if (bVar10) {
          return 0xffffffea;
        }
        uVar18 = 0;
        pbVar23 = pbVar28;
        for (uVar19 = 0; (uint)bVar5 << 3 != uVar19; uVar19 = uVar19 + 8) {
          uVar18 = uVar18 | (uint)*pbVar23 << (ulong)(uVar19 & 0x1f);
          pbVar23 = pbVar23 + 1;
        }
        if (uVar29 <= uVar18) {
          return 0xffffffea;
        }
        pbVar28 = pbVar28 + uVar27;
        uStack_70 = uVar18 + 1;
      }
      if (*(uint *)(lVar30 + 8) < 2) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(uint *)(*(long *)(param_1 + 0x1138) + uVar13 * 4);
      }
      lVar16 = (ulong)*(uint *)(param_1 + 0x878) * 2;
      pbVar23 = &UNK_10dd6a9ac + lVar16;
      lVar22 = *(long *)(param_1 + 0x1110);
      if (lVar22 == 0) {
        lVar26 = 0;
      }
      else {
        lVar26 = lVar22 + ((ulong)uVar19 * (ulong)(byte)(&UNK_10dd6a9ad)[lVar16] >> 3);
      }
      lVar20 = *(long *)(param_1 + 0xcc0);
      lVar31 = lVar20 + uVar13 * 0x3820;
      lVar1 = (long)(int)uVar32 + 1;
      lVar25 = *(long *)(param_1 + 0x18) + 0x1c2;
      uVar6 = *(ushort *)(lVar25 + (long)(int)uVar32 * 2);
      lVar21 = *(long *)(param_1 + 8);
      uVar7 = *(ushort *)(lVar25 + lVar1 * 2);
      cVar4 = *(char *)(lVar21 + 0x188);
      lVar25 = *(long *)(param_1 + 0x18) + 0x244;
      uVar8 = *(ushort *)(lVar25 + (long)iVar12 * 2);
      uVar9 = *(ushort *)(lVar25 + ((long)iVar12 + 1) * 2);
      uVar3 = *(uint *)(param_1 + 0xd8c);
      lVar25 = *(long *)(param_1 + 0x1100);
      lVar24 = *(long *)(param_1 + 0x1118);
      *(long *)(lVar31 + 0x3548) = lVar26;
      if (lVar25 == 0) {
        lVar26 = 0;
      }
      else {
        lVar26 = lVar25 + ((ulong)uVar19 * (ulong)*pbVar23 >> 5 & 0x7fffffffe);
      }
      *(long *)(lVar31 + 0x3550) = lVar26;
      if (lVar24 == 0) {
        lVar26 = 0;
      }
      else {
        lVar26 = lVar24 + ((ulong)uVar19 * (ulong)*pbVar23 >> (*(char *)(lVar21 + 0x20) == '\0'));
      }
      *(long *)(lVar31 + 0x3558) = lVar26;
      if (lVar22 != 0) {
        lVar22 = lVar22 + ((ulong)uVar19 * (ulong)(byte)(&UNK_10dd6a9ad)[lVar16] >> 3);
      }
      *(long *)(lVar31 + 0x3560) = lVar22;
      if (lVar25 == 0) {
        lVar25 = 0;
      }
      else {
        lVar25 = lVar25 + ((ulong)uVar19 * (ulong)*pbVar23 >> 5 & 0x7fffffffe);
      }
      *(long *)(lVar31 + 0x3568) = lVar25;
      if (lVar24 == 0) {
        lVar24 = 0;
      }
      else {
        lVar24 = lVar24 + ((ulong)uVar19 * (ulong)*pbVar23 >> (*(char *)(lVar21 + 0x20) == '\0'));
      }
      *(long *)(lVar31 + 0x3570) = lVar24;
      FUN_104c06d30(lVar31,param_1 + 0xbf8);
      *(uint *)(lVar31 + 0x35e8) = (uint)*(byte *)(*(long *)(param_1 + 0x18) + 0x2c8);
      *(undefined4 *)(lVar31 + 0x35ec) = 0;
      func_0x000104c1e954(lVar31 + 0x3500,pbVar28,uStack_70,
                          *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x10b));
      *(int *)(lVar31 + 0x353c) = iVar12;
      *(uint *)(lVar31 + 0x3538) = uVar32;
      uVar32 = (uint)uVar6 << (ulong)(uVar3 & 0x1f);
      *(uint *)(lVar31 + 0x3528) = uVar32;
      iVar15 = (uint)uVar7 << (ulong)(uVar3 & 0x1f);
      if (*(int *)(param_1 + 0xd78) <= iVar15) {
        iVar15 = *(int *)(param_1 + 0xd78);
      }
      *(int *)(lVar31 + 0x352c) = iVar15;
      uVar19 = (uint)uVar8 << (ulong)(uVar3 & 0x1f);
      *(uint *)(lVar31 + 0x3530) = uVar19;
      iVar15 = (uint)uVar9 << (ulong)(uVar3 & 0x1f);
      if (*(int *)(param_1 + 0xd7c) <= iVar15) {
        iVar15 = *(int *)(param_1 + 0xd7c);
      }
      *(int *)(lVar31 + 0x3534) = iVar15;
      if (*(int *)(*(long *)(param_1 + 0x18) + 0xec) == *(int *)(*(long *)(param_1 + 0x18) + 0xf0))
      {
        iVar15 = (uint)(uVar6 >> (cVar4 == '\0')) + *(int *)(param_1 + 0xd80) * ((int)uVar19 >> 5);
        uVar32 = uVar19 >> 3 & 2 | uVar32 >> 4 & 1;
      }
      else {
        iVar15 = *(int *)(param_1 + 0xd94) * ((int)uVar19 >> 5);
        uVar32 = uVar19 >> 3 & 2;
      }
      lVar22 = ((ulong)uVar32 | (ulong)uVar32 << 3) + (long)iVar15 * 0x6c;
      lVar20 = lVar20 + lVar14;
      for (lVar16 = 0; lVar16 != 3; lVar16 = lVar16 + 1) {
        if ((*(uint *)(param_1 + 0x14d8) >> (ulong)((uint)lVar16 & 0x1f) & 1) != 0) {
          lVar26 = *(long *)(param_1 + 0x18);
          if (*(int *)(lVar26 + 0xec) == *(int *)(lVar26 + 0xf0)) {
            lVar26 = *(long *)(param_1 + 0x1150) + lVar22;
          }
          else {
            if (lVar16 == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = (uint)(*(int *)(param_1 + 0x878) != 3);
            }
            pbVar23 = (byte *)(lVar26 + 0x1a0);
            if (lVar16 != 0) {
              lVar26 = lVar26 + 1;
            }
            bVar5 = *(byte *)(lVar26 + 0x370);
            uVar19 = ((8 << (ulong)(bVar5 & 0x1f)) +
                      ((int)((uint)*pbVar23 * *(int *)(lVar31 + 0x3528) * 4) >> uVar19) + -1 >>
                     (bVar5 + 3 & 0x1f)) << (ulong)(uVar19 + bVar5 & 0x1f);
            iVar2 = (int)uVar19 >> 7;
            if (*(int *)(param_1 + 0xd94) <= iVar2) goto LAB_104c09364;
            uVar27 = (ulong)((uVar19 >> 6 & 1) + uVar32);
            lVar26 = *(long *)(param_1 + 0x1150) + (long)(iVar2 + iVar15) * 0x6c + lVar16 * 0x24 +
                     (uVar27 | uVar27 << 3);
          }
          *(long *)(lVar20 + lVar16 * 8) = lVar26;
          *(undefined1 *)(lVar26 + 4) = 3;
          *(undefined1 *)(*(long *)(lVar20 + lVar16 * 8) + 5) = 0xf9;
          *(undefined1 *)(*(long *)(lVar20 + lVar16 * 8) + 6) = 0xf;
          *(undefined1 *)(*(long *)(lVar20 + lVar16 * 8) + 1) = 3;
          *(undefined1 *)(*(long *)(lVar20 + lVar16 * 8) + 2) = 0xf9;
          *(undefined1 *)(*(long *)(lVar20 + lVar16 * 8) + 3) = 0xf;
          *(undefined1 *)(*(long *)(lVar20 + lVar16 * 8) + 7) = 0xe0;
          *(undefined1 *)(*(long *)(lVar20 + lVar16 * 8) + 8) = 0x1f;
        }
LAB_104c09364:
        lVar22 = lVar22 + 0x24;
      }
      if (1 < *(uint *)(*(long *)(param_1 + 0xcb8) + 0x18)) {
        *(uint *)(lVar31 + 0x3540) = (uint)uVar8;
        *(uint *)(lVar31 + 0x3544) = (uint)uVar8;
      }
      lVar16 = *(long *)(param_1 + 0x18);
      uVar19 = (uint)lVar1;
      bVar10 = uVar19 != *(byte *)(lVar16 + 0x1bd);
      iVar15 = (int)((long)iVar12 + 1);
      if (bVar10) {
        iVar15 = iVar12;
      }
      uVar32 = 0;
      if (bVar10) {
        uVar32 = uVar19;
      }
      if ((uVar13 == *(ushort *)(lVar16 + 0x2c6)) && (*(char *)(lVar16 + 0x1b6) != '\0')) {
        *(undefined4 *)(param_1 + 0x15a8) = 1;
      }
      pbVar28 = pbVar28 + uStack_70;
      uVar29 = uVar29 - uStack_70;
      lVar16 = *(long *)(param_1 + 0xc28);
      lVar14 = lVar14 + 0x3820;
      iVar12 = iVar15;
    }
    lVar11 = lVar11 + 1;
  } while( true );
}



/* Entry: 104c0a664; end: 104c0a693;  */

uint FUN_104c0a664(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = ((param_1 - param_2) * 0x2000 + (param_2 >> 1)) / param_2;
  }
  return (param_3 * param_2 + param_1 * -0x4000) / -2 + iVar1 + 0x80U & 0x3fff;
}



/* Entry: 104c0a694; end: 104c108cf;  */

/* WARNING: Possible PIC construction at 0x000104c0a970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c0a974) */
/* WARNING: Type propagation algorithm not settling */

void FUN_104c0a694(long param_1,byte param_2,byte *param_3,byte *param_4,byte *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  undefined2 uVar11;
  undefined1 *puVar12;
  undefined1 uVar13;
  char cVar14;
  char cVar15;
  bool bVar16;
  bool bVar17;
  undefined1 uVar18;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  int iVar24;
  uint uVar25;
  byte *pbVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  byte *pbVar35;
  byte *pbVar36;
  undefined4 *puVar37;
  byte *pbVar38;
  byte *pbVar39;
  int *piVar40;
  uint uVar41;
  byte *pbVar42;
  byte *pbVar43;
  uint uVar44;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  byte bVar45;
  byte bVar46;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  undefined1 extraout_w8_05;
  undefined1 extraout_w8_06;
  undefined1 extraout_w8_07;
  undefined1 extraout_w8_08;
  undefined1 extraout_w8_09;
  undefined1 extraout_w8_10;
  undefined1 extraout_w8_11;
  byte bVar47;
  undefined1 extraout_w8_12;
  undefined2 extraout_w8_13;
  undefined2 extraout_w8_14;
  undefined2 extraout_w8_15;
  ushort extraout_w8_16;
  ushort uVar48;
  undefined2 extraout_w8_17;
  undefined2 extraout_w8_18;
  undefined2 extraout_w8_19;
  undefined2 extraout_w8_20;
  undefined2 extraout_w8_21;
  undefined2 extraout_w8_22;
  undefined2 extraout_w8_23;
  undefined2 extraout_w8_24;
  int extraout_w8_25;
  int extraout_w8_26;
  undefined4 extraout_w8_27;
  undefined4 extraout_w8_28;
  int iVar49;
  int extraout_w8_29;
  int iVar50;
  int extraout_w8_30;
  int extraout_w8_31;
  int extraout_w8_32;
  undefined4 extraout_w8_33;
  undefined4 extraout_w8_34;
  int extraout_w8_35;
  undefined4 extraout_w8_36;
  int extraout_w8_37;
  int extraout_w8_38;
  int extraout_w8_39;
  int extraout_w8_40;
  int extraout_w8_41;
  int extraout_w8_42;
  int extraout_w8_43;
  undefined4 extraout_w8_44;
  undefined4 extraout_w8_45;
  undefined4 extraout_w8_46;
  int extraout_w8_47;
  int extraout_w8_48;
  int extraout_w8_49;
  int extraout_w8_50;
  int extraout_w8_51;
  int extraout_w8_52;
  int extraout_w8_53;
  int extraout_w8_54;
  int extraout_w8_55;
  int extraout_w8_56;
  int extraout_w8_57;
  int extraout_w8_58;
  int extraout_w8_59;
  int extraout_w8_60;
  undefined4 extraout_w8_61;
  int extraout_w8_62;
  uint extraout_w8_63;
  int extraout_w8_64;
  int extraout_w8_65;
  int extraout_w8_66;
  undefined4 extraout_w8_67;
  undefined4 extraout_w8_68;
  int iVar51;
  int extraout_w8_69;
  int extraout_w8_70;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined8 extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  undefined8 extraout_x8_10;
  long extraout_x8_11;
  long lVar52;
  long extraout_x8_12;
  ulong extraout_x8_13;
  undefined8 extraout_x8_14;
  long lVar53;
  long extraout_x8_15;
  undefined8 extraout_x8_16;
  undefined8 extraout_x8_17;
  undefined8 extraout_x8_18;
  undefined8 extraout_x8_19;
  undefined8 extraout_x8_20;
  code *extraout_x8_21;
  code *extraout_x8_22;
  undefined8 extraout_x8_23;
  long extraout_x8_24;
  undefined8 extraout_x8_25;
  long extraout_x8_26;
  undefined8 extraout_x8_27;
  undefined8 extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x8_32;
  undefined8 extraout_x8_33;
  undefined8 extraout_x8_34;
  long extraout_x8_35;
  undefined8 extraout_x8_36;
  long extraout_x8_37;
  long extraout_x8_38;
  undefined8 extraout_x8_39;
  long extraout_x8_40;
  long extraout_x8_41;
  long extraout_x8_42;
  long extraout_x8_43;
  long extraout_x8_44;
  long extraout_x8_45;
  undefined8 extraout_x8_46;
  long extraout_x8_47;
  long extraout_x8_48;
  undefined8 extraout_x8_49;
  long extraout_x8_50;
  long extraout_x8_51;
  long extraout_x8_52;
  long extraout_x8_53;
  undefined8 extraout_x8_54;
  long extraout_x8_55;
  long extraout_x8_56;
  long extraout_x8_57;
  long extraout_x8_58;
  long extraout_x8_59;
  long extraout_x8_60;
  long extraout_x8_61;
  long extraout_x8_62;
  long extraout_x8_63;
  long extraout_x8_64;
  long extraout_x8_65;
  ulong extraout_x8_66;
  long extraout_x8_67;
  long extraout_x8_68;
  long extraout_x8_69;
  long extraout_x8_70;
  long extraout_x8_71;
  ulong extraout_x8_72;
  long extraout_x8_73;
  long extraout_x8_74;
  long extraout_x8_75;
  long extraout_x8_76;
  long extraout_x8_77;
  long extraout_x8_78;
  long extraout_x8_79;
  long extraout_x8_80;
  long extraout_x8_81;
  long extraout_x8_82;
  long extraout_x8_83;
  long extraout_x8_84;
  long extraout_x8_85;
  long extraout_x8_86;
  long extraout_x8_87;
  long extraout_x8_88;
  long extraout_x8_89;
  long extraout_x8_90;
  long extraout_x8_91;
  undefined8 extraout_x8_92;
  long extraout_x8_93;
  undefined8 extraout_x8_94;
  long extraout_x8_95;
  long extraout_x8_96;
  undefined8 extraout_x8_97;
  ulong extraout_x8_98;
  long extraout_x8_99;
  long extraout_x8_x00100;
  long extraout_x8_x00101;
  long extraout_x8_x00102;
  long extraout_x8_x00103;
  ulong extraout_x8_x00104;
  long extraout_x8_x00105;
  long extraout_x8_x00106;
  long extraout_x8_x00107;
  long extraout_x8_x00108;
  long extraout_x8_x00109;
  long extraout_x8_x00110;
  long extraout_x8_x00111;
  ulong extraout_x8_x00112;
  long extraout_x8_x00113;
  long extraout_x8_x00114;
  long extraout_x8_x00115;
  long extraout_x8_x00116;
  long extraout_x8_x00117;
  undefined8 extraout_x8_x00118;
  undefined8 extraout_x8_x00119;
  undefined8 extraout_x8_x00120;
  undefined8 extraout_x8_x00121;
  long extraout_x8_x00122;
  long extraout_x8_x00123;
  undefined8 extraout_x8_x00124;
  undefined8 extraout_x8_x00125;
  ulong extraout_x8_x00126;
  long extraout_x8_x00127;
  long extraout_x8_x00128;
  long extraout_x8_x00129;
  long extraout_x8_x00130;
  long extraout_x8_x00131;
  long extraout_x8_x00132;
  long extraout_x8_x00133;
  long extraout_x8_x00134;
  long extraout_x8_x00135;
  long extraout_x8_x00136;
  undefined8 extraout_x8_x00137;
  undefined8 extraout_x8_x00138;
  long extraout_x8_x00139;
  undefined8 extraout_x8_x00140;
  undefined8 extraout_x8_x00141;
  code *extraout_x8_x00142;
  long extraout_x8_x00143;
  long extraout_x8_x00144;
  long extraout_x8_x00145;
  long extraout_x8_x00146;
  long extraout_x8_x00147;
  long extraout_x8_x00148;
  long extraout_x8_x00149;
  long extraout_x8_x00150;
  long extraout_x8_x00151;
  ulong extraout_x8_x00152;
  ulong extraout_x8_x00153;
  ulong extraout_x8_x00154;
  code *extraout_x8_x00155;
  code *extraout_x8_x00156;
  code *pcVar54;
  long extraout_x8_x00157;
  long extraout_x8_x00158;
  long extraout_x8_x00159;
  long extraout_x8_x00160;
  long extraout_x8_x00161;
  undefined8 extraout_x8_x00162;
  long extraout_x8_x00163;
  long extraout_x8_x00164;
  undefined8 extraout_x8_x00165;
  long extraout_x8_x00166;
  long extraout_x8_x00167;
  long extraout_x8_x00168;
  long extraout_x8_x00169;
  long extraout_x8_x00170;
  long extraout_x8_x00171;
  long extraout_x8_x00172;
  long extraout_x8_x00173;
  long extraout_x8_x00174;
  long extraout_x8_x00175;
  long extraout_x8_x00176;
  undefined8 extraout_x8_x00177;
  undefined8 extraout_x8_x00178;
  undefined8 extraout_x8_x00179;
  long extraout_x8_x00180;
  undefined8 extraout_x8_x00181;
  long extraout_x8_x00182;
  undefined8 extraout_x8_x00183;
  undefined8 extraout_x8_x00184;
  undefined8 extraout_x8_x00185;
  undefined8 extraout_x8_x00186;
  undefined8 extraout_x8_x00187;
  undefined8 extraout_x8_x00188;
  long extraout_x8_x00189;
  long extraout_x8_x00190;
  long extraout_x8_x00191;
  long extraout_x8_x00192;
  long extraout_x8_x00193;
  long extraout_x8_x00194;
  long extraout_x8_x00195;
  undefined8 extraout_x8_x00196;
  undefined8 *extraout_x8_x00197;
  undefined8 *extraout_x8_x00198;
  byte *extraout_x8_x00199;
  undefined8 *extraout_x8_x00200;
  long extraout_x8_x00201;
  long extraout_x8_x00202;
  long extraout_x8_x00203;
  long extraout_x8_x00204;
  long extraout_x8_x00205;
  long extraout_x8_x00206;
  long extraout_x8_x00207;
  byte extraout_w9;
  undefined1 extraout_w9_00;
  undefined1 extraout_w9_01;
  undefined2 extraout_w9_02;
  undefined2 extraout_w9_03;
  undefined2 uVar55;
  undefined2 extraout_w9_04;
  undefined2 extraout_w9_05;
  undefined2 extraout_w9_06;
  undefined2 extraout_w9_07;
  undefined2 extraout_w9_08;
  undefined2 extraout_w9_09;
  undefined2 extraout_w9_10;
  undefined2 extraout_w9_11;
  uint extraout_w9_12;
  undefined4 extraout_w9_13;
  int extraout_w9_14;
  int extraout_w9_15;
  int extraout_w9_16;
  int extraout_w9_17;
  undefined4 extraout_w9_18;
  undefined4 extraout_w9_19;
  uint extraout_w9_20;
  int extraout_w9_21;
  int extraout_w9_22;
  undefined4 extraout_w9_23;
  undefined4 extraout_w9_24;
  undefined4 extraout_w9_25;
  undefined4 extraout_w9_26;
  undefined4 extraout_w9_27;
  undefined4 extraout_w9_28;
  undefined4 extraout_w9_29;
  undefined4 extraout_w9_30;
  undefined4 extraout_w9_31;
  uint extraout_w9_32;
  int extraout_w9_33;
  int extraout_w9_34;
  int iVar56;
  uint extraout_w9_35;
  int extraout_w9_36;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  undefined8 extraout_x9_03;
  ulong uVar57;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  long extraout_x9_11;
  long extraout_x9_12;
  long extraout_x9_13;
  long extraout_x9_14;
  long lVar58;
  long extraout_x9_15;
  long extraout_x9_16;
  long extraout_x9_17;
  long extraout_x9_18;
  long extraout_x9_19;
  long extraout_x9_20;
  long extraout_x9_21;
  long extraout_x9_22;
  long extraout_x9_23;
  long extraout_x9_24;
  long extraout_x9_25;
  long extraout_x9_26;
  undefined8 extraout_x9_27;
  undefined8 extraout_x9_28;
  long extraout_x9_29;
  long extraout_x9_30;
  long extraout_x9_31;
  long extraout_x9_32;
  long extraout_x9_33;
  undefined8 extraout_x9_34;
  long extraout_x9_35;
  undefined8 extraout_x9_36;
  long extraout_x9_37;
  long extraout_x9_38;
  long extraout_x9_39;
  long extraout_x9_40;
  long extraout_x9_41;
  long extraout_x9_42;
  long extraout_x9_43;
  long extraout_x9_44;
  long extraout_x9_45;
  long extraout_x9_46;
  long extraout_x9_47;
  long extraout_x9_48;
  long extraout_x9_49;
  long extraout_x9_50;
  long extraout_x9_51;
  long extraout_x9_52;
  long extraout_x9_53;
  long extraout_x9_54;
  long extraout_x9_55;
  long extraout_x9_56;
  long extraout_x9_57;
  long extraout_x9_58;
  long extraout_x9_59;
  long extraout_x9_60;
  long extraout_x9_61;
  long extraout_x9_62;
  long extraout_x9_63;
  long extraout_x9_64;
  long extraout_x9_65;
  long extraout_x9_66;
  long extraout_x9_67;
  long extraout_x9_68;
  long extraout_x9_69;
  long extraout_x9_70;
  long extraout_x9_71;
  long extraout_x9_72;
  long extraout_x9_73;
  long extraout_x9_74;
  undefined8 uVar59;
  undefined8 extraout_x9_75;
  ulong extraout_x9_76;
  ulong extraout_x9_77;
  undefined8 extraout_x9_78;
  undefined8 extraout_x9_79;
  undefined8 extraout_x9_80;
  long extraout_x9_81;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  byte *pbVar60;
  long extraout_x10;
  long lVar61;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x10_02;
  long extraout_x10_03;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  long extraout_x10_07;
  long extraout_x10_08;
  long extraout_x10_09;
  long extraout_x10_10;
  long extraout_x10_11;
  long extraout_x10_12;
  long extraout_x10_13;
  long extraout_x10_14;
  long extraout_x10_15;
  long extraout_x10_16;
  long extraout_x10_17;
  long extraout_x10_18;
  ulong extraout_x10_19;
  long extraout_x10_20;
  long extraout_x10_21;
  long extraout_x10_22;
  long extraout_x10_23;
  long extraout_x10_24;
  long extraout_x10_25;
  long extraout_x10_26;
  long extraout_x10_27;
  undefined8 extraout_x10_28;
  undefined8 extraout_x10_29;
  undefined8 extraout_x10_30;
  undefined8 extraout_x10_31;
  undefined8 extraout_x10_32;
  undefined8 extraout_x10_33;
  ulong extraout_x10_34;
  ulong extraout_x10_35;
  long extraout_x10_36;
  long extraout_x10_37;
  long extraout_x10_38;
  long extraout_x10_39;
  long extraout_x10_40;
  long extraout_x10_41;
  long extraout_x10_42;
  long extraout_x10_43;
  long extraout_x10_44;
  long extraout_x10_45;
  long extraout_x10_46;
  long extraout_x10_47;
  long extraout_x10_48;
  long extraout_x10_49;
  long extraout_x10_50;
  long extraout_x10_51;
  long extraout_x10_52;
  long extraout_x10_53;
  long extraout_x10_54;
  long extraout_x10_55;
  long extraout_x10_56;
  long extraout_x10_57;
  long extraout_x10_58;
  long extraout_x10_59;
  long extraout_x10_60;
  long extraout_x10_61;
  long extraout_x10_62;
  long extraout_x10_63;
  long extraout_x10_64;
  long extraout_x10_65;
  undefined8 extraout_x10_66;
  undefined8 extraout_x10_67;
  undefined8 extraout_x10_68;
  long extraout_x10_69;
  undefined8 extraout_x10_70;
  undefined8 extraout_x10_71;
  long extraout_x10_72;
  undefined8 extraout_x10_73;
  undefined8 extraout_x10_74;
  undefined8 extraout_x10_75;
  undefined8 extraout_x10_76;
  undefined8 extraout_x10_77;
  undefined8 extraout_x10_78;
  undefined8 extraout_x10_79;
  undefined8 extraout_x10_80;
  long extraout_x10_81;
  long extraout_x10_82;
  uint extraout_w11;
  int extraout_w11_00;
  byte *pbVar62;
  byte *pbVar63;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long extraout_x11_02;
  long extraout_x11_03;
  long extraout_x11_04;
  long extraout_x11_05;
  long extraout_x11_06;
  long extraout_x11_07;
  long extraout_x11_08;
  long extraout_x11_09;
  long extraout_x11_10;
  long extraout_x11_11;
  long extraout_x11_12;
  long extraout_x11_13;
  long extraout_x11_14;
  undefined8 extraout_x11_15;
  undefined8 extraout_x11_16;
  long extraout_x11_17;
  long extraout_x11_18;
  long extraout_x11_19;
  long extraout_x11_20;
  long extraout_x11_21;
  long extraout_x11_22;
  long extraout_x11_23;
  long extraout_x11_24;
  long extraout_x11_25;
  long extraout_x11_26;
  long extraout_x11_27;
  long extraout_x11_28;
  long extraout_x11_29;
  long extraout_x11_30;
  long extraout_x11_31;
  long extraout_x11_32;
  long extraout_x11_33;
  long extraout_x11_34;
  long extraout_x11_35;
  long extraout_x11_36;
  long extraout_x11_37;
  long extraout_x11_38;
  long extraout_x11_39;
  long extraout_x11_40;
  undefined8 extraout_x11_41;
  undefined8 extraout_x11_42;
  undefined8 extraout_x11_43;
  short *psVar64;
  uint extraout_w12;
  uint extraout_w12_00;
  uint uVar65;
  long extraout_x12;
  undefined8 extraout_x12_00;
  undefined8 extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  undefined8 extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  undefined8 extraout_x12_11;
  undefined8 extraout_x12_12;
  undefined8 extraout_x12_13;
  undefined8 extraout_x12_14;
  undefined8 extraout_x12_15;
  undefined8 extraout_x12_16;
  undefined8 extraout_x12_17;
  undefined8 extraout_x12_18;
  undefined8 extraout_x12_19;
  undefined8 extraout_x12_20;
  undefined8 extraout_x12_21;
  undefined8 extraout_x12_22;
  undefined8 extraout_x12_23;
  undefined8 extraout_x12_24;
  long extraout_x12_25;
  long extraout_x12_26;
  long extraout_x12_27;
  long extraout_x12_28;
  long extraout_x12_29;
  long extraout_x12_30;
  long extraout_x12_31;
  long extraout_x12_32;
  long extraout_x12_33;
  long extraout_x12_34;
  long extraout_x12_35;
  long extraout_x12_36;
  undefined8 extraout_x12_37;
  undefined8 extraout_x12_38;
  undefined8 extraout_x12_39;
  long extraout_x12_40;
  long extraout_x12_41;
  long extraout_x12_42;
  int extraout_w13;
  byte *extraout_x13;
  byte *extraout_x13_00;
  byte *extraout_x13_01;
  long extraout_x13_02;
  long extraout_x13_03;
  long extraout_x13_04;
  long extraout_x13_05;
  long extraout_x13_06;
  long extraout_x13_07;
  long extraout_x13_08;
  long extraout_x13_09;
  long extraout_x13_10;
  long extraout_x13_11;
  long extraout_x13_12;
  long extraout_x13_13;
  byte *extraout_x14;
  byte *extraout_x14_00;
  byte *pbVar66;
  byte *extraout_x14_01;
  byte *extraout_x14_02;
  byte *pbVar67;
  long extraout_x14_03;
  long extraout_x14_04;
  long extraout_x14_05;
  long extraout_x14_06;
  long lVar68;
  undefined1 extraout_w15;
  int iVar69;
  uint extraout_w15_00;
  int extraout_w15_01;
  uint extraout_w15_02;
  uint extraout_w15_03;
  uint extraout_w15_04;
  uint extraout_w15_05;
  byte *extraout_x15;
  byte *extraout_x15_00;
  long extraout_x15_01;
  byte *pbVar70;
  byte *extraout_x15_02;
  byte *extraout_x15_03;
  byte *extraout_x15_04;
  byte *extraout_x15_05;
  long extraout_x15_06;
  long lVar71;
  byte *extraout_x15_07;
  byte *extraout_x15_08;
  byte *extraout_x15_09;
  uint uVar72;
  undefined8 *puVar73;
  byte *pbVar74;
  long *plVar75;
  int *piVar76;
  ulong uVar77;
  long lVar78;
  undefined *puVar79;
  ulong uVar80;
  uint uVar81;
  byte *pbVar82;
  byte *unaff_x24;
  ulong uVar83;
  ulong uVar84;
  uint uVar85;
  undefined8 uVar86;
  byte *pbStack_280;
  int iStack_210;
  byte *pbStack_1c0;
  uint uStack_1b8;
  int iStack_1b4;
  byte abStack_1b0 [32];
  int aiStack_190 [2];
  undefined4 uStack_188;
  undefined4 uStack_178;
  undefined4 uStack_168;
  int aiStack_114 [5];
  undefined8 auStack_100 [2];
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  int aiStack_e4 [7];
  undefined4 uStack_c8;
  undefined8 uStack_70;
  
  lVar61 = param_1;
  func_0x000104c12304();
  lVar52 = *(long *)(lVar61 + 8);
  pbVar43 = *(byte **)(lVar61 + 0x10);
  uVar41 = *(uint *)(lVar61 + 0x3f204);
  uVar32 = *(uint *)(lVar61 + 0x1c);
  pbVar26 = (byte *)(ulong)uVar32;
  if (uVar41 == 0) {
    pbVar62 = (byte *)(ulong)*(uint *)(param_1 + 0x18);
    pbStack_1c0 = abStack_1b0;
  }
  else {
    pbVar62 = (byte *)(long)*(int *)(param_1 + 0x18);
    pbStack_1c0 = (byte *)(*(long *)(lVar52 + 0x10f8) +
                           *(long *)(lVar52 + 0xd68) * (long)(int)uVar32 * 0x20 +
                          (long)pbVar62 * 0x20);
  }
  lVar58 = ((ulong)param_3 & 0xffffffff) * 4;
  pbVar36 = &UNK_10dd74d48 + lVar58;
  pbVar74 = (byte *)((ulong)pbVar62 & 0x1f);
  pbVar60 = (byte *)((ulong)pbVar26 & 0x1f);
  iVar51 = *(int *)(lVar52 + 0x878);
  bVar23 = *pbVar36;
  pbVar82 = (byte *)(ulong)bVar23;
  bVar22 = (&UNK_10dd74d49)[lVar58];
  pbVar35 = (byte *)(ulong)bVar22;
  uVar72 = (uint)pbVar62;
  uVar65 = *(int *)(lVar52 + 0xd78) - uVar72;
  uVar81 = (uint)bVar23;
  uVar25 = uVar81;
  if ((int)uVar65 <= (int)(uint)bVar23) {
    uVar25 = uVar65;
  }
  uVar9 = *(int *)(lVar52 + 0xd7c) - uVar32;
  uVar34 = (uint)bVar22;
  uVar65 = uVar34;
  if ((int)uVar9 <= (int)(uint)bVar22) {
    uVar65 = uVar9;
  }
  pbVar38 = (byte *)(ulong)uVar65;
  bVar16 = iVar51 != 3;
  uVar33 = (uint)bVar23;
  uVar9 = uVar81;
  if (bVar16) {
    uVar9 = uVar33 + 1;
  }
  bVar17 = iVar51 == 1;
  pbVar63 = (byte *)(ulong)bVar17;
  uVar77 = (ulong)pbVar74 >> (ulong)bVar16;
  uVar83 = (ulong)pbVar60 >> (long)pbVar63;
  uVar2 = uVar34;
  if (bVar17) {
    uVar2 = uVar34 + 1;
  }
  iVar56 = *(int *)(pbVar43 + 0x3528);
  uVar30 = *(uint *)(pbVar43 + 0x3530);
  bVar20 = (int)uVar30 < (int)uVar32;
  uVar44 = (uint)(iVar56 < (int)uVar72);
  if ((iVar51 == 0) || ((uVar33 <= bVar16 && (((ulong)pbVar62 & 1) == 0)))) {
    uVar85 = 0;
  }
  else if (bVar17 < uVar34) {
    uVar85 = 1;
  }
  else {
    uVar85 = uVar32 & 1;
  }
  uVar9 = uVar9 >> (ulong)bVar16;
  uVar2 = uVar2 >> (long)pbVar63;
  uVar13 = 1 < uVar41;
  uVar18 = uVar41 == 2;
  uVar41 = (uint)param_3;
  bVar22 = (byte)param_3;
  pbVar39 = param_5;
  pbVar42 = param_3;
  uStack_70 = extraout_x8;
  if (!(bool)uVar18) {
    *pbStack_1c0 = param_2;
    pbStack_1c0[2] = (byte)param_4;
    pbStack_1c0[1] = bVar22;
    lVar78 = *(long *)(lVar52 + 0x18);
    pbVar35 = pbVar43;
    if (*(char *)(lVar78 + 0x2d2) == '\0') {
      pbStack_1c0[4] = 0;
LAB_104c0a9d8:
      iStack_210 = 0;
      pbVar62 = (byte *)0x0;
      bVar19 = true;
LAB_104c0a9dc:
      uVar81 = uVar33;
      if (uVar34 <= uVar33) {
        uVar81 = uVar34;
      }
      if ((*(char *)(lVar78 + 0x37a) == '\0') || (uVar81 < 2)) {
        pbVar66 = pbStack_1c0 + 5;
        *pbVar66 = 0;
joined_r0x000104c0aa5c:
        if (!bVar19) goto LAB_104c0adc4;
        goto LAB_104c0add8;
      }
      pbVar26 = pbVar43 + 0x3500;
      func_0x000104c12a30(pbVar43 + ((ulong)pbVar60[param_1 + 0xe0] +
                                    (ulong)pbVar74[*(long *)(param_1 + 0x290) + 0xc0]) * 4);
      pbStack_1c0[5] = (byte)pbVar26;
      unaff_x24 = pbVar62;
      if (((ulong)pbVar26 & 0xff) == 0) {
        func_0x000104c12b14();
        pbVar35 = extraout_x15_00;
        pbVar66 = extraout_x14_00;
        goto joined_r0x000104c0aa5c;
      }
      func_0x000104c12b14();
      pbVar66 = extraout_x14;
      pbVar35 = extraout_x15;
      uVar81 = extraout_w9_12;
    }
    else {
      if (*(char *)(lVar78 + 0x2d3) == '\0') {
        pbVar39 = *(byte **)(lVar52 + 0xb08);
        if (pbVar39 != (byte *)0x0) {
          pbVar42 = *(byte **)(lVar52 + 0xd68);
          goto FUN_104c108d0;
        }
        pbVar26 = (byte *)0x0;
        iStack_210 = 0;
        func_0x000104c12b78();
      }
      else {
        if (*(char *)(lVar78 + 0x326) == '\0') goto LAB_104c0a9d8;
        if (*(char *)(lVar78 + 0x2d4) == '\0') {
LAB_104c0ad1c:
          pbVar39 = *(byte **)(lVar52 + 0xb00);
          pbVar38 = (byte *)&uStack_f0;
          param_4 = (byte *)(ulong)uVar44;
          func_0x000104c1091c(pbVar26,pbVar62,bVar20);
          pbVar26 = pbVar43 + 0x3500;
          func_0x000104c126dc(pbVar26,pbVar43 + (long)(int)uStack_f0 * 0x10 + 0x23d0);
          uVar31 = (uint)pbVar26;
          lVar78 = *(long *)(lVar52 + 0x18);
          cVar15 = *(char *)(lVar78 + 0x327);
          func_0x000104c109a4();
          iStack_210 = 0;
          uVar81 = 0;
          if ((uVar31 & 0xff) <= (uint)(int)cVar15) {
            uVar81 = uVar31;
          }
          uVar31 = 0;
          if ((uVar81 & 0xf8) == 0) {
            uVar31 = uVar81;
          }
          pbVar26 = (byte *)(ulong)uVar31;
LAB_104c0ad80:
          func_0x000104c12b78();
        }
        else {
          func_0x000104c124ac(0x3500,pbVar26,pbVar62);
          iStack_210 = (int)pbVar26;
          if (iStack_210 == 0) {
            pbVar62 = (byte *)(ulong)*(uint *)(param_1 + 0x18);
            pbVar26 = (byte *)(ulong)*(uint *)(param_1 + 0x1c);
            goto LAB_104c0ad1c;
          }
          pbVar39 = *(byte **)(lVar52 + 0xb08);
          if (pbVar39 != (byte *)0x0) {
            lVar78 = *(long *)(lVar52 + 0x18);
            pbVar26 = (byte *)(ulong)*(byte *)(lVar78 + 0x10f);
            func_0x000104c12a44(pbVar26,*(undefined4 *)(param_1 + 0x1c),
                                *(undefined4 *)(param_1 + 0x18));
            goto LAB_104c0ad80;
          }
          pbVar26 = (byte *)0x0;
          pbStack_1c0[4] = 0;
          lVar78 = *(long *)(lVar52 + 0x18);
        }
        pbVar42 = (byte *)((ulong)param_3 & 0xffffffff);
      }
      lVar53 = lVar78 + ((ulong)pbVar26 & 0xff) * 10;
      pbVar62 = (byte *)(lVar53 + 0x2d6);
      if (((*(char *)(lVar53 + 0x2de) == '\0') && (*(char *)(lVar53 + 0x2dc) == -1)) &&
         (*(char *)(lVar53 + 0x2dd) == '\0')) {
        bVar19 = false;
        goto LAB_104c0a9dc;
      }
      pbVar66 = pbStack_1c0 + 5;
      *pbVar66 = 0;
LAB_104c0adc4:
      if (pbVar62[7] == 0) {
LAB_104c0add8:
        func_0x000104c1236c();
        pbVar26 = (byte *)(extraout_x15_01 + 0x3500);
        func_0x000100daf99c(pbVar26,extraout_x15_01 +
                                    ((ulong)pbVar60[param_1 + 0xc0] +
                                    (ulong)*(byte *)(extraout_x8_15 + 0xa0)) * 4 + 0x2a9c);
        pbVar42 = (byte *)((ulong)param_3 & 0xffffffff);
        uVar81 = (uint)pbVar26 & 0xff;
        pbVar62 = extraout_x13;
        pbVar66 = extraout_x14_01;
        pbVar35 = pbVar43;
        unaff_x24 = extraout_x13;
      }
      else {
        uVar81 = 1;
      }
    }
    pbStack_1c0[6] = (byte)uVar81;
    lVar78 = *(long *)(lVar52 + 0x18);
    pbVar67 = pbVar66;
    if (((*(char *)(lVar78 + 0x2d2) != '\0') && (*(char *)(lVar78 + 0x2d3) != '\0')) &&
       (*(char *)(lVar78 + 0x326) == '\0')) {
      if ((uVar81 == 0) && (*(char *)(lVar78 + 0x2d4) != '\0')) {
        func_0x000104c12360(0x3500);
        iStack_210 = (int)pbVar26;
        func_0x000104c124ac();
        if (iStack_210 == 0) {
          iStack_210 = 0;
          goto LAB_104c0ae50;
        }
        pbVar39 = *(byte **)(lVar52 + 0xb08);
        if (pbVar39 == (byte *)0x0) {
          pbVar26 = (byte *)0x0;
          pbStack_1c0[4] = 0;
        }
        else {
          pbVar42 = *(byte **)(lVar52 + 0xd68);
          pbVar26 = (byte *)(ulong)*(byte *)(*(long *)(lVar52 + 0x18) + 0x10f);
          func_0x000104c12a44(pbVar26,*(undefined4 *)(param_1 + 0x1c),
                              *(undefined4 *)(param_1 + 0x18));
          func_0x000104c12b78();
        }
        func_0x000104c12b14();
        pbVar35 = extraout_x15_02;
      }
      else {
LAB_104c0ae50:
        pbVar26 = (byte *)(ulong)*(uint *)(param_1 + 0x1c);
        pbVar39 = *(byte **)(lVar52 + 0xb00);
        pbVar38 = (byte *)&uStack_f0;
        param_4 = (byte *)(ulong)uVar44;
        func_0x000104c1091c(pbVar26,*(undefined4 *)(param_1 + 0x18),bVar20);
        func_0x000104c125fc();
        if (extraout_w8_25 == 0) {
          pbVar26 = pbVar43 + 0x3500;
          func_0x000104c126dc(pbVar26,pbVar43 + (long)(int)uStack_f0 * 0x10 + 0x23d0);
          cVar15 = *(char *)(*(long *)(lVar52 + 0x18) + 0x327);
          func_0x000104c109a4();
          if (((uint)pbVar26 & 0xff) <= (uint)(int)cVar15) goto LAB_104c0af18;
          pbVar26 = (byte *)0x0;
        }
        else {
LAB_104c0af18:
          uVar81 = 0;
          if (((ulong)pbVar26 & 0xf8) == 0) {
            uVar81 = (uint)pbVar26 & 0xff;
          }
          pbVar26 = (byte *)(ulong)uVar81;
        }
        pbVar42 = (byte *)((ulong)param_3 & 0xffffffff);
        func_0x000104c12b78();
        pbVar67 = extraout_x14_02;
        pbVar35 = pbVar43;
      }
      lVar78 = *(long *)(lVar52 + 0x18);
      pbVar62 = (byte *)(lVar78 + ((ulong)pbVar26 & 0xffffffff) * 10 + 0x2d6);
      uVar81 = (uint)pbStack_1c0[6];
      unaff_x24 = pbVar66;
    }
    uVar77 = (ulong)pbVar42 & 0xffffffff;
    if (uVar81 == 0) {
      if (*(char *)(*(long *)(lVar52 + 8) + 0x188) == '\0') {
        uVar57 = 0;
      }
      else {
        uVar57 = (ulong)(*(uint *)(param_1 + 0x1c) >> 3 & 2 | *(uint *)(param_1 + 0x18) >> 4 & 1);
      }
      if (*(char *)(*(long *)(lVar61 + 0x3f1f8) + uVar57) == -1) {
        pbVar26 = pbVar35 + 0x3500;
        FUN_104c10a00(pbVar26,*(undefined1 *)(lVar78 + 0x350));
        uVar18 = SUB81(pbVar26,0);
        *(undefined1 *)(*(long *)(lVar61 + 0x3f1f8) + uVar57) = uVar18;
        if (0x10 < uVar33) {
          *(undefined1 *)(*(long *)(lVar61 + 0x3f1f8) + uVar57 + 1) = uVar18;
        }
        pbVar42 = (byte *)((ulong)param_3 & 0xffffffff);
        pbVar35 = pbVar43;
        unaff_x24 = pbVar62;
        if (((0x10 < uVar34) &&
            (*(undefined1 *)(*(long *)(lVar61 + 0x3f1f8) + uVar57 + 2) = uVar18, uVar33 == 0x20)) &&
           (uVar34 == 0x20)) {
          *(undefined1 *)(*(long *)(lVar61 + 0x3f1f8) + uVar57 + 3) = uVar18;
        }
      }
    }
    cVar15 = *(char *)(*(long *)(lVar52 + 8) + 0x188);
    uVar81 = 0x1f >> (cVar15 == '\0');
    pbVar66 = pbVar35;
    if (((uVar81 & *(uint *)(param_1 + 0x18)) == 0) && ((*(uint *)(param_1 + 0x1c) & uVar81) == 0))
    {
      uVar33 = *(uint *)(pbVar35 + 0x35e8);
      lVar78 = *(long *)(lVar52 + 0x18);
      uVar81 = uVar33;
      if (*(char *)(lVar78 + 0x338) == '\0') {
        iVar50 = *(int *)(pbVar35 + 0x35ec);
      }
      else {
        iVar50 = 3;
        if (cVar15 != '\0') {
          iVar50 = 0;
        }
        if ((int)pbVar42 == iVar50) {
          iVar50 = *(int *)(pbVar35 + 0x35ec);
          if (pbStack_1c0[6] != 0) goto LAB_104c0cfe4;
        }
        else {
          iVar50 = *(int *)(pbVar35 + 0x35ec);
        }
        pbVar26 = pbVar35 + 0x3500;
        func_0x000104c125dc(pbVar26,pbVar35 + 0x29a0);
        iVar24 = (int)pbVar26;
        if (iVar24 == 3) {
          func_0x000104c127a8();
          uVar81 = (int)pbVar26 + 1;
          pbVar26 = unaff_x24 + 0x3500;
          FUN_104c10a00(pbVar26,uVar81);
          iVar24 = (int)pbVar26 + (1 << (ulong)(uVar81 & 0x1f)) + 1;
        }
        if (iVar24 == 0) {
          iVar49 = 0;
          lVar78 = *(long *)(lVar52 + 0x18);
          pbVar66 = pbVar43;
        }
        else {
          func_0x000104c12a94();
          iVar49 = -iVar24;
          if ((int)pbVar26 == 0) {
            iVar49 = iVar24;
          }
          lVar78 = *(long *)(lVar52 + 0x18);
          iVar49 = iVar49 << (ulong)(*(byte *)(lVar78 + 0x339) & 0x1f);
          pbVar66 = unaff_x24;
        }
        pbVar42 = (byte *)((ulong)param_3 & 0xffffffff);
        uVar81 = *(int *)(pbVar66 + 0x35e8) + iVar49;
        if ((int)uVar81 < 2) {
          uVar81 = 1;
        }
        if (0xfe < (int)uVar81) {
          uVar81 = 0xff;
        }
        *(uint *)(pbVar66 + 0x35e8) = uVar81;
        if (*(char *)(lVar78 + 0x33a) != '\0') {
          if (*(char *)(lVar78 + 0x33c) == '\0') {
            lVar78 = 1;
          }
          else {
            lVar78 = 2;
            if (*(int *)(lVar52 + 0x878) != 0) {
              lVar78 = 4;
            }
          }
          pbVar70 = pbVar66;
          for (lVar53 = 0; lVar78 != lVar53; lVar53 = lVar53 + 1) {
            pbVar26 = pbVar70 + 0x3500;
            func_0x000104c125dc(pbVar26,pbVar66 + (lVar53 + (ulong)*(byte *)(*(long *)(lVar52 + 0x18
                                                                                      ) + 0x33c)) *
                                                  8 + 0x29a8);
            iVar24 = (int)pbVar26;
            if (iVar24 == 3) {
              func_0x000104c127a8();
              uVar81 = (int)pbVar26 + 1;
              pbVar26 = unaff_x24 + 0x3500;
              FUN_104c10a00(pbVar26,uVar81);
              iVar24 = (int)pbVar26 + (1 << (ulong)(uVar81 & 0x1f)) + 1;
            }
            if (iVar24 == 0) {
              iVar49 = 0;
              pbVar70 = pbVar43;
            }
            else {
              func_0x000104c12a94();
              iVar49 = -iVar24;
              if ((int)pbVar26 == 0) {
                iVar49 = iVar24;
              }
              iVar49 = iVar49 << (ulong)(*(byte *)(*(long *)(lVar52 + 0x18) + 0x33b) & 0x1f);
              pbVar70 = unaff_x24;
            }
            iVar49 = iVar49 + (char)pbVar66[lVar53 + 0x35ec];
            if (iVar49 < -0x3e) {
              iVar49 = -0x3f;
            }
            if (0x3e < iVar49) {
              iVar49 = 0x3f;
            }
            pbVar66[lVar53 + 0x35ec] = (byte)iVar49;
          }
          lVar78 = *(long *)(lVar52 + 0x18);
          pbVar42 = (byte *)((ulong)param_3 & 0xffffffff);
          pbVar66 = pbVar70;
          uVar81 = *(uint *)(pbVar70 + 0x35e8);
        }
      }
LAB_104c0cfe4:
      if (uVar81 == *(byte *)(lVar78 + 0x2c8)) {
        pbVar70 = (byte *)(lVar52 + 0xd98);
LAB_104c0d04c:
        *(byte **)(pbVar66 + 0x35e0) = pbVar70;
      }
      else if (uVar81 != uVar33) {
        pbVar70 = pbVar66 + 0x3580;
        pbVar26 = (byte *)(ulong)*(byte *)(*(long *)(lVar52 + 8) + 0x20);
        param_4 = pbVar70;
        FUN_104c08df4();
        pbVar42 = (byte *)((ulong)param_3 & 0xffffffff);
        pbVar66 = pbVar43;
        goto LAB_104c0d04c;
      }
      iVar24 = *(int *)(pbVar35 + 0x35ec);
      if (iVar24 == 0) {
        *(long *)(pbVar66 + 0x37f0) = lVar52 + 0x1210;
      }
      else if (iVar24 != iVar50) {
        pbVar26 = pbVar66 + 0x35f0;
        *(byte **)(pbVar66 + 0x37f0) = pbVar26;
        FUN_104c1b5dc(pbVar26,*(undefined8 *)(lVar52 + 0x18),pbVar35 + 0x35ec);
        pbVar42 = (byte *)((ulong)param_3 & 0xffffffff);
        pbVar66 = pbVar43;
      }
    }
    sVar8 = (short)iStack_210 * 0x101;
    pbVar35 = pbVar66 + uVar77 * 4;
    bVar7 = (byte)iStack_210;
    bVar21 = (byte)pbVar43;
    iVar50 = (int)pbVar43;
    if (*pbVar67 == 0) {
      if ((*(byte *)(*(long *)(lVar52 + 0x18) + 0xe8) & 1) == 0) {
        if (*(char *)(*(long *)(lVar52 + 0x18) + 0x1a3) != '\0') {
          pbVar26 = pbVar66 + 0x3500;
          func_0x000100daf99c(pbVar26,pbVar66 + 0x2b04);
          iVar24 = (int)pbVar26;
          pbStack_1c0[3] = iVar24 == 0;
          goto joined_r0x000104c0ba3c;
        }
        pbStack_1c0[3] = 1;
      }
      else {
        if (pbVar62 != (byte *)0x0) {
          bVar47 = pbVar62[6];
          if (-1 < (char)bVar47) {
            pbStack_1c0[3] = bVar47 == 0;
            if (bVar47 == 0) goto LAB_104c0ba40;
            goto LAB_104c0b09c;
          }
          if (pbVar62[8] != 0) goto LAB_104c0b090;
        }
        if (iVar56 < (int)uVar72) {
          if ((int)uVar30 < (int)uVar32) {
            uVar33 = (uint)pbVar74[*(long *)(param_1 + 0x290) + 0xe0] +
                     (uint)pbVar60[param_1 + 0x100];
            uVar81 = 3;
            if (uVar33 != 2) {
              uVar81 = uVar33;
            }
          }
          else {
            uVar81 = (uint)pbVar60[param_1 + 0x100] << 1;
          }
        }
        else if ((int)uVar30 < (int)uVar32) {
          uVar81 = (uint)pbVar74[*(long *)(param_1 + 0x290) + 0xe0] << 1;
        }
        else {
          uVar81 = 0;
        }
        pbVar26 = pbVar66 + 0x3500;
        func_0x000104c12a30(pbVar66 + (ulong)uVar81 * 4);
        iVar24 = (int)pbVar26;
        pbStack_1c0[3] = iVar24 == 0;
joined_r0x000104c0ba3c:
        pbVar42 = (byte *)((ulong)param_3 & 0xffffffff);
        pbVar66 = pbVar43;
        if (iVar24 != 0) goto LAB_104c0b09c;
      }
LAB_104c0ba40:
      if ((*(byte *)(*(long *)(lVar52 + 0x18) + 0xe8) & 1) == 0) {
        lVar78 = (ulong)(byte)(&UNK_10dd74f8f)[pbVar60[param_1 + 0x20]] * 0x20 +
                 (ulong)(byte)(&UNK_10dd74f8f)[pbVar74[*(long *)(param_1 + 0x290)]] * 0xa0;
        lVar53 = 0x31e0;
      }
      else {
        lVar78 = (ulong)(byte)(&UNK_10dd74edb)[uVar77] * 0x20;
        lVar53 = 0x2b20;
      }
      pbVar26 = pbVar66 + 0x3500;
      func_0x000100daf650(pbVar26,pbVar66 + lVar78 + lVar53,0xc);
      pbStack_1c0[8] = (byte)pbVar26;
      bVar47 = (&UNK_10dd74d4a)[lVar58];
      bVar22 = (&UNK_10dd74d4b)[lVar58];
      uVar32 = (uint)((ulong)bVar22 + (ulong)bVar47);
      uVar18 = 1 < uVar32;
      uVar13 = uVar32 == 2;
      if ((bool)uVar18) {
        uVar81 = ((uint)pbVar26 & 0xff) - 1;
        uVar18 = 6 < uVar81;
        uVar13 = uVar81 == 7;
        if (7 < uVar81) goto LAB_104c0baf4;
        bVar45 = bVar21;
        func_0x000104c12a50(pbVar43 + (ulong)uVar81 * 0x10);
        bVar45 = bVar45 - 3;
      }
      else {
LAB_104c0baf4:
        bVar45 = 0;
      }
      pbVar26 = (byte *)((ulong)param_3 & 0xffffffff);
      pbStack_1c0[0xd] = bVar45;
      pbVar62 = pbVar43;
      if (uVar85 != 0) {
        func_0x000104c129b4();
        if (extraout_w8_29 == 0) {
          uVar57 = (ulong)(0x3ffb80U >> (ulong)((uint)pbVar26 & 0x1f) & 1);
        }
        else {
          uVar57 = (ulong)(uVar9 == 1 && uVar2 == 1);
        }
        pbVar66 = extraout_x13_00 + 0x3500;
        func_0x000100daf650(pbVar66,extraout_x13_00 +
                                    (ulong)pbStack_1c0[8] * 0x20 + uVar57 * 0x1a0 + 0x1840,
                            (uint)uVar57 | 0xc);
        pbStack_1c0[9] = (byte)pbVar66;
        pbStack_1c0[0xe] = 0;
        uVar81 = (uint)pbVar66 & 0xff;
        bVar45 = (byte)extraout_x13_00;
        if (uVar81 == 0xd) {
          pbVar26 = extraout_x13_00 + 0x3500;
          func_0x000104c126dc(pbVar26,extraout_x13_00 + 0x2330);
          iVar51 = (int)pbVar26 + 1;
          uVar32 = iVar51 * 0x56;
          iVar56 = (int)uVar32 >> 8;
          iVar51 = iVar56 * -3 + iVar51;
          uVar13 = uVar32 == 0x100;
          if (uVar32 < 0x100) {
            bVar46 = 0;
            uVar18 = false;
          }
          else {
            iVar50 = 3;
            if (iVar56 != 2) {
              iVar50 = 0;
            }
            func_0x000104c12418(extraout_x13_00 + (long)(iVar50 + iVar51) * 0x20);
            bVar46 = ~bVar45;
            uVar18 = iVar56 != 0;
            uVar13 = iVar56 == 1;
            if (!(bool)uVar13) {
              bVar46 = bVar45 + 1;
            }
          }
          pbStack_1c0[0xf] = bVar46;
          if (iVar51 == 0) {
            pbStack_1c0[0x10] = 0;
          }
          else {
            iVar50 = 3;
            if (iVar51 != 2) {
              iVar50 = 0;
            }
            func_0x000104c12418(pbVar43 + (long)(iVar50 + iVar56) * 0x20);
            bVar45 = ~bVar21;
            uVar18 = iVar51 != 0;
            uVar13 = iVar51 == 1;
            if (!(bool)uVar13) {
              bVar45 = bVar21 + 1;
            }
            pbStack_1c0[0x10] = bVar45;
          }
          pbVar26 = (byte *)((ulong)param_3 & 0xffffffff);
        }
        else {
          uVar18 = 1 < uVar32;
          uVar13 = uVar32 == 2;
          pbVar26 = (byte *)((ulong)param_3 & 0xffffffff);
          pbVar62 = extraout_x13_00;
          if (((bool)uVar18) && (((ulong)pbVar66 & 0xff) != 0)) {
            uVar18 = 7 < uVar81;
            uVar13 = uVar81 == 8;
            if (uVar81 < 9) {
              func_0x000104c12a50(extraout_x13_00 + (ulong)(uVar81 - 1) * 0x10);
              func_0x000104c12678();
              pbStack_1c0[0xe] = bVar45 - 3;
              pbVar62 = extraout_x13_01;
            }
          }
        }
      }
      pbStack_1c0[0xb] = 0;
      pbStack_1c0[0xc] = 0;
      uVar32 = (uint)bVar23;
      if (*(char *)(*(long *)(lVar52 + 0x18) + 0x10c) != '\0') {
        uVar81 = uVar32;
        if (uVar32 <= uVar34) {
          uVar81 = uVar34;
        }
        uVar33 = uVar34 + uVar32;
        bVar20 = uVar81 < 0x11;
        uVar18 = bVar20 && 3 < uVar33;
        uVar13 = bVar20 && uVar33 == 4;
        if (bVar20 && 3 < uVar33) {
          pbVar66 = (byte *)((ulong)bVar22 + (ulong)bVar47 + -2);
          if (pbStack_1c0[8] == 0) {
            uVar57 = (ulong)(pbVar60[param_1 + 0x270] != 0);
            uVar13 = pbVar74[*(long *)(param_1 + 0x290) + 0x250] == 0;
            uVar18 = 1;
            if (!(bool)uVar13) {
              uVar57 = uVar57 + 1;
            }
            iVar51 = (int)pbVar62 + 0x3500;
            func_0x000104c12358(pbVar62 + uVar57 * 4 + (long)(int)pbVar66 * 0xc);
            func_0x000104c12678();
            if (iVar51 != 0) {
              pbVar26 = pbStack_1c0;
              param_4 = pbVar66;
              pbVar38 = pbVar74;
              pbVar39 = pbVar60;
              (**(code **)(lVar52 + 0xd38))(param_1,pbStack_1c0,0);
              func_0x000104c12678();
            }
          }
          if ((uVar85 != 0) && (func_0x000104c12478(), extraout_w8_37 == 0)) {
            func_0x000104c12b60();
            uVar13 = extraout_w8_38 == 0;
            uVar18 = 1;
            iVar51 = (int)extraout_x13_03 + 0x3500;
            func_0x000104c12358(extraout_x13_03 + (ulong)!(bool)uVar13 * 4);
            func_0x000104c12678();
            if (iVar51 != 0) {
              pbVar26 = pbStack_1c0;
              param_4 = pbVar74;
              pbVar38 = pbVar60;
              (**(code **)(lVar52 + 0xd40))(param_1,pbStack_1c0,pbVar66);
              func_0x000104c12678();
            }
          }
        }
      }
      if (pbStack_1c0[8] == 0) {
        func_0x000104c12b60();
        if (extraout_w8_40 != 0) goto LAB_104c0c7f4;
        if (bVar47 <= bVar22) {
          bVar47 = bVar22;
        }
        uVar18 = 2 < bVar47;
        uVar13 = bVar47 == 3;
        if (bVar47 < 4) {
          if (*(char *)(*(long *)(lVar52 + 8) + 0x189) != '\0') {
            iVar51 = extraout_w13 + 0x3500;
            pbVar26 = pbVar35 + 0x29f0;
            func_0x000100daf99c();
            func_0x000104c12678();
            if (iVar51 != 0) {
              pbStack_1c0[8] = 0xd;
              lVar58 = extraout_x13_04 + 0x3500;
              pbVar26 = (byte *)(extraout_x13_04 + 0x23c0);
              func_0x000100daf560(lVar58,pbVar26,4);
              bVar22 = (byte)lVar58;
              func_0x000104c12678();
              pbStack_1c0[0xd] = bVar22;
            }
          }
          goto LAB_104c0c7e0;
        }
      }
      else {
LAB_104c0c7e0:
        func_0x000104c12b60();
        if (extraout_w8_39 != 0) {
LAB_104c0c7f4:
          if (*(int *)(lVar61 + 0x3f204) != 0) {
            func_0x000104c12c58();
            *(byte **)(extraout_x8_57 + 0x3548) = pbVar26 + uVar32 * uVar34 * 8;
          }
          pbVar38 = (byte *)(ulong)uVar25;
          pbVar39 = (byte *)(ulong)uVar65;
          param_4 = (byte *)0x0;
          pbVar42 = pbVar82;
          FUN_104c10a48(param_1);
          pbVar26 = (byte *)((ulong)param_3 & 0xffffffff);
        }
      }
      if ((uVar85 != 0) && (uVar81 = uVar2, func_0x000104c12b6c(), extraout_w8_41 != 0)) {
        pbVar38 = (byte *)(ulong)(uint)((int)(uVar25 + bVar16) >> (uint)bVar16);
        pbVar39 = (byte *)(ulong)(uint)((int)(uVar65 + bVar17) >> (uint)bVar17);
        if (*(int *)(lVar61 + 0x3f204) != 0) {
          func_0x000104c12c58();
          *(byte **)(extraout_x8_58 + 0x3548) = pbVar26 + uVar9 * uVar81 * 8;
        }
        pbVar42 = (byte *)(ulong)uVar9;
        param_4 = (byte *)0x1;
        FUN_104c10a48(param_1);
        pbVar26 = (byte *)((ulong)param_3 & 0xffffffff);
      }
      func_0x000104c129b4();
      if (extraout_w8_42 == 0) {
        bVar22 = (&UNK_10dd74e38)[uVar77 * 4];
        pbStack_1c0[10] = bVar22;
        pbStack_1c0[7] = (&UNK_10dd74e38 + uVar77 * 4)[*(uint *)(lVar52 + 0x878)];
        lVar58 = (ulong)bVar22 * 8;
        puVar79 = &UNK_10dd74da0 + lVar58;
        uVar25 = *(uint *)(*(long *)(lVar52 + 0x18) + 0x374);
        uVar18 = 1 < uVar25;
        uVar13 = uVar25 == 2;
        if ((bool)uVar13) {
          bVar22 = (&UNK_10dd74da5)[lVar58];
          uVar25 = (uint)bVar22;
          if (uVar25 != 0) {
            uVar77 = (ulong)((int)(uint)(byte)(&UNK_10dd74da2)[lVar58] <=
                            (int)(char)pbVar74[*(long *)(param_1 + 0x290) + 0x1a0]);
            if ((int)(uint)(byte)(&UNK_10dd74da3)[lVar58] <= (int)(char)pbVar60[param_1 + 0x1c0]) {
              uVar77 = uVar77 + 1;
            }
            uVar18 = 1 < bVar22;
            uVar13 = bVar22 == 2;
            if ((bool)uVar18) {
              bVar22 = 2;
            }
            uVar57 = extraout_x13_05 + 0x3500;
            func_0x000100daf3e4(uVar57,extraout_x13_05 + (ulong)(uVar25 - 1) * 0x18 + uVar77 * 8 +
                                       0x2940,bVar22);
            pbVar26 = (byte *)((ulong)param_3 & 0xffffffff);
            uVar25 = (uint)uVar57;
            while (uVar25 != 0) {
              uVar25 = (int)uVar57 - 1;
              uVar57 = (ulong)uVar25;
              bVar22 = puVar79[6];
              pbStack_1c0[10] = bVar22;
              puVar79 = &UNK_10dd74da0 + (ulong)bVar22 * 8;
            }
          }
        }
      }
      else {
        pbStack_1c0[7] = 0;
        pbStack_1c0[10] = 0;
        puVar79 = &UNK_10dd74da0;
      }
      param_5 = (byte *)((ulong)param_5 & 0xffffffff);
      func_0x000104c12520();
      if ((bool)uVar13) {
        param_5 = pbStack_1c0;
        (**(code **)(lVar52 + 0xd20))(param_1);
      }
      else {
        param_4 = pbStack_1c0;
        (**(code **)(lVar52 + 0xcd8))(param_1);
      }
      if ((*(char *)(*(long *)(lVar52 + 0x18) + 0x33e) != '\0') ||
         (*(char *)(*(long *)(lVar52 + 0x18) + 0x33f) != '\0')) {
        pbVar26 = *(byte **)(lVar52 + 0x1140);
        param_5 = *(byte **)(lVar52 + 0xd68);
        param_4 = (byte *)(*(long *)(pbVar43 + 0x37f0) + (ulong)pbStack_1c0[4] * 0x40);
        pbVar38 = (byte *)(ulong)*(uint *)(param_1 + 0x18);
        pbVar39 = (byte *)(ulong)*(uint *)(param_1 + 0x1c);
        pbVar42 = (byte *)(ulong)*(uint *)(lVar52 + 0xd70);
        uVar13 = uVar85 == 0;
        uVar18 = 1;
        func_0x000104c1a760(*(undefined8 *)(lVar61 + 0x3f1e8));
      }
      func_0x000104c12738(pbStack_1c0[8]);
      if (!(bool)uVar18 || (bool)uVar13) {
                    /* WARNING: Could not recover jumptable at 0x000104c0cb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(ushort *)(&UNK_10dd6a8dc + extraout_x10_18 * 2) * 4 + 0x104c0cb20))();
        return;
      }
      if (uVar34 == 0x10) {
        lVar58 = 0;
        lVar78 = (ulong)(byte)puVar79[3] * 0x101010101010101;
        *(long *)(pbVar60 + param_1 + 0x1c8) = lVar78;
        *(long *)(pbVar60 + param_1 + 0x1c0) = lVar78;
        *(long *)(pbVar60 + param_1 + 0x1e8) = lVar78;
        *(long *)(pbVar60 + param_1 + 0x1e0) = lVar78;
        *(long *)(pbVar60 + param_1 + 0x28) = extraout_x8_59 * 0x101010101010101;
        *(long *)(pbVar60 + param_1 + 0x20) = extraout_x8_59 * 0x101010101010101;
        bVar22 = pbStack_1c0[0xb];
        *(ulong *)(pbVar60 + param_1 + 0x278) = (ulong)bVar22 * 0x101010101010101;
        *(ulong *)(pbVar60 + param_1 + 0x270) = (ulong)bVar22 * 0x101010101010101;
        *(long *)(pbVar60 + param_1 + 0xa8) = (long)iStack_210 * 0x101010101010101;
        *(long *)(pbVar60 + param_1 + 0xa0) = (long)iStack_210 * 0x101010101010101;
        pbVar43 = pbVar60 + param_1 + 0xe0;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43[4] = 0;
        pbVar43[5] = 0;
        pbVar43[6] = 0;
        pbVar43[7] = 0;
        pbVar43 = pbVar60 + param_1 + 0xe8;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43[4] = 0;
        pbVar43[5] = 0;
        pbVar43[6] = 0;
        pbVar43[7] = 0;
        pbVar43 = pbVar60 + param_1 + 0x100;
        pbVar62 = pbVar60 + param_1 + 0x108;
        pbVar62[0] = 1;
        pbVar62[1] = 1;
        pbVar62[2] = 1;
        pbVar62[3] = 1;
        pbVar62[4] = 1;
        pbVar62[5] = 1;
        pbVar62[6] = 1;
        pbVar62[7] = 1;
        pbVar43[0] = 1;
        pbVar43[1] = 1;
        pbVar43[2] = 1;
        pbVar43[3] = 1;
        pbVar43[4] = 1;
        pbVar43[5] = 1;
        pbVar43[6] = 1;
        pbVar43[7] = 1;
        bVar22 = pbStack_1c0[6];
        *(ulong *)(pbVar60 + param_1 + 200) = (ulong)bVar22 * 0x101010101010101;
        *(ulong *)(pbVar60 + param_1 + 0xc0) = (ulong)bVar22 * 0x101010101010101;
        if (uVar85 != 0) {
          lVar58 = (ulong)pbStack_1c0[0xc] * 0x101010101010101;
        }
        *(long *)(pbVar60 + param_1 + 0x2028) = lVar58;
        *(long *)(pbVar60 + param_1 + 0x2020) = lVar58;
        func_0x000104c129fc();
        lVar58 = extraout_x8_60;
        uVar55 = extraout_w9_05;
        if ((extraout_x10_19 & 1) != 0) {
          pbVar43 = pbVar60 + param_1 + 0x120;
          pbVar43[0] = 0;
          pbVar43[1] = 0;
          pbVar43[2] = 0;
          pbVar43[3] = 0;
          pbVar43[4] = 0;
          pbVar43[5] = 0;
          pbVar43[6] = 0;
          pbVar43[7] = 0;
          pbVar43 = pbVar60 + param_1 + 0x128;
          pbVar43[0] = 0;
          pbVar43[1] = 0;
          pbVar43[2] = 0;
          pbVar43[3] = 0;
          pbVar43[4] = 0;
          pbVar43[5] = 0;
          pbVar43[6] = 0;
          pbVar43[7] = 0;
          pbVar43 = pbVar60 + param_1 + 0x140;
          pbVar62 = pbVar60 + param_1 + 0x148;
          pbVar62[0] = 0xff;
          pbVar62[1] = 0xff;
          pbVar62[2] = 0xff;
          pbVar62[3] = 0xff;
          pbVar62[4] = 0xff;
          pbVar62[5] = 0xff;
          pbVar62[6] = 0xff;
          pbVar62[7] = 0xff;
          pbVar43[0] = 0xff;
          pbVar43[1] = 0xff;
          pbVar43[2] = 0xff;
          pbVar43[3] = 0xff;
          pbVar43[4] = 0xff;
          pbVar43[5] = 0xff;
          pbVar43[6] = 0xff;
          pbVar43[7] = 0xff;
          pbVar43 = pbVar60 + param_1 + 0x160;
          pbVar62 = pbVar60 + param_1 + 0x168;
          pbVar62[0] = 0xff;
          pbVar62[1] = 0xff;
          pbVar62[2] = 0xff;
          pbVar62[3] = 0xff;
          pbVar62[4] = 0xff;
          pbVar62[5] = 0xff;
          pbVar62[6] = 0xff;
          pbVar62[7] = 0xff;
          pbVar43[0] = 0xff;
          pbVar43[1] = 0xff;
          pbVar43[2] = 0xff;
          pbVar43[3] = 0xff;
          pbVar43[4] = 0xff;
          pbVar43[5] = 0xff;
          pbVar43[6] = 0xff;
          pbVar43[7] = 0xff;
          pbVar43 = pbVar60 + param_1 + 0x180;
          pbVar62 = pbVar60 + param_1 + 0x188;
          pbVar62[0] = 3;
          pbVar62[1] = 3;
          pbVar62[2] = 3;
          pbVar62[3] = 3;
          pbVar62[4] = 3;
          pbVar62[5] = 3;
          pbVar62[6] = 3;
          pbVar62[7] = 3;
          pbVar43[0] = 3;
          pbVar43[1] = 3;
          pbVar43[2] = 3;
          pbVar43[3] = 3;
          pbVar43[4] = 3;
          pbVar43[5] = 3;
          pbVar43[6] = 3;
          pbVar43[7] = 3;
          pbVar43 = pbVar60 + param_1 + 0x1a0;
          pbVar62 = pbVar60 + param_1 + 0x1a8;
          pbVar62[0] = 3;
          pbVar62[1] = 3;
          pbVar62[2] = 3;
          pbVar62[3] = 3;
          pbVar62[4] = 3;
          pbVar62[5] = 3;
          pbVar62[6] = 3;
          pbVar62[7] = 3;
          pbVar43[0] = 3;
          pbVar43[1] = 3;
          pbVar43[2] = 3;
          pbVar43[3] = 3;
          pbVar43[4] = 3;
          pbVar43[5] = 3;
          pbVar43[6] = 3;
          pbVar43[7] = 3;
        }
      }
      else {
        lVar58 = extraout_x8_59;
        uVar55 = extraout_w9_04;
        if (uVar34 == 0x20) {
          lVar58 = (ulong)(byte)puVar79[3] * 0x101010101010101;
          *(long *)(pbVar60 + param_1 + 0x1c0 + 8) = lVar58;
          *(long *)(pbVar60 + param_1 + 0x1c0) = lVar58;
          *(long *)(pbVar60 + param_1 + 0x1d0 + 8) = lVar58;
          *(long *)(pbVar60 + param_1 + 0x1d0) = lVar58;
          *(long *)(pbVar60 + param_1 + 0x1e0 + 8) = lVar58;
          *(long *)(pbVar60 + param_1 + 0x1e0) = lVar58;
          *(long *)(pbVar60 + param_1 + 0x1f0 + 8) = lVar58;
          *(long *)(pbVar60 + param_1 + 0x1f0) = lVar58;
          func_0x000104c12b54(extraout_x8_59 * 0x101010101010101);
          func_0x000104c12888();
          func_0x000104c12888();
          func_0x000104c12b54();
          func_0x000104c12b54();
          func_0x000104c12888();
          if (uVar85 == 0) {
            lVar58 = 0;
          }
          else {
            lVar58 = (ulong)pbStack_1c0[0xc] * extraout_x11_07;
          }
          func_0x000104c12b54(lVar58);
          lVar58 = extraout_x8_61;
          uVar55 = extraout_w9_06;
          if ((*(byte *)(*(long *)(lVar52 + 0x18) + 0xe8) & 1) != 0) {
            func_0x000104c129e4();
            func_0x000104c129e4(0xffffffffffffffff);
            func_0x000104c129e4();
            func_0x000104c129e4();
            func_0x000104c129e4();
            lVar58 = extraout_x8_62;
            uVar55 = extraout_w9_07;
          }
        }
      }
      uVar25 = uVar32 - 1;
      uVar18 = 6 < uVar25;
      uVar13 = uVar25 == 7;
      switch(uVar25) {
      case 0:
        bVar22 = puVar79[2];
        pbVar74[*(long *)(param_1 + 0x290) + 0x1a0] = bVar22;
        pbVar74[*(long *)(param_1 + 0x290) + 0x1c0] = bVar22;
        pbVar74[*(long *)(param_1 + 0x290)] = (byte)lVar58;
        func_0x000104c12bf0(pbStack_1c0[0xb]);
        *(undefined1 *)(extraout_x10_20 + 0x250) = extraout_w8_04;
        func_0x000104c129a8();
        *(byte *)(extraout_x8_63 + 0x80) = bVar7;
        func_0x000104c129a8();
        *(undefined1 *)(extraout_x8_64 + 0xc0) = 0;
        func_0x000104c129a8();
        *(undefined1 *)(extraout_x8_65 + 0xe0) = 1;
        func_0x000104c12bf0(*(undefined1 *)(extraout_x11_08 + 6));
        *(undefined1 *)(extraout_x10_21 + 0xa0) = extraout_w8_05;
        bVar22 = extraout_w9;
        if (uVar85 != 0) {
          bVar22 = pbStack_1c0[0xc];
        }
        *(byte *)(param_1 + extraout_x12_10 + 0x2000) = bVar22;
        func_0x000104c125e4();
        if ((extraout_x8_66 & 1) != 0) {
          func_0x000104c12598();
          *(undefined1 *)(extraout_x8_67 + 0x100) = 0;
          func_0x000104c123fc();
          *(undefined1 *)(extraout_x8_68 + 0x120) = 0xff;
          func_0x000104c123fc();
          *(undefined1 *)(extraout_x8_69 + 0x140) = extraout_w9_00;
          func_0x000104c123fc();
          *(undefined1 *)(extraout_x8_70 + 0x160) = 3;
          func_0x000104c123fc();
          *(undefined1 *)(extraout_x8_71 + 0x180) = extraout_w9_01;
        }
        break;
      case 1:
        uVar11 = CONCAT11(puVar79[2],puVar79[2]);
        *(undefined2 *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1a0) = uVar11;
        *(undefined2 *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1c0) = uVar11;
        *(undefined2 *)(pbVar74 + *(long *)(param_1 + 0x290)) = uVar55;
        func_0x000104c12bf0(0);
        *(undefined2 *)(extraout_x10_25 + 0x250) = extraout_w9_08;
        *(short *)(*(long *)(param_1 + 0x290) + extraout_x12_26 + 0x80) = sVar8;
        *(undefined2 *)(*(long *)(param_1 + 0x290) + extraout_x12_26 + 0xc0) = 0;
        *(undefined2 *)(*(long *)(param_1 + 0x290) + extraout_x12_26 + 0xe0) = 0x101;
        func_0x000104c12bf0();
        *(undefined2 *)(extraout_x10_26 + 0xa0) = extraout_w9_09;
        lVar58 = extraout_x12_27;
        uVar48 = extraout_w8_16;
        if (uVar85 != 0) {
          func_0x000104c12b6c();
          uVar48 = (ushort)extraout_w8_43 | (ushort)(extraout_w8_43 << 8);
          lVar58 = extraout_x12_28;
        }
        *(ushort *)(param_1 + lVar58 + 0x2000) = uVar48;
        func_0x000104c125e4();
        if ((extraout_x8_x00104 & 1) != 0) {
          func_0x000104c12598();
          *(undefined2 *)(extraout_x8_x00105 + 0x100) = 0;
          func_0x000104c123fc();
          *(undefined2 *)(extraout_x8_x00106 + 0x120) = 0xffff;
          func_0x000104c123fc();
          *(undefined2 *)(extraout_x8_x00107 + 0x140) = extraout_w9_10;
          func_0x000104c123fc();
          *(undefined2 *)(extraout_x8_x00108 + 0x160) = 0x303;
          func_0x000104c123fc();
          *(undefined2 *)(extraout_x8_x00109 + 0x180) = extraout_w9_11;
        }
        break;
      case 2:
      case 4:
      case 5:
      case 6:
        break;
      case 3:
        bVar22 = puVar79[2];
        *(uint *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1a0) = (uint)bVar22 * 0x1010101;
        *(uint *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1c0) = (uint)bVar22 * 0x1010101;
        *(int *)(pbVar74 + *(long *)(param_1 + 0x290)) = (int)lVar58 * 0x1010101;
        func_0x000104c12764((uint)pbStack_1c0[0xb] * 0x1010101);
        *(undefined4 *)(extraout_x11_12 + 0x250) = extraout_w8_44;
        func_0x000104c12764(iStack_210 * extraout_w10);
        *(undefined4 *)(extraout_x11_13 + 0x80) = extraout_w8_45;
        func_0x000104c1258c();
        *(undefined4 *)(extraout_x8_x00110 + 0xc0) = 0;
        func_0x000104c1258c();
        *(int *)(extraout_x8_x00111 + 0xe0) = extraout_w10_00;
        func_0x000104c12764((uint)*(byte *)(extraout_x12_29 + 6) * extraout_w10_00);
        *(undefined4 *)(extraout_x11_14 + 0xa0) = extraout_w8_46;
        lVar58 = extraout_x13_07;
        iVar51 = extraout_w9_17;
        if (uVar85 != 0) {
          func_0x000104c12b6c();
          iVar51 = extraout_w8_47 * extraout_w10_01;
          lVar58 = extraout_x13_08;
        }
        *(int *)(param_1 + lVar58 + 0x2000) = iVar51;
        func_0x000104c125e4();
        if ((extraout_x8_x00112 & 1) != 0) {
          func_0x000104c12598();
          *(undefined4 *)(extraout_x8_x00113 + 0x100) = 0;
          func_0x000104c123fc();
          *(undefined4 *)(extraout_x8_x00114 + 0x120) = 0xffffffff;
          func_0x000104c123fc();
          *(undefined4 *)(extraout_x8_x00115 + 0x140) = extraout_w9_18;
          func_0x000104c123fc();
          *(undefined4 *)(extraout_x8_x00116 + 0x160) = 0x3030303;
          func_0x000104c123fc();
          *(undefined4 *)(extraout_x8_x00117 + 0x180) = extraout_w9_19;
        }
        break;
      case 7:
        bVar22 = puVar79[2];
        *(ulong *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1a0) = (ulong)bVar22 * 0x101010101010101
        ;
        *(ulong *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1c0) = (ulong)bVar22 * 0x101010101010101
        ;
        *(long *)(pbVar74 + *(long *)(param_1 + 0x290)) = lVar58 * 0x101010101010101;
        func_0x000104c12764((ulong)pbStack_1c0[0xb] * 0x101010101010101);
        *(undefined8 *)(extraout_x11_09 + 0x250) = extraout_x8_92;
        func_0x000104c125f0();
        func_0x000104c12764(extraout_x8_93 * extraout_x10_22);
        *(undefined8 *)(extraout_x11_10 + 0x80) = extraout_x8_94;
        func_0x000104c1258c();
        *(undefined8 *)(extraout_x8_95 + 0xc0) = 0;
        func_0x000104c1258c();
        *(long *)(extraout_x8_96 + 0xe0) = extraout_x10_23;
        func_0x000104c12764((ulong)*(byte *)(extraout_x12_25 + 6) * extraout_x10_23);
        *(undefined8 *)(extraout_x11_11 + 0xa0) = extraout_x8_97;
        lVar58 = extraout_x9_26;
        if (uVar85 != 0) {
          lVar58 = (ulong)pbStack_1c0[0xc] * extraout_x10_24;
        }
        *(long *)(param_1 + extraout_x13_06 + 0x2000) = lVar58;
        func_0x000104c125e4();
        if ((extraout_x8_98 & 1) != 0) {
          func_0x000104c12598();
          *(undefined8 *)(extraout_x8_99 + 0x100) = 0;
          func_0x000104c123fc();
          *(undefined8 *)(extraout_x8_x00100 + 0x120) = 0xffffffffffffffff;
          func_0x000104c123fc();
          *(undefined8 *)(extraout_x8_x00101 + 0x140) = extraout_x9_27;
          func_0x000104c123fc();
          *(undefined8 *)(extraout_x8_x00102 + 0x160) = 0x303030303030303;
          func_0x000104c123fc();
          *(undefined8 *)(extraout_x8_x00103 + 0x180) = extraout_x9_28;
        }
        break;
      default:
        uVar18 = 0xf < uVar32;
        uVar13 = uVar32 == 0x10;
        if ((bool)uVar13) {
          lVar78 = (ulong)(byte)puVar79[2] * 0x101010101010101;
          *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1a0) = lVar78;
          *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1a8) = lVar78;
          *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1c0) = lVar78;
          *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1c8) = lVar78;
          *(long *)(pbVar74 + *(long *)(param_1 + 0x290)) = lVar58 * 0x101010101010101;
          *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 8) = lVar58 * 0x101010101010101;
          func_0x000104c12838(pbStack_1c0[0xb]);
          *(undefined8 *)(extraout_x12_30 + 0x250) = extraout_x8_x00118;
          func_0x000104c126d0();
          *(undefined8 *)(extraout_x12_31 + 0x250) = extraout_x8_x00119;
          func_0x000104c125f0();
          func_0x000104c12838();
          *(undefined8 *)(extraout_x12_32 + 0x80) = extraout_x8_x00120;
          func_0x000104c126d0();
          *(undefined8 *)(extraout_x12_33 + 0x80) = extraout_x8_x00121;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x14_03 + 0xc0) = 0;
          func_0x000104c12484();
          *(undefined8 *)(extraout_x8_x00122 + 0xc0) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x14_04 + 0xe0) = extraout_x11_15;
          func_0x000104c12484();
          *(undefined8 *)(extraout_x8_x00123 + 0xe0) = extraout_x11_16;
          func_0x000104c12838(*(undefined1 *)(extraout_x13_09 + 6));
          *(undefined8 *)(extraout_x12_34 + 0xa0) = extraout_x8_x00124;
          func_0x000104c126d0();
          *(undefined8 *)(extraout_x12_35 + 0xa0) = extraout_x8_x00125;
          lVar58 = extraout_x10_27;
          if (uVar85 != 0) {
            lVar58 = (ulong)pbStack_1c0[0xc] * extraout_x11_17;
          }
          *(long *)(param_1 + extraout_x14_05 + 0x2008) = lVar58;
          *(long *)(param_1 + extraout_x14_05 + 0x2000) = lVar58;
          func_0x000104c125e4();
          if ((extraout_x8_x00126 & 1) != 0) {
            pbVar43 = pbVar74 + *(long *)(param_1 + 0x290) + 0x100;
            pbVar43[0] = 0;
            pbVar43[1] = 0;
            pbVar43[2] = 0;
            pbVar43[3] = 0;
            pbVar43[4] = 0;
            pbVar43[5] = 0;
            pbVar43[6] = 0;
            pbVar43[7] = 0;
            func_0x000104c12484();
            *(undefined8 *)(extraout_x8_x00127 + 0x100) = 0;
            func_0x000104c1246c();
            *(undefined8 *)(extraout_x8_x00128 + 0x120) = 0xffffffffffffffff;
            func_0x000104c12484();
            *(undefined8 *)(extraout_x8_x00129 + 0x120) = extraout_x10_28;
            func_0x000104c1246c();
            *(undefined8 *)(extraout_x8_x00130 + 0x140) = extraout_x10_29;
            func_0x000104c12484();
            *(undefined8 *)(extraout_x8_x00131 + 0x140) = extraout_x10_30;
            func_0x000104c1246c();
            *(undefined8 *)(extraout_x8_x00132 + 0x160) = 0x303030303030303;
            func_0x000104c12484();
            *(undefined8 *)(extraout_x8_x00133 + 0x160) = extraout_x10_31;
            func_0x000104c1246c();
            *(undefined8 *)(extraout_x8_x00134 + 0x180) = extraout_x10_32;
            func_0x000104c12484();
            *(undefined8 *)(extraout_x8_x00135 + 0x180) = extraout_x10_33;
          }
        }
        else {
          uVar18 = 0x1f < uVar32;
          uVar13 = uVar32 == 0x20;
          if ((bool)uVar13) {
            lVar78 = 0;
            lVar53 = (ulong)(byte)puVar79[2] * 0x101010101010101;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1a0) = lVar53;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1a8) = lVar53;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1b0) = lVar53;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1b8) = lVar53;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1c0) = lVar53;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1c8) = lVar53;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1d0) = lVar53;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1d8) = lVar53;
            lVar58 = lVar58 * 0x101010101010101;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290)) = lVar58;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 8) = lVar58;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x10) = lVar58;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x18) = lVar58;
            lVar58 = (ulong)pbStack_1c0[0xb] * 0x101010101010101;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x250) = lVar58;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 600) = lVar58;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x260) = lVar58;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x268) = lVar58;
            lVar58 = (long)iStack_210 * 0x101010101010101;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x80) = lVar58;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x88) = lVar58;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x90) = lVar58;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x98) = lVar58;
            pbVar43 = pbVar74 + *(long *)(param_1 + 0x290) + 0xc0;
            pbVar43[0] = 0;
            pbVar43[1] = 0;
            pbVar43[2] = 0;
            pbVar43[3] = 0;
            pbVar43[4] = 0;
            pbVar43[5] = 0;
            pbVar43[6] = 0;
            pbVar43[7] = 0;
            pbVar43 = pbVar74 + *(long *)(param_1 + 0x290) + 200;
            pbVar43[0] = 0;
            pbVar43[1] = 0;
            pbVar43[2] = 0;
            pbVar43[3] = 0;
            pbVar43[4] = 0;
            pbVar43[5] = 0;
            pbVar43[6] = 0;
            pbVar43[7] = 0;
            pbVar43 = pbVar74 + *(long *)(param_1 + 0x290) + 0xd0;
            pbVar43[0] = 0;
            pbVar43[1] = 0;
            pbVar43[2] = 0;
            pbVar43[3] = 0;
            pbVar43[4] = 0;
            pbVar43[5] = 0;
            pbVar43[6] = 0;
            pbVar43[7] = 0;
            pbVar43 = pbVar74 + *(long *)(param_1 + 0x290) + 0xd8;
            pbVar43[0] = 0;
            pbVar43[1] = 0;
            pbVar43[2] = 0;
            pbVar43[3] = 0;
            pbVar43[4] = 0;
            pbVar43[5] = 0;
            pbVar43[6] = 0;
            pbVar43[7] = 0;
            pbVar43 = pbVar74 + *(long *)(param_1 + 0x290) + 0xe0;
            pbVar43[0] = 1;
            pbVar43[1] = 1;
            pbVar43[2] = 1;
            pbVar43[3] = 1;
            pbVar43[4] = 1;
            pbVar43[5] = 1;
            pbVar43[6] = 1;
            pbVar43[7] = 1;
            pbVar43 = pbVar74 + *(long *)(param_1 + 0x290) + 0xe8;
            pbVar43[0] = 1;
            pbVar43[1] = 1;
            pbVar43[2] = 1;
            pbVar43[3] = 1;
            pbVar43[4] = 1;
            pbVar43[5] = 1;
            pbVar43[6] = 1;
            pbVar43[7] = 1;
            pbVar43 = pbVar74 + *(long *)(param_1 + 0x290) + 0xf0;
            pbVar43[0] = 1;
            pbVar43[1] = 1;
            pbVar43[2] = 1;
            pbVar43[3] = 1;
            pbVar43[4] = 1;
            pbVar43[5] = 1;
            pbVar43[6] = 1;
            pbVar43[7] = 1;
            pbVar43 = pbVar74 + *(long *)(param_1 + 0x290) + 0xf8;
            pbVar43[0] = 1;
            pbVar43[1] = 1;
            pbVar43[2] = 1;
            pbVar43[3] = 1;
            pbVar43[4] = 1;
            pbVar43[5] = 1;
            pbVar43[6] = 1;
            pbVar43[7] = 1;
            lVar58 = (ulong)pbStack_1c0[6] * 0x101010101010101;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0xa0) = lVar58;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0xa8) = lVar58;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0xb0) = lVar58;
            *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0xb8) = lVar58;
            if (uVar85 != 0) {
              lVar78 = (ulong)pbStack_1c0[0xc] * 0x101010101010101;
            }
            *(long *)(pbVar74 + param_1 + 0x2000 + 8) = lVar78;
            *(long *)(pbVar74 + param_1 + 0x2000) = lVar78;
            *(long *)(pbVar74 + param_1 + 0x2010 + 8) = lVar78;
            *(long *)(pbVar74 + param_1 + 0x2010) = lVar78;
            func_0x000104c125e4();
            if ((extraout_x8_72 & 1) != 0) {
              pbVar43 = pbVar74 + *(long *)(param_1 + 0x290) + 0x100;
              pbVar43[0] = 0;
              pbVar43[1] = 0;
              pbVar43[2] = 0;
              pbVar43[3] = 0;
              pbVar43[4] = 0;
              pbVar43[5] = 0;
              pbVar43[6] = 0;
              pbVar43[7] = 0;
              func_0x000104c12484();
              *(undefined8 *)(extraout_x8_73 + 0x100) = 0;
              func_0x000104c123fc();
              *(undefined8 *)(extraout_x8_74 + 0x100) = 0;
              func_0x000104c1246c();
              *(undefined8 *)(extraout_x8_75 + 0x100) = 0;
              func_0x000104c1258c();
              *(undefined8 *)(extraout_x8_76 + 0x120) = 0xffffffffffffffff;
              func_0x000104c12484();
              *(undefined8 *)(extraout_x8_77 + 0x120) = extraout_x12_11;
              func_0x000104c123fc();
              *(undefined8 *)(extraout_x8_78 + 0x120) = extraout_x12_12;
              func_0x000104c1246c();
              *(undefined8 *)(extraout_x8_79 + 0x120) = extraout_x12_13;
              func_0x000104c1258c();
              *(undefined8 *)(extraout_x8_80 + 0x140) = extraout_x12_14;
              func_0x000104c12484();
              *(undefined8 *)(extraout_x8_81 + 0x140) = extraout_x12_15;
              func_0x000104c123fc();
              *(undefined8 *)(extraout_x8_82 + 0x140) = extraout_x12_16;
              func_0x000104c1246c();
              *(undefined8 *)(extraout_x8_83 + 0x140) = extraout_x12_17;
              func_0x000104c1258c();
              *(undefined8 *)(extraout_x8_84 + 0x160) = 0x303030303030303;
              func_0x000104c12484();
              *(undefined8 *)(extraout_x8_85 + 0x160) = extraout_x12_18;
              func_0x000104c123fc();
              *(undefined8 *)(extraout_x8_86 + 0x160) = extraout_x12_19;
              func_0x000104c1246c();
              *(undefined8 *)(extraout_x8_87 + 0x160) = extraout_x12_20;
              func_0x000104c1258c();
              *(undefined8 *)(extraout_x8_88 + 0x180) = extraout_x12_21;
              func_0x000104c12484();
              *(undefined8 *)(extraout_x8_89 + 0x180) = extraout_x12_22;
              func_0x000104c123fc();
              *(undefined8 *)(extraout_x8_90 + 0x180) = extraout_x12_23;
              func_0x000104c1246c();
              *(undefined8 *)(extraout_x8_91 + 0x180) = extraout_x12_24;
            }
          }
        }
      }
      func_0x000104c12b60();
      if (extraout_w8_48 != 0) {
        pbVar26 = pbVar74;
        func_0x000104c126b8(*(undefined8 *)(lVar52 + 0xd28),param_1);
      }
      uVar32 = uVar41;
      if (uVar85 != 0) {
        func_0x000104c12abc();
        if (!(bool)uVar18 || (bool)uVar13) {
                    /* WARNING: Could not recover jumptable at 0x000104c0d8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10dd6a8fc)[extraout_x8_x00136] * 4 + 0x104c0d8ec))();
          return;
        }
        uVar13 = 0xf < extraout_w15_02;
        uVar18 = extraout_w15_02 == 0x10;
        if ((bool)uVar18) {
          func_0x000104c12208();
          func_0x000104c12930();
          *(undefined8 *)(extraout_x9_29 + 600) = extraout_x8_x00138;
          *(undefined8 *)(extraout_x9_29 + 0x250) = extraout_x8_x00138;
        }
        else {
          uVar13 = 0x1f < extraout_w15_02;
          uVar18 = extraout_w15_02 == 0x20;
          if ((bool)uVar18) {
            func_0x000104c12208();
            puVar29 = (undefined8 *)(param_1 + 0x250 + uVar83);
            puVar29[1] = extraout_x8_x00137;
            *puVar29 = extraout_x8_x00137;
            lVar58 = param_1 + 0x250 + (uVar83 & 0xffffffff);
            *(undefined8 *)(lVar58 + 0x18) = extraout_x8_x00137;
            *(undefined8 *)(lVar58 + 0x10) = extraout_x8_x00137;
          }
        }
        func_0x000104c12c10();
        if (!(bool)uVar13 || (bool)uVar18) {
                    /* WARNING: Could not recover jumptable at 0x000104c0d98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10dd6a904)[extraout_x8_x00139] * 4 + 0x104c0d990))();
          return;
        }
        uVar13 = uVar9 == 0x10;
        if ((bool)uVar13) {
          func_0x000104c12208();
          func_0x000104c123a4();
          func_0x000104c12be4();
          *(undefined8 *)(extraout_x9_31 + (extraout_x10_35 & 0xffffffff) + 0x238) =
               extraout_x8_x00141;
        }
        else {
          uVar13 = uVar9 == 0x20;
          if ((bool)uVar13) {
            func_0x000104c12208();
            func_0x000104c123a4();
            func_0x000104c12be4();
            *(undefined8 *)(extraout_x9_30 + (extraout_x10_34 & 0xffffffff) + 0x238) =
                 extraout_x8_x00140;
            *(undefined8 *)(*(long *)(param_1 + 0x290) + (extraout_x10_34 & 0xffffffff) + 0x240) =
                 extraout_x8_x00140;
            *(undefined8 *)(*(long *)(param_1 + 0x290) + (extraout_x10_34 & 0xffffffff) + 0x248) =
                 extraout_x8_x00140;
          }
        }
        func_0x000104c12b6c();
        uVar32 = extraout_w12;
        if (extraout_w8_49 != 0) {
          func_0x000104c126b8(*(undefined8 *)(lVar52 + 0xd30),param_1);
          pbVar26 = pbVar74;
          uVar32 = uVar41;
        }
      }
      if (((*(byte *)(*(long *)(lVar52 + 0x18) + 0xe8) & 1) != 0) ||
         (*(char *)(*(long *)(lVar52 + 0x18) + 0x1a3) != '\0')) {
        uStack_f0 = 0x80008000;
        uStack_e8._0_3_ = CONCAT12((char)uVar32,0xff00);
        uStack_e8 = (uint)(uint3)uStack_e8;
        func_0x000104c12274(*(undefined8 *)(lVar52 + 0xcb8));
        pbVar26 = (byte *)&uStack_f0;
        pbVar38 = (byte *)(ulong)uVar34;
        (*extraout_x8_x00142)();
        param_4 = pbVar82;
      }
      goto LAB_104c0f118;
    }
LAB_104c0b090:
    pbStack_1c0[3] = 0;
LAB_104c0b09c:
    pbVar39 = pbVar42;
    lVar78 = *(long *)(lVar52 + 0x18);
    uVar81 = (uint)bVar23;
    pbVar42 = pbVar39;
    if ((*(byte *)(lVar78 + 0xe8) & 1) == 0) {
      uVar25 = (uint)&iStack_1b4;
      pbVar38 = (byte *)0xff00;
      func_0x000104c126c8(param_1 + 0x298,&uStack_f0,aiStack_114 + 1);
      if ((int)uStack_f0 == 0) {
        if (aiStack_e4[1] == 0) {
          uVar32 = (uint)*(byte *)(*(long *)(lVar52 + 8) + 0x188);
          if ((-0x10 << (ulong)(uVar32 & 0x1f)) + *(int *)(param_1 + 0x1c) <
              *(int *)(pbVar43 + 0x3530)) {
            pbStack_1c0[8] = 0;
            pbStack_1c0[9] = 0;
            *(short *)(pbStack_1c0 + 10) =
                 (short)(-0x200 << (ulong)(*(byte *)(*(long *)(lVar52 + 8) + 0x188) & 0x1f)) +
                 -0x800;
          }
          else {
            *(short *)(pbStack_1c0 + 8) = (short)(-0x200 << (ulong)(uVar32 & 0x1f));
            pbStack_1c0[10] = 0;
            pbStack_1c0[0xb] = 0;
          }
        }
        else {
          *(int *)(pbStack_1c0 + 8) = aiStack_e4[1];
        }
      }
      else {
        *(int *)(pbStack_1c0 + 8) = (int)uStack_f0;
      }
      pbVar62 = (byte *)0xffffffff;
      FUN_104c10de4(pbVar43,pbStack_1c0 + 8);
      iVar50 = *(int *)(pbVar43 + 0x3528) * 4;
      iVar24 = *(int *)(pbVar43 + 0x3530) * 4;
      iVar49 = iVar24;
      iVar56 = iVar50;
      if (uVar85 != 0) {
        iVar56 = iVar50 + 4;
        if (iVar51 == 3 || 1 < uVar81) {
          iVar56 = iVar50;
        }
        iVar49 = iVar24 + 4;
        if (iVar51 != 1 || 1 < uVar34) {
          iVar49 = iVar24;
        }
      }
      param_5 = (byte *)((ulong)param_3 & 0xffffffff);
      iVar4 = *(int *)(param_1 + 0x18);
      iVar5 = *(int *)(param_1 + 0x1c);
      iVar51 = iVar4 * 4 + ((int)*(short *)(pbStack_1c0 + 10) >> 3);
      iVar50 = iVar5 * 4 + ((int)*(short *)(pbStack_1c0 + 8) >> 3);
      iVar24 = (iVar4 + uVar81) * 4 + ((int)*(short *)(pbStack_1c0 + 10) >> 3);
      iVar69 = iVar56 - iVar51;
      if (iVar69 == 0 || iVar56 < iVar51) {
        iVar69 = ((uVar81 + *(int *)(pbVar43 + 0x352c)) - 1 & -uVar81) * 4;
        if (iVar69 < iVar24) {
          iVar51 = iVar4 * 4 + (iVar4 + uVar81) * -4 + iVar69;
          iVar24 = iVar69;
        }
      }
      else {
        iVar51 = iVar56;
        iVar24 = iVar69 + iVar24;
      }
      iVar69 = iVar49 - iVar50;
      if (iVar69 == 0 || iVar49 < iVar50) {
        iVar69 = 0;
      }
      iVar69 = (iVar5 + uVar34) * 4 + ((int)*(short *)(pbStack_1c0 + 8) >> 3) + iVar69;
      if (iVar50 <= iVar49) {
        iVar50 = iVar49;
      }
      bVar21 = *(byte *)(*(long *)(lVar52 + 8) + 0x188);
      uVar41 = bVar21 + 4;
      uVar32 = bVar21 + 6;
      iVar6 = (iVar4 >> (uVar41 & 0x1f)) << (ulong)(uVar32 & 0x1f);
      iVar5 = (iVar5 >> (uVar41 & 0x1f)) << (ulong)(uVar32 & 0x1f);
      iVar10 = iVar69 - iVar5;
      if ((iVar10 != 0 && iVar5 <= iVar69) && iVar6 < iVar24) {
        if (iVar50 - iVar49 < iVar10) {
          iVar49 = iVar24 - iVar6;
          if (iVar49 <= iVar51 - iVar56) {
            iVar24 = iVar6;
          }
          iVar10 = 0;
          if (iVar49 <= iVar51 - iVar56) {
            iVar10 = iVar49;
          }
          iVar51 = iVar51 - iVar10;
        }
        else {
          iVar50 = iVar50 - iVar10;
          iVar69 = iVar5;
        }
      }
      iVar56 = iVar5 + (0x40 << (ulong)(bVar21 & 0x1f));
      iVar49 = iVar69;
      if (iVar56 <= iVar69) {
        iVar49 = iVar56;
      }
      uVar13 = iVar49 <= iVar5 || iVar24 == iVar6;
      if ((iVar5 < iVar49 && iVar24 != iVar6) && (iVar49 <= iVar5 || iVar6 <= iVar24))
      goto LAB_104c10084;
      iVar24 = iVar56 - iVar69;
      uVar13 = iVar24 == 0;
      if (iVar69 <= iVar56) {
        iVar24 = 0;
      }
      *(short *)(pbStack_1c0 + 10) = (short)iVar51 * 8 + (short)iVar4 * -0x20;
      *(short *)(pbStack_1c0 + 8) =
           ((short)iVar50 + (short)iVar24) * 8 + (short)*(undefined4 *)(param_1 + 0x1c) * -0x20;
      lVar78 = param_1;
      pbVar26 = pbStack_1c0;
      pbVar43 = pbVar74;
      pbVar38 = pbVar60;
      FUN_104c10e54();
      uVar25 = (uint)pbVar43;
      uVar32 = (uint)pbVar26;
      iVar51 = (int)lVar78;
      func_0x000104c12520();
      if ((bool)uVar13) {
        func_0x000104c12508(*(undefined8 *)(lVar52 + 0xd20));
        param_5 = pbStack_1c0;
        (*extraout_x8_21)();
        pbStack_1c0[0x1b] = 9;
      }
      else {
        func_0x000104c12508(*(undefined8 *)(lVar52 + 0xce0));
        func_0x000104c12a70();
        pbVar62 = param_5;
        if (iVar51 != 0) goto LAB_104c10084;
      }
      aiStack_190[0] = *(int *)(pbStack_1c0 + 8);
      aiStack_190[1] = 0;
      uStack_188 = (uint)CONCAT12(bVar22,0xff00);
      func_0x000104c12274(*(undefined8 *)(lVar52 + 0xcb8));
      pbVar26 = (byte *)aiStack_190;
      pbVar38 = (byte *)(ulong)uVar34;
      (*extraout_x8_22)();
      switch(uVar34) {
      case 1:
        pbVar60[param_1 + 0x1c0] = (&UNK_10dd74d4b)[lVar58];
        pbVar60[param_1 + 0x20] = 0;
        pbVar60[param_1 + 0x2020] = 0;
        pbVar60[param_1 + 0x270] = 0;
        pbVar60[param_1 + 0xa0] = bVar7;
        pbVar60[param_1 + 0xe0] = 0;
        pbVar60[param_1 + 0x100] = 0;
        func_0x000104c125fc();
        *(undefined1 *)(extraout_x9_10 + 0xc0) = extraout_w8_01;
        break;
      case 2:
        *(ushort *)(pbVar60 + param_1 + 0x1c0) =
             CONCAT11((&UNK_10dd74d4b)[lVar58],(&UNK_10dd74d4b)[lVar58]);
        (pbVar60 + param_1 + 0x20)[0] = 0;
        (pbVar60 + param_1 + 0x20)[1] = 0;
        (pbVar60 + param_1 + 0x270)[0] = 0;
        (pbVar60 + param_1 + 0x270)[1] = 0;
        (pbVar60 + param_1 + 0x2020)[0] = 0;
        (pbVar60 + param_1 + 0x2020)[1] = 0;
        *(short *)(pbVar60 + param_1 + 0xa0) = sVar8;
        (pbVar60 + param_1 + 0xe0)[0] = 0;
        (pbVar60 + param_1 + 0xe0)[1] = 0;
        (pbVar60 + param_1 + 0x100)[0] = 0;
        (pbVar60 + param_1 + 0x100)[1] = 0;
        func_0x000104c125fc();
        *(ushort *)(extraout_x9_14 + 0xc0) = (ushort)extraout_w8_30 | (ushort)(extraout_w8_30 << 8);
        break;
      case 3:
      case 5:
      case 6:
      case 7:
        break;
      case 4:
        *(uint *)(pbVar60 + param_1 + 0x1c0) = (uint)(byte)(&UNK_10dd74d4b)[lVar58] * 0x1010101;
        pbVar43 = pbVar60 + param_1 + 0x20;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43 = pbVar60 + param_1 + 0x270;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43 = pbVar60 + param_1 + 0x2020;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        *(int *)(pbVar60 + param_1 + 0xa0) = iStack_210 * 0x1010101;
        pbVar43 = pbVar60 + param_1 + 0xe0;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43 = pbVar60 + param_1 + 0x100;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        func_0x000104c125fc();
        *(int *)(extraout_x10_06 + 0xc0) = extraout_w8_31 * extraout_w9_14;
        break;
      case 8:
        func_0x000104c12b84();
        func_0x000104c123d0();
        *(undefined8 *)(pbVar60 + param_1 + 0x1c0) = extraout_x8_25;
        pbVar43 = pbVar60 + param_1 + 0x20;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43[4] = 0;
        pbVar43[5] = 0;
        pbVar43[6] = 0;
        pbVar43[7] = 0;
        pbVar43 = pbVar60 + param_1 + 0x270;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43[4] = 0;
        pbVar43[5] = 0;
        pbVar43[6] = 0;
        pbVar43[7] = 0;
        pbVar43 = pbVar60 + param_1 + 0x2020;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43[4] = 0;
        pbVar43[5] = 0;
        pbVar43[6] = 0;
        pbVar43[7] = 0;
        func_0x000104c125f0();
        *(long *)(extraout_x10_04 + 0xa0) = extraout_x8_26 * extraout_x9_13;
        *(undefined8 *)(extraout_x10_04 + 0xe0) = 0;
        *(undefined8 *)(extraout_x10_04 + 0x100) = 0;
        func_0x000104c128a8();
        *(undefined8 *)(extraout_x10_05 + 0xc0) = extraout_x8_27;
        break;
      default:
        if (uVar34 == 0x10) {
          func_0x000104c12b84();
          func_0x000104c123d0();
          *(undefined8 *)(pbVar60 + param_1 + 0x1c8) = extraout_x8_28;
          *(undefined8 *)(pbVar60 + param_1 + 0x1c0) = extraout_x8_28;
          pbVar43 = pbVar60 + param_1 + 0x20;
          pbVar62 = pbVar60 + param_1 + 0x28;
          pbVar62[0] = 0;
          pbVar62[1] = 0;
          pbVar62[2] = 0;
          pbVar62[3] = 0;
          pbVar62[4] = 0;
          pbVar62[5] = 0;
          pbVar62[6] = 0;
          pbVar62[7] = 0;
          pbVar43[0] = 0;
          pbVar43[1] = 0;
          pbVar43[2] = 0;
          pbVar43[3] = 0;
          pbVar43[4] = 0;
          pbVar43[5] = 0;
          pbVar43[6] = 0;
          pbVar43[7] = 0;
          pbVar43 = pbVar60 + param_1 + 0x270;
          pbVar62 = pbVar60 + param_1 + 0x278;
          pbVar62[0] = 0;
          pbVar62[1] = 0;
          pbVar62[2] = 0;
          pbVar62[3] = 0;
          pbVar62[4] = 0;
          pbVar62[5] = 0;
          pbVar62[6] = 0;
          pbVar62[7] = 0;
          pbVar43[0] = 0;
          pbVar43[1] = 0;
          pbVar43[2] = 0;
          pbVar43[3] = 0;
          pbVar43[4] = 0;
          pbVar43[5] = 0;
          pbVar43[6] = 0;
          pbVar43[7] = 0;
          pbVar43 = pbVar60 + param_1 + 0x2020;
          pbVar62 = pbVar60 + param_1 + 0x2028;
          pbVar62[0] = 0;
          pbVar62[1] = 0;
          pbVar62[2] = 0;
          pbVar62[3] = 0;
          pbVar62[4] = 0;
          pbVar62[5] = 0;
          pbVar62[6] = 0;
          pbVar62[7] = 0;
          pbVar43[0] = 0;
          pbVar43[1] = 0;
          pbVar43[2] = 0;
          pbVar43[3] = 0;
          pbVar43[4] = 0;
          pbVar43[5] = 0;
          pbVar43[6] = 0;
          pbVar43[7] = 0;
          *(long *)(pbVar60 + param_1 + 0xa8) = iStack_210 * extraout_x9_15;
          *(long *)(pbVar60 + param_1 + 0xa0) = iStack_210 * extraout_x9_15;
          pbVar43 = pbVar60 + param_1 + 0xe0;
          pbVar62 = pbVar60 + param_1 + 0xe8;
          pbVar62[0] = 0;
          pbVar62[1] = 0;
          pbVar62[2] = 0;
          pbVar62[3] = 0;
          pbVar62[4] = 0;
          pbVar62[5] = 0;
          pbVar62[6] = 0;
          pbVar62[7] = 0;
          pbVar43[0] = 0;
          pbVar43[1] = 0;
          pbVar43[2] = 0;
          pbVar43[3] = 0;
          pbVar43[4] = 0;
          pbVar43[5] = 0;
          pbVar43[6] = 0;
          pbVar43[7] = 0;
          pbVar43 = pbVar60 + param_1 + 0x100;
          pbVar62 = pbVar60 + param_1 + 0x108;
          pbVar62[0] = 0;
          pbVar62[1] = 0;
          pbVar62[2] = 0;
          pbVar62[3] = 0;
          pbVar62[4] = 0;
          pbVar62[5] = 0;
          pbVar62[6] = 0;
          pbVar62[7] = 0;
          pbVar43[0] = 0;
          pbVar43[1] = 0;
          pbVar43[2] = 0;
          pbVar43[3] = 0;
          pbVar43[4] = 0;
          pbVar43[5] = 0;
          pbVar43[6] = 0;
          pbVar43[7] = 0;
          bVar22 = pbStack_1c0[6];
          *(ulong *)(pbVar60 + param_1 + 200) = (ulong)bVar22 * extraout_x9_15;
          *(ulong *)(pbVar60 + param_1 + 0xc0) = (ulong)bVar22 * extraout_x9_15;
        }
        else if (uVar34 == 0x20) {
          func_0x000104c12b84();
          func_0x000104c123d0();
          *(undefined8 *)(pbVar60 + param_1 + 0x1c0 + 8) = extraout_x8_23;
          *(undefined8 *)(pbVar60 + param_1 + 0x1c0) = extraout_x8_23;
          *(undefined8 *)(pbVar60 + param_1 + 0x1d0 + 8) = extraout_x8_23;
          *(undefined8 *)(pbVar60 + param_1 + 0x1d0) = extraout_x8_23;
          func_0x000104c1272c();
          func_0x000104c1272c();
          func_0x000104c1272c();
          lVar78 = iStack_210 * extraout_x9_11;
          *(long *)(pbVar60 + param_1 + 0xa0 + 8) = lVar78;
          *(long *)(pbVar60 + param_1 + 0xa0) = lVar78;
          plVar75 = (long *)(param_1 + 0xa0 + extraout_x8_24);
          plVar75[1] = lVar78;
          *plVar75 = lVar78;
          func_0x000104c1272c();
          func_0x000104c1272c();
          func_0x000104c1272c((ulong)pbStack_1c0[6] * extraout_x9_12);
        }
      }
      uVar32 = uVar81 - 1;
      uVar18 = 6 < uVar32;
      uVar13 = uVar32 == 7;
      switch(uVar32) {
      case 0:
        func_0x000104c129f0();
        func_0x000104c12360();
        *(undefined1 *)(extraout_x9_16 + 0x1a0) = extraout_w8_02;
        pbVar74[*(long *)(param_1 + 0x290)] = 0;
        func_0x000104c1236c();
        func_0x000104c12af4();
        func_0x000104c1236c();
        *(byte *)(extraout_x8_29 + 0x80) = bVar7;
        func_0x000104c1236c();
        *(undefined1 *)(extraout_x8_30 + 0xc0) = 0;
        func_0x000104c1236c();
        *(undefined1 *)(extraout_x8_31 + 0xe0) = 0;
        func_0x000104c125fc();
        func_0x000104c12360();
        *(undefined1 *)(extraout_x9_17 + 0xa0) = extraout_w8_03;
        break;
      case 1:
        func_0x000104c129f0();
        func_0x000104c122d0();
        *(undefined2 *)(extraout_x9_22 + 0x1a0) = extraout_w8_14;
        lVar58 = *(long *)(param_1 + 0x290);
        (pbVar74 + lVar58)[0] = 0;
        (pbVar74 + lVar58)[1] = 0;
        func_0x000104c1236c();
        func_0x000104c12ac8();
        func_0x000104c1236c();
        *(short *)(extraout_x8_40 + 0x80) = sVar8;
        func_0x000104c1236c();
        *(undefined2 *)(extraout_x8_41 + 0xc0) = 0;
        func_0x000104c1236c();
        *(undefined2 *)(extraout_x8_42 + 0xe0) = 0;
        func_0x000104c125fc();
        func_0x000104c122d0();
        *(undefined2 *)(extraout_x9_23 + 0xa0) = extraout_w8_15;
        break;
      case 2:
      case 4:
      case 5:
      case 6:
        break;
      case 3:
        func_0x000104c129f0();
        func_0x000104c123dc(extraout_w8_32 * 0x1010101);
        *(undefined4 *)(extraout_x10_14 + 0x1a0) = extraout_w8_33;
        pbVar43 = pbVar74 + *(long *)(param_1 + 0x290);
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        func_0x000104c1236c();
        *(undefined4 *)(extraout_x8_43 + 0x250) = 0;
        pbVar74 = pbVar74 + param_1 + 0x2000;
        pbVar74[0] = 0;
        pbVar74[1] = 0;
        pbVar74[2] = 0;
        pbVar74[3] = 0;
        func_0x000104c123dc(iStack_210 * extraout_w9_15);
        *(undefined4 *)(extraout_x10_15 + 0x80) = extraout_w8_34;
        func_0x000104c1236c();
        *(undefined4 *)(extraout_x8_44 + 0xc0) = 0;
        func_0x000104c1236c();
        *(undefined4 *)(extraout_x8_45 + 0xe0) = 0;
        func_0x000104c125fc();
        func_0x000104c12360(extraout_w8_35 * extraout_w9_16);
        *(undefined4 *)(extraout_x9_24 + 0xa0) = extraout_w8_36;
        break;
      case 7:
        func_0x000104c12290((&UNK_10dd74d4a)[lVar58]);
        *(undefined8 *)(extraout_x10_12 + 0x1a0) = extraout_x8_34;
        pbVar43 = pbVar74 + *(long *)(param_1 + 0x290);
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43[4] = 0;
        pbVar43[5] = 0;
        pbVar43[6] = 0;
        pbVar43[7] = 0;
        func_0x000104c1236c();
        *(undefined8 *)(extraout_x8_35 + 0x250) = 0;
        pbVar74 = pbVar74 + param_1 + 0x2000;
        pbVar74[0] = 0;
        pbVar74[1] = 0;
        pbVar74[2] = 0;
        pbVar74[3] = 0;
        pbVar74[4] = 0;
        pbVar74[5] = 0;
        pbVar74[6] = 0;
        pbVar74[7] = 0;
        func_0x000104c125f0();
        func_0x000104c12290();
        *(undefined8 *)(extraout_x10_13 + 0x80) = extraout_x8_36;
        func_0x000104c1236c();
        *(undefined8 *)(extraout_x8_37 + 0xc0) = 0;
        func_0x000104c1236c();
        *(undefined8 *)(extraout_x8_38 + 0xe0) = 0;
        func_0x000104c128a8();
        func_0x000104c12360();
        uVar59 = extraout_x8_39;
        lVar78 = extraout_x9_21;
        goto code_r0x000104c0c2d8;
      default:
        uVar18 = 0xf < uVar81;
        uVar13 = uVar81 == 0x10;
        if ((bool)uVar13) {
          func_0x000104c12290((&UNK_10dd74d4a)[lVar58]);
          *(undefined8 *)(extraout_x10_16 + 0x1a0) = extraout_x8_46;
          *(undefined8 *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1a8) = extraout_x8_46;
          pbVar43 = pbVar74 + *(long *)(param_1 + 0x290);
          pbVar43[0] = 0;
          pbVar43[1] = 0;
          pbVar43[2] = 0;
          pbVar43[3] = 0;
          pbVar43[4] = 0;
          pbVar43[5] = 0;
          pbVar43[6] = 0;
          pbVar43[7] = 0;
          pbVar43 = pbVar74 + *(long *)(param_1 + 0x290) + 8;
          pbVar43[0] = 0;
          pbVar43[1] = 0;
          pbVar43[2] = 0;
          pbVar43[3] = 0;
          pbVar43[4] = 0;
          pbVar43[5] = 0;
          pbVar43[6] = 0;
          pbVar43[7] = 0;
          func_0x000104c1236c();
          *(undefined8 *)(extraout_x8_47 + 0x250) = 0;
          func_0x000104c1246c();
          *(undefined8 *)(extraout_x8_48 + 0x250) = 0;
          pbVar43 = pbVar74 + param_1 + 0x2008;
          pbVar43[0] = 0;
          pbVar43[1] = 0;
          pbVar43[2] = 0;
          pbVar43[3] = 0;
          pbVar43[4] = 0;
          pbVar43[5] = 0;
          pbVar43[6] = 0;
          pbVar43[7] = 0;
          pbVar74 = pbVar74 + param_1 + 0x2000;
          pbVar74[0] = 0;
          pbVar74[1] = 0;
          pbVar74[2] = 0;
          pbVar74[3] = 0;
          pbVar74[4] = 0;
          pbVar74[5] = 0;
          pbVar74[6] = 0;
          pbVar74[7] = 0;
          func_0x000104c125f0();
          func_0x000104c12290();
          *(undefined8 *)(extraout_x10_17 + 0x80) = extraout_x8_49;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x11_05 + 0x80) = extraout_x8_49;
          func_0x000104c1236c();
          *(undefined8 *)(extraout_x8_50 + 0xc0) = 0;
          func_0x000104c1246c();
          *(undefined8 *)(extraout_x8_51 + 0xc0) = 0;
          func_0x000104c1236c();
          *(undefined8 *)(extraout_x8_52 + 0xe0) = 0;
          func_0x000104c1246c();
          *(undefined8 *)(extraout_x8_53 + 0xe0) = 0;
          func_0x000104c128a8();
          func_0x000104c12360();
          uVar59 = extraout_x8_54;
          lVar58 = extraout_x9_25;
          lVar78 = extraout_x11_06;
        }
        else {
          uVar18 = 0x1f < uVar81;
          uVar13 = uVar81 == 0x20;
          if (!(bool)uVar13) break;
          func_0x000104c12360(0x101010101010101);
          *(undefined8 *)(extraout_x9_18 + 0x1a0) = extraout_x12_00;
          func_0x000104c12bfc();
          *(undefined8 *)(extraout_x10_07 + 0x1a0) = extraout_x12_01;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x11 + 0x10 + 0x1a0) =
               extraout_x12_01;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x11 + 0x18 + 0x1a0) =
               extraout_x12_01;
          pbVar43 = pbVar74 + *(long *)(param_1 + 0x290);
          pbVar43[0] = 0;
          pbVar43[1] = 0;
          pbVar43[2] = 0;
          pbVar43[3] = 0;
          pbVar43[4] = 0;
          pbVar43[5] = 0;
          pbVar43[6] = 0;
          pbVar43[7] = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x9_19) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x11 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x11 + 0x18) = 0;
          func_0x000104c12984();
          *(undefined8 *)(extraout_x12_02 + 0x250) = 0;
          func_0x000104c126d0();
          *(undefined8 *)(extraout_x12_03 + 0x250) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x10_08 + 0x250) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x11_00 + 0x250) = 0;
          pbVar74 = pbVar74 + param_1 + 0x2000;
          pbVar74[8] = 0;
          pbVar74[9] = 0;
          pbVar74[10] = 0;
          pbVar74[0xb] = 0;
          pbVar74[0xc] = 0;
          pbVar74[0xd] = 0;
          pbVar74[0xe] = 0;
          pbVar74[0xf] = 0;
          pbVar74[0] = 0;
          pbVar74[1] = 0;
          pbVar74[2] = 0;
          pbVar74[3] = 0;
          pbVar74[4] = 0;
          pbVar74[5] = 0;
          pbVar74[6] = 0;
          pbVar74[7] = 0;
          puVar29 = (undefined8 *)(param_1 + 0x2000 + extraout_x10_08);
          puVar29[1] = 0;
          *puVar29 = 0;
          func_0x000104c12ae8();
          func_0x000104c12ae8();
          func_0x000104c12ae8();
          *(undefined8 *)(extraout_x13_02 + extraout_x11_01 + 0x80) = extraout_x12_04;
          func_0x000104c12984();
          *(undefined8 *)(extraout_x12_05 + 0xc0) = 0;
          func_0x000104c126d0();
          *(undefined8 *)(extraout_x12_06 + 0xc0) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x10_09 + 0xc0) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x11_02 + 0xc0) = 0;
          func_0x000104c12984();
          *(undefined8 *)(extraout_x12_07 + 0xe0) = 0;
          func_0x000104c126d0();
          *(undefined8 *)(extraout_x12_08 + 0xe0) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x10_10 + 0xe0) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x11_03 + 0xe0) = 0;
          func_0x000104c12984((ulong)pbStack_1c0[6] * extraout_x8_32);
          *(undefined8 *)(extraout_x12_09 + 0xa0) = extraout_x8_33;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x9_20 + 0xa0) = extraout_x8_33;
          lVar58 = *(long *)(param_1 + 0x290) + extraout_x10_11;
          uVar59 = extraout_x8_33;
          lVar78 = extraout_x11_04;
        }
        *(undefined8 *)(lVar58 + 0xa0) = uVar59;
        lVar78 = *(long *)(param_1 + 0x290) + lVar78;
code_r0x000104c0c2d8:
        *(undefined8 *)(lVar78 + 0xa0) = uVar59;
      }
      param_4 = pbVar82;
      if (uVar85 != 0) {
        func_0x000104c12abc();
        if (!(bool)uVar18 || (bool)uVar13) {
                    /* WARNING: Could not recover jumptable at 0x000104c0c2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(ushort *)(&UNK_10dd6a8bc + extraout_x8_55 * 2) * 4 + 0x104c0c300))();
          return;
        }
        uVar13 = 0xf < extraout_w15_00;
        uVar18 = extraout_w15_00 == 0x10;
        if ((bool)uVar18) {
          func_0x000104c124e4();
          *(undefined8 *)(extraout_x8_x00143 + 600) = 0;
          *(undefined8 *)(extraout_x8_x00143 + 0x250) = 0;
        }
        else {
          uVar13 = 0x1f < extraout_w15_00;
          uVar18 = extraout_w15_00 == 0x20;
          if ((bool)uVar18) {
            func_0x000104c1269c();
          }
        }
        func_0x000104c12c10();
        if (!(bool)uVar13 || (bool)uVar18) {
                    /* WARNING: Could not recover jumptable at 0x000104c0dac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(ushort *)(&UNK_10dd6a8cc + extraout_x8_x00144 * 2) * 4 + 0x104c0f118))
                    ();
          return;
        }
        goto LAB_104c0f520;
      }
      goto LAB_104c0f118;
    }
    if (*pbVar67 == 0) {
      uVar31 = (uint)pbVar74;
      uVar33 = (uint)pbVar60;
      if ((pbVar62 == (byte *)0x0) ||
         (((pbVar62[6] == 0xff && (pbVar62[8] == 0)) && (pbVar62[7] == 0)))) {
        uVar3 = uVar81;
        if (uVar34 <= uVar81) {
          uVar3 = uVar34;
        }
        if ((*(char *)(lVar78 + 0x378) != '\0') && (1 < uVar3)) {
          if ((int)uVar30 < (int)uVar32) {
            lVar78 = *(long *)(param_1 + 0x290);
            if (iVar56 < (int)uVar72) {
              if (pbVar74[lVar78 + 0x100] == 0) {
                if (pbVar60[param_1 + 0x120] != 0) {
                  bVar47 = pbVar74[lVar78 + 0x120];
                  goto LAB_104c0dbf4;
                }
                func_0x000104c12908();
                uVar83 = (ulong)(extraout_w9_20 ^ '\x03' < (char)pbVar74[extraout_x8_x00151 + 0x120]
                                );
                pbVar42 = pbVar39;
                pbVar66 = extraout_x15_03;
              }
              else if (pbVar60[param_1 + 0x120] == 0) {
                bVar47 = pbVar60[param_1 + 0x140];
LAB_104c0dbf4:
                uVar83 = 2;
                if (3 < bVar47) {
                  uVar83 = 3;
                }
              }
              else {
                uVar83 = 4;
              }
            }
            else {
              if (pbVar74[lVar78 + 0x100] == 0) {
                bVar47 = pbVar74[lVar78 + 0x120];
                goto LAB_104c0dbe0;
              }
LAB_104c0dbb8:
              uVar83 = 3;
            }
          }
          else if (iVar56 < (int)uVar72) {
            if (pbVar60[param_1 + 0x120] != 0) goto LAB_104c0dbb8;
            bVar47 = pbVar60[param_1 + 0x140];
LAB_104c0dbe0:
            uVar83 = (ulong)('\x03' < (char)bVar47);
          }
          else {
            uVar83 = 1;
          }
          pbVar26 = pbVar66 + 0x3500;
          func_0x000104c12358(pbVar66 + uVar83 * 4);
          bVar19 = (int)pbVar26 == 0;
          if (*pbVar67 != 0) {
            lVar78 = *(long *)(lVar52 + 0x18);
            pbVar39 = (byte *)((ulong)param_3 & 0xffffffff);
            goto LAB_104c0b0f4;
          }
          func_0x000104c12b14();
          if ((int)pbVar26 == 0) goto LAB_104c0dcd8;
          lVar53 = *(long *)(param_1 + 0x290);
          lVar78 = param_1 + 0x20;
          pbVar26 = pbVar43;
          if ((iVar56 < (int)uVar72 && uVar32 != uVar30) &&
              ((int)uVar72 <= iVar56 || (int)uVar30 <= (int)uVar32)) {
            bVar47 = pbVar74[lVar53 + 0xe0];
            if ((bVar47 != 0) && (pbVar60[param_1 + 0x100] != 0)) goto LAB_104c0ddb4;
            if (bVar47 == 0 && pbVar60[param_1 + 0x100] == 0) {
              if (pbVar74[lVar53 + 0x100] == 0 && pbVar60[param_1 + 0x120] == 0) {
                uVar65 = (uint)('\x03' < (char)pbVar74[lVar53 + 0x120]);
                uVar25 = (uint)((char)pbVar60[param_1 + 0x140] < '\x04');
                pbVar26 = extraout_x15_04;
                goto LAB_104c107a0;
              }
              if ((pbVar74[lVar53 + 0x100] != 0) && (pbVar60[param_1 + 0x120] != 0)) {
                func_0x000104c12908();
                uVar25 = (uint)(extraout_w8_69 < 4 != '\x03' < (char)pbVar60[param_1 + 0x160]);
                if ((((extraout_w11 ^ extraout_w9_35) & 1) == 0) && (uVar25 == 0)) {
                  lVar53 = 0;
                  pbVar26 = extraout_x15_08;
                }
                else if (((extraout_w11 ^ extraout_w9_35) & uVar25) == 1) {
                  lVar53 = 3;
                  if ((extraout_w10_06 == 4) != (extraout_w8_69 != 4)) {
                    lVar53 = 4;
                  }
                }
                else {
                  lVar53 = 2;
                }
                goto LAB_104c0ddb8;
              }
              func_0x000104c12908();
              lVar53 = 3;
              if (3 < extraout_w10_07 != extraout_w8_70 < 4) {
                lVar53 = 4;
              }
              bVar19 = extraout_w11_00 == extraout_w9_36;
              pbVar26 = extraout_x15_09;
            }
            else {
              lVar68 = lVar78;
              if (bVar47 == 0) {
                uVar33 = uVar31;
                lVar68 = lVar53;
              }
              if (*(char *)(lVar68 + (ulong)uVar33 + 0x100) == '\0') goto LAB_104c0ddb4;
              func_0x000104c1280c();
              pbVar26 = extraout_x15_07;
              uVar25 = extraout_w8_63;
              uVar65 = extraout_w9_32;
LAB_104c107a0:
              bVar19 = uVar65 == uVar25;
              lVar53 = 3;
            }
            if (bVar19) {
              lVar53 = 1;
            }
          }
          else {
            if (bVar20 || uVar44 != 0) {
              lVar68 = lVar78;
              if ((int)uVar72 <= iVar56) {
                uVar33 = uVar31;
                lVar68 = lVar53;
              }
              lVar53 = lVar68 + (ulong)uVar33;
              if ((*(char *)(lVar53 + 0xe0) == '\0') && (*(char *)(lVar53 + 0x100) != '\0')) {
                func_0x000104c1280c(lVar68 + (ulong)uVar33);
                lVar53 = 4;
                pbVar26 = extraout_x15_05;
                if (extraout_w9_21 == extraout_w8_50) {
                  lVar53 = 0;
                }
                goto LAB_104c0ddb8;
              }
            }
LAB_104c0ddb4:
            lVar53 = 2;
            pbVar26 = extraout_x15_04;
          }
LAB_104c0ddb8:
          pbVar62 = pbVar26 + 0x3500;
          func_0x000100daf99c(pbVar62,pbVar26 + lVar53 * 4 + 0x2f04);
          uVar83 = *(ulong *)(param_1 + 0x290);
          if ((int)pbVar62 == 0) {
            FUN_104c11684(uVar83,lVar78,pbVar60,pbVar74,bVar20,uVar44);
            iVar51 = (int)pbVar26 + 0x3500;
            func_0x000104c12358(pbVar26 + (uVar83 & 0xffffffff) * 4);
            if (iVar51 == 0) {
              lVar53 = *(long *)(param_1 + 0x290);
              uStack_e8 = 0;
              uStack_f0 = 0;
              if (((int)uVar30 < (int)uVar32) && (pbVar74[lVar53 + 0xe0] == 0)) {
                uVar32 = (int)(char)pbVar74[lVar53 + 0x120] - 1;
                if (uVar32 < 3) {
                  *(int *)((long)&uStack_f0 + (ulong)uVar32 * 4) =
                       *(int *)((long)&uStack_f0 + (ulong)uVar32 * 4) + 1;
                }
                if ((pbVar74[lVar53 + 0x100] != 0) && ((int)(char)pbVar74[lVar53 + 0x140] - 1U < 3))
                {
                  func_0x000104c12324();
                }
              }
              if ((iVar56 < (int)uVar72) &&
                 (func_0x000104c129cc(), *(char *)(extraout_x8_x00206 + 0x100) == '\0')) {
                if ((int)*(char *)(extraout_x8_x00206 + 0x140) - 1U < 3) {
                  func_0x000104c12324();
                }
                func_0x000104c129cc();
                if ((*(char *)(extraout_x8_x00207 + 0x120) != '\0') &&
                   ((int)*(char *)(extraout_x8_x00207 + 0x160) - 1U < 3)) {
                  func_0x000104c12324();
                }
              }
              lVar53 = 0;
              if ((int)(uStack_f0._4_4_ + uStack_e8) <= (int)uStack_f0) {
                lVar53 = 2;
              }
              if ((int)uStack_f0 == uStack_f0._4_4_ + uStack_e8) {
                lVar53 = 1;
              }
              pbStack_1c0[0x18] = 0;
              iVar51 = iVar50 + 0x3500;
              func_0x000104c12358(pbVar43 + lVar53 * 4);
              pbStack_1c0[0x19] = (byte)(iVar51 + 1U);
              pbVar26 = pbVar43;
              if ((iVar51 + 1U & 0xff) == 2) {
                uVar83 = *(ulong *)(param_1 + 0x290);
                func_0x000104c11374(uVar83,lVar78,pbVar60,pbVar74,bVar20,uVar44);
                bVar47 = bVar21;
                func_0x000104c12358(pbVar43 + (uVar83 & 0xffffffff) * 4);
                pbStack_1c0[0x19] = pbStack_1c0[0x19] + bVar47;
              }
            }
            else {
              pbStack_1c0[0x18] = 4;
              pbStack_1c0[0x19] = 6;
              pbVar26 = pbVar43;
            }
          }
          else {
            func_0x000104c112a8(uVar83,lVar78,pbVar60,pbVar74,bVar20,uVar44);
            func_0x000104c12250(pbVar26 + (uVar83 & 0xffffffff) * 4);
            func_0x000104c127f0(uVar83);
            if (extraout_w8_53 == 0) {
              func_0x000104c1144c();
              func_0x000104c12250(pbVar26 + (uVar83 & 0xffffffff) * 4);
            }
            else {
              func_0x000104c11374();
              iVar51 = (int)uVar83;
              func_0x000104c12250(pbVar26 + (uVar83 & 0xffffffff) * 4);
              uVar83 = (ulong)(iVar51 + 2);
            }
            pbStack_1c0[0x18] = (byte)uVar83;
            func_0x000104c127f0();
            func_0x000104c1150c();
            iVar51 = (int)uVar83;
            func_0x000104c12250(pbVar26 + (uVar83 & 0xffffffff) * 4);
            if (iVar51 == 0) {
              uVar83 = *(ulong *)(param_1 + 0x290);
              func_0x000104c115d0(uVar83,lVar78,pbVar60,pbVar74,bVar20,uVar44);
              cVar15 = (char)uVar83;
              func_0x000104c12250(pbVar26 + (uVar83 & 0xffffffff) * 4);
              bVar47 = cVar15 + 4;
            }
            else {
              bVar47 = 6;
            }
            pbStack_1c0[0x19] = bVar47;
          }
          pbVar39 = (byte *)((ulong)param_3 & 0xffffffff);
          func_0x000104c12918();
          func_0x000104c126c8();
          pbVar62 = pbVar26 + 0x3500;
          func_0x000104c126dc(pbVar62,pbVar26 + (long)aiStack_114[1] * 0x10 + 0x2cc0);
          pbStack_1c0[0x15] = (byte)pbVar62;
          uVar32 = (uint)pbVar62 & 0xff;
          lVar78 = (ulong)uVar32 * 2;
          pbStack_1c0[0x17] = 0;
          if (uVar32 == 7) {
            cVar14 = SBORROW4(aiStack_190[0],2);
            cVar15 = aiStack_190[0] + -2 < 0;
            if (1 < aiStack_190[0]) {
              func_0x000104c12690(uStack_e8);
              uVar59 = 2;
              if (cVar15 == cVar14) {
                uVar59 = 0;
              }
              uVar86 = extraout_x9_78;
              if (extraout_w8_64 < 0x280) {
                uVar86 = uVar59;
              }
              func_0x000104c122e0(uVar86);
              func_0x000104c12454();
              bVar20 = extraout_w9_33 != 1;
              cVar14 = !bVar20 && SBORROW4(aiStack_190[0],3);
              cVar15 = bVar20 || aiStack_190[0] + -3 < 0;
              uStack_c8 = aiStack_e4[3];
              if (!bVar20 && 2 < aiStack_190[0]) {
LAB_104c0ff18:
                func_0x000104c12690(uStack_c8);
                uVar59 = 2;
                if (cVar15 == cVar14) {
                  uVar59 = 0;
                }
                uVar86 = extraout_x9_80;
                if (extraout_w8_66 < 0x280) {
                  uVar86 = uVar59;
                }
                func_0x000104c122e0(uVar86);
                func_0x000104c12828();
                *(undefined1 *)(extraout_x9_81 + 0x17) = extraout_w8_12;
              }
            }
          }
          else if (((&UNK_10dd74e9e)[lVar78] == 1) || ((&UNK_10dd74e9f)[lVar78] == '\x01')) {
            pbStack_1c0[0x17] = 1;
            cVar14 = SBORROW4(aiStack_190[0],3);
            cVar15 = aiStack_190[0] + -3 < 0;
            if (2 < aiStack_190[0]) {
              func_0x000104c12690(aiStack_e4[3]);
              uVar59 = 2;
              if (cVar15 == cVar14) {
                uVar59 = 0;
              }
              uVar86 = extraout_x9_79;
              if (extraout_w8_65 < 0x280) {
                uVar86 = uVar59;
              }
              func_0x000104c122e0(uVar86);
              func_0x000104c12454();
              bVar20 = extraout_w9_34 != 2;
              cVar14 = !bVar20 && SBORROW4(aiStack_190[0],4);
              cVar15 = bVar20 || aiStack_190[0] + -4 < 0;
              if (!bVar20 && 3 < aiStack_190[0]) goto LAB_104c0ff18;
            }
          }
          bVar20 = pbStack_1c0[0x15] != 6;
          bVar47 = (&UNK_10dd74e9e)[lVar78];
          if (bVar47 < 2) {
            func_0x000104c12b90();
            *(undefined4 *)(pbStack_1c0 + 8) = extraout_w8_68;
            FUN_104c11268(*(undefined8 *)(lVar52 + 0x18),pbStack_1c0 + 8);
          }
          else if (bVar47 == 2) {
            pbVar39 = *(byte **)(lVar52 + 0x18);
            bVar20 = pbStack_1c0[0x15] != 6 ||
                     *(int *)(pbVar39 + (long)(int)(char)pbStack_1c0[0x18] * 0x24 + 0x380) == 1;
            pbVar26 = pbVar39 + (long)(int)(char)pbStack_1c0[0x18] * 0x24 + 0x380;
            FUN_104c11738(pbVar26,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                          pbVar82,uVar34);
            *(int *)(pbStack_1c0 + 8) = (int)pbVar26;
          }
          else if (bVar47 == 3) {
            func_0x000104c12b90();
            *(undefined4 *)(pbStack_1c0 + 8) = extraout_w8_67;
            func_0x000104c125a8();
            FUN_104c10de4(pbVar43,extraout_x10_82 + 8);
          }
          bVar47 = (&UNK_10dd74e9f)[lVar78];
          if (bVar47 < 2) {
            func_0x000104c12770();
            FUN_104c11268(*(undefined8 *)(lVar52 + 0x18));
          }
          else if (bVar47 == 2) {
            pbVar39 = *(byte **)(lVar52 + 0x18);
            if (*(int *)(pbVar39 + (long)(int)(char)pbStack_1c0[0x19] * 0x24 + 0x380) == 1) {
              bVar20 = true;
            }
            pbVar26 = pbVar39 + (long)(int)(char)pbStack_1c0[0x19] * 0x24 + 0x380;
            FUN_104c11738(pbVar26,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                          pbVar82,uVar34);
            *(int *)(pbStack_1c0 + 0xc) = (int)pbVar26;
          }
          else if (bVar47 == 3) {
            func_0x000104c12770();
            func_0x000104c125a8();
            FUN_104c10de4(pbVar43);
          }
          lVar78 = *(long *)(lVar52 + 8);
          if (*(char *)(lVar78 + 0x18c) == '\0') {
LAB_104c102c4:
            if (*(char *)(lVar78 + 400) == '\0') {
              bVar21 = 2;
            }
            else {
              bVar47 = *(byte *)(lVar78 + 0x19c);
              uVar32 = (uint)bVar47;
              if (bVar47 == 0) {
                uVar25 = 0;
              }
              else {
                uVar25 = 1 << (ulong)(bVar47 - 1 & 0x1f);
                uVar65 = (uint)*(byte *)(*(long *)(lVar52 + 0x840) + 0xf8);
                uVar32 = *(byte *)(*(long *)(lVar52 + 0x20 +
                                             (long)(int)(char)pbStack_1c0[0x18] * 0x128 + 8) + 0xf8)
                         - uVar65;
                uVar32 = (uVar32 & uVar25 - 1) - (uVar32 & uVar25);
                uVar65 = uVar65 - *(byte *)(*(long *)(lVar52 + 0x20 +
                                                      (long)(int)(char)pbStack_1c0[0x19] * 0x128 + 8
                                                     ) + 0xf8);
                uVar25 = (uVar65 & uVar25 - 1) - (uVar65 & uVar25);
              }
              if (pbVar74[*(long *)(param_1 + 0x290) + 0x100] < 2) {
                uVar77 = (ulong)(pbVar74[*(long *)(param_1 + 0x290) + 0x120] == 6);
              }
              else {
                uVar77 = 1;
              }
              if (pbVar60[param_1 + 0x120] < 2) {
                uVar83 = (ulong)(pbVar60[param_1 + 0x140] == 6);
              }
              else {
                uVar83 = 1;
              }
              uVar65 = -uVar32;
              if (-1 < (int)uVar32) {
                uVar65 = uVar32;
              }
              uVar32 = -uVar25;
              if (-1 < (int)uVar25) {
                uVar32 = uVar25;
              }
              lVar78 = 3;
              if (uVar65 != uVar32) {
                lVar78 = 0;
              }
              func_0x000104c12358(pbVar43 + (uVar77 + uVar83 + lVar78) * 4);
              bVar21 = bVar21 + 1;
            }
            pbStack_1c0[0x14] = bVar21;
          }
          else {
            if (pbVar74[*(long *)(param_1 + 0x290) + 0x100] < 3) {
              iVar51 = 3;
              if (pbVar74[*(long *)(param_1 + 0x290) + 0x120] != 6) {
                iVar51 = 0;
              }
            }
            else {
              iVar51 = 1;
            }
            if (pbVar60[param_1 + 0x120] < 3) {
              iVar56 = 3;
              if (pbVar60[param_1 + 0x140] != 6) {
                iVar56 = 0;
              }
            }
            else {
              iVar56 = 1;
            }
            uVar32 = iVar56 + iVar51;
            if (4 < uVar32) {
              uVar32 = 5;
            }
            iVar50 = iVar50 + 0x3500;
            func_0x000104c12358(pbVar43 + (ulong)uVar32 * 4);
            if (iVar50 == 0) {
              lVar78 = *(long *)(lVar52 + 8);
              goto LAB_104c102c4;
            }
            if ((1 << (ulong)(uVar41 & 0x1f) & 0x3bb80U) == 0) {
              bVar47 = 3;
              lVar78 = 0x14;
LAB_104c10360:
              pbStack_1c0[lVar78] = bVar47;
            }
            else {
              bVar45 = (&UNK_10dd74f9c)[uVar77];
              pbVar26 = pbVar43 + 0x3500;
              func_0x000104c12358(pbVar43 + (ulong)bVar45 * 4);
              pbStack_1c0[0x14] = 4 - (char)pbVar26;
              if (((ulong)pbVar26 & 0xff) == 0) {
                bVar47 = bVar21;
                func_0x000104c12418(pbVar43 + (ulong)bVar45 * 0x20);
                lVar78 = 0x10;
                goto LAB_104c10360;
              }
            }
            func_0x000100daf8ec();
            pbStack_1c0[0x11] = bVar21;
          }
          bVar19 = false;
          bVar20 = (bool)(bVar20 ^ 1);
          goto LAB_104c0e388;
        }
LAB_104c0dcd8:
        pbStack_1c0[0x14] = 0;
        if (pbVar62 != (byte *)0x0) goto LAB_104c0b280;
LAB_104c0dce8:
        func_0x000104c12c44();
        FUN_104c11684();
        func_0x000104c122f8(extraout_x15_06 + ((ulong)pbVar26 & 0xffffffff) * 4);
        func_0x000104c12c44(pbVar26);
        if (extraout_w8_51 == 0) {
          func_0x000104c112a8();
          func_0x000104c122f8(extraout_x15_06 + ((ulong)pbVar26 & 0xffffffff) * 4);
          func_0x000104c127d4(pbVar26);
          if (extraout_w8_52 == 0) {
            func_0x000104c1144c();
            uVar44 = (uint)pbVar26;
            func_0x000104c122f8(extraout_x15_06 + ((ulong)pbVar26 & 0xffffffff) * 4);
          }
          else {
            func_0x000104c11374();
            iVar51 = (int)pbVar26;
            func_0x000104c122f8(extraout_x15_06 + ((ulong)pbVar26 & 0xffffffff) * 4);
            uVar44 = iVar51 + 2;
          }
        }
        else {
          func_0x000104c1150c();
          func_0x000104c122f8(extraout_x15_06 + ((ulong)pbVar26 & 0xffffffff) * 4);
          if ((int)pbVar26 == 0) {
            func_0x000104c127d4();
            func_0x000104c115d0();
            iVar51 = (int)pbVar26;
            func_0x000104c122f8(extraout_x15_06 + ((ulong)pbVar26 & 0xffffffff) * 4);
            uVar44 = iVar51 + 4;
          }
          else {
            uVar44 = 6;
          }
        }
        pbVar39 = (byte *)((ulong)param_3 & 0xffffffff);
      }
      else {
        pbStack_1c0[0x14] = 0;
LAB_104c0b280:
        uVar44 = (int)(char)pbVar62[6] - 1;
        pbVar26 = (byte *)(ulong)uVar44;
        pbVar39 = pbVar42;
        if ((char)pbVar62[6] < 1) {
          if ((pbVar62[8] == 0) && (pbVar62[7] == 0)) goto LAB_104c0dce8;
          uVar44 = 0;
        }
      }
      pbVar26 = pbStack_1c0 + 8;
      pbStack_1c0[0x18] = (byte)uVar44;
      pbStack_1c0[0x19] = 0xff;
      pbVar42 = pbVar39;
      func_0x000104c126c8(param_1 + 0x298,aiStack_190,&iStack_1b4,&uStack_1b8,
                          uVar44 + 1 & 0xff | 0xff00);
      if ((pbVar62 != (byte *)0x0) && ((pbVar62[7] != 0 || (pbVar62[8] != 0)))) goto LAB_104c0dff0;
      iVar51 = iVar50 + 0x3500;
      func_0x000104c12358(pbVar43 + ((ulong)uStack_1b8 & 7) * 4);
      if (iVar51 == 0) {
        pbStack_1c0[0x15] = 3;
        pbStack_1c0[0x17] = 0;
        cVar14 = SBORROW4(iStack_1b4,2);
        cVar15 = iStack_1b4 + -2 < 0;
        if (iStack_1b4 < 2) {
LAB_104c0e12c:
          *(int *)pbVar26 = aiStack_190[0];
          func_0x000104c12514();
        }
        else {
          func_0x000104c12690(uStack_188);
          uVar59 = 2;
          if (cVar15 == cVar14) {
            uVar59 = 0;
          }
          uVar86 = extraout_x9_34;
          if (extraout_w8_56 < 0x280) {
            uVar86 = uVar59;
          }
          func_0x000104c12a78(uVar86);
          func_0x000104c12828();
          *(char *)(extraout_x9_35 + 0x17) = (char)extraout_x8_x00153;
          bVar20 = ((uint)extraout_x8_x00153 & 0xff) == 1;
          cVar14 = bVar20 && SBORROW4(iStack_1b4,2);
          cVar15 = bVar20 && iStack_1b4 + -2 < 0;
          uVar83 = extraout_x8_x00153;
          if (bVar20 && 2 < iStack_1b4) {
            func_0x000104c12690(uStack_178);
            uVar59 = 2;
            if (cVar15 == cVar14) {
              uVar59 = 0;
            }
            uVar86 = extraout_x9_36;
            if (extraout_w8_57 < 0x280) {
              uVar86 = uVar59;
            }
            func_0x000104c12a78(uVar86);
            func_0x000104c12828();
            *(char *)(extraout_x9_37 + 0x17) = (char)extraout_x8_x00154;
            uVar83 = extraout_x8_x00154;
          }
          if (iStack_1b4 < 2) goto LAB_104c0e12c;
          *(int *)pbVar26 = aiStack_190[(uVar83 & 0xff) * 4];
        }
        func_0x000104c125a8();
        FUN_104c10de4(pbVar43,pbVar26);
LAB_104c0e148:
        bVar20 = true;
      }
      else {
        if ((pbVar62 == (byte *)0x0) || ((pbVar62[7] == 0 && (pbVar62[8] == 0)))) {
          iVar51 = iVar50 + 0x3500;
          func_0x000104c12358(pbVar43 + ((ulong)(uStack_1b8 >> 3) & 1) * 4);
          if (iVar51 != 0) {
            iVar51 = iVar50 + 0x3500;
            func_0x000104c12358(pbVar43 + ((ulong)(uStack_1b8 >> 4) & 0xf) * 4);
            if (iVar51 == 0) {
              uVar83 = 0;
              pbStack_1c0[0x15] = 0;
LAB_104c0fb18:
              pbStack_1c0[0x17] = (byte)uVar83;
            }
            else {
              uVar83 = 1;
              pbStack_1c0[0x15] = 1;
              pbStack_1c0[0x17] = 1;
              cVar14 = SBORROW4(iStack_1b4,3);
              cVar15 = iStack_1b4 + -3 < 0;
              if (2 < iStack_1b4) {
                func_0x000104c12690(uStack_178);
                lVar78 = 2;
                if (cVar15 == cVar14) {
                  lVar78 = 0;
                }
                lVar53 = extraout_x9_32;
                if (extraout_w8_54 < 0x280) {
                  lVar53 = lVar78;
                }
                func_0x000100daf99c(pbVar43 + 0x3500,pbVar43 + lVar53 * 4 + 0x2ed4);
                func_0x000104c12454();
                bVar20 = extraout_w9_22 != 2;
                cVar14 = !bVar20 && SBORROW4(iStack_1b4,4);
                cVar15 = bVar20 || iStack_1b4 + -4 < 0;
                uVar83 = extraout_x8_x00152;
                if (!bVar20 && 3 < iStack_1b4) {
                  func_0x000104c12690(uStack_168);
                  lVar78 = 2;
                  if (cVar15 == cVar14) {
                    lVar78 = 0;
                  }
                  lVar53 = extraout_x9_33;
                  if (extraout_w8_55 < 0x280) {
                    lVar53 = lVar78;
                  }
                  pbVar62 = pbVar43 + 0x3500;
                  func_0x000100daf99c(pbVar62,pbVar43 + lVar53 * 4 + 0x2ed4);
                  uVar83 = (ulong)((uint)pbStack_1c0[0x17] + (int)pbVar62);
                  goto LAB_104c0fb18;
                }
              }
            }
            *(int *)pbVar26 = aiStack_190[(uVar83 & 0xff) * 4];
            if (((uint)uVar83 & 0xff) < 2) {
              func_0x000104c12514();
            }
            goto LAB_104c0e148;
          }
        }
LAB_104c0dff0:
        pbStack_1c0[0x15] = 2;
        pbVar39 = *(byte **)(lVar52 + 0x18);
        bVar47 = pbStack_1c0[0x18];
        pbVar62 = pbVar39 + (long)(int)(char)bVar47 * 0x24 + 0x380;
        FUN_104c11738(pbVar62,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                      pbVar82,uVar34);
        *(int *)(pbStack_1c0 + 8) = (int)pbVar62;
        uVar44 = uVar81;
        if (uVar34 <= uVar81) {
          uVar44 = uVar34;
        }
        if (uVar44 == 1) {
          bVar20 = true;
        }
        else {
          bVar20 = *(int *)(*(long *)(lVar52 + 0x18) + (long)(int)(char)bVar47 * 0x24 + 0x380) == 1;
        }
      }
      if ((*(char *)(*(long *)(lVar52 + 8) + 0x18b) == '\0') ||
         ((1 << (ulong)(uVar41 & 0x1f) & 0x33980U) == 0)) {
        bVar21 = 0;
        lVar78 = 0x1c;
LAB_104c0e224:
        pbStack_1c0[lVar78] = bVar21;
      }
      else {
        bVar47 = (&UNK_10dd74edb)[uVar77];
        iVar51 = iVar50 + 0x3500;
        func_0x000104c12358(pbVar43 + (ulong)bVar47 * 4);
        if (iVar51 == 0) {
          lVar78 = 0x1c;
          bVar21 = 0;
          goto LAB_104c0e224;
        }
        pbVar62 = pbVar43 + 0x3500;
        func_0x000104c125dc(pbVar62,pbVar43 + (ulong)bVar47 * 8 + 0x2dc0);
        pbStack_1c0[0x12] = (byte)pbVar62;
        bVar47 = (&UNK_10dd74f9c)[uVar77];
        iVar51 = iVar50 + 0x3500;
        func_0x000104c12358(pbVar43 + (ulong)bVar47 * 4);
        pbStack_1c0[0x1c] = (byte)(iVar51 + 1U);
        if ((iVar51 + 1U & 0xff) == 2) {
          func_0x000104c12418(pbVar43 + (ulong)bVar47 * 0x20);
          lVar78 = 0x10;
          goto LAB_104c0e224;
        }
      }
      lVar78 = *(long *)(lVar52 + 0x18);
      if (*(char *)(lVar78 + 0x1b4) == '\0') {
LAB_104c0e368:
        pbStack_1c0[0x16] = 0;
      }
      else {
        uVar44 = uVar81;
        if (uVar34 <= uVar81) {
          uVar44 = uVar34;
        }
        if (((pbStack_1c0[0x1c] != 0) || (uVar44 < 2)) ||
           ((cVar15 = *(char *)(lVar78 + 0x10d), cVar15 == '\0' &&
            ((pbStack_1c0[0x15] == 2 &&
             (1 < *(uint *)(lVar78 + (long)(int)(char)pbStack_1c0[0x18] * 0x24 + 0x380)))))))
        goto LAB_104c0e368;
        if ((int)uVar72 <= iVar56) {
LAB_104c0e2c8:
          if ((int)uVar30 < (int)uVar32) {
            lVar53 = *(long *)(param_1 + 0x290) + (ulong)(uVar31 + 1) + 0xe0;
            func_0x000104c11838(lVar53,(int)uVar25 >> 1);
            if ((int)lVar53 != 0) goto LAB_104c0e300;
          }
          goto LAB_104c0e368;
        }
        lVar53 = param_1 + (ulong)(uVar33 + 1) + 0x100;
        func_0x000104c11838(lVar53,(int)uVar65 >> 1);
        if ((int)lVar53 == 0) goto LAB_104c0e2c8;
LAB_104c0e300:
        lVar53 = param_1 + 0x2a0 + ((ulong)*(uint *)(param_1 + 0x1c) & 0x1f) * 8;
        plVar75 = (long *)(lVar53 + 0x28);
        bVar19 = (iVar56 < (int)uVar72 && uVar32 != uVar30) &&
                 ((int)uVar72 <= iVar56 || (int)uVar30 <= (int)uVar32);
        uVar33 = uVar81;
        if (uVar81 <= uVar34) {
          uVar33 = uVar34;
        }
        iVar51 = (int)(char)pbStack_1c0[0x18];
        if ((0x1f >= uVar33 && uVar32 != uVar30) && (0x1f < uVar33 || (int)uVar30 <= (int)uVar32)) {
          uVar33 = *(uint *)(param_1 + 0x18);
          uVar32 = (uint)param_5 & 1;
          if (*(int *)(*(long *)(param_1 + 0x10) + 0x352c) <= (int)(uVar33 + uVar81)) {
            uVar32 = 0;
          }
LAB_104c0f5bc:
          lVar68 = *(long *)(lVar53 + 0x20) + (long)(int)uVar33 * 0xc;
          if (iVar51 + 1 == (int)*(char *)(lVar68 + 8)) {
            uVar83 = (ulong)(*(char *)(lVar68 + 9) == -1);
          }
          else {
            uVar83 = 0;
          }
          uVar30 = (uint)(byte)(&UNK_10dd74d48)[(ulong)*(byte *)(lVar68 + 10) * 4];
          uVar57 = uVar83;
          if ((byte)(&UNK_10dd74d48)[(ulong)*(byte *)(lVar68 + 10) * 4] < uVar81) {
            uVar33 = 1 << (ulong)(uVar30 & 0x1f);
            uVar31 = uVar30;
            for (; uVar44 = uVar32, (int)uVar30 < (int)uVar25; uVar30 = uVar30 + uVar31) {
              lVar68 = lVar68 + (ulong)uVar31 * 0xc;
              if ((iVar51 + 1 == (int)*(char *)(lVar68 + 8)) && (*(char *)(lVar68 + 9) == -1)) {
                uVar57 = uVar57 | uVar33;
                if (6 < (int)uVar83) {
                  uVar84 = 0;
                  uVar80 = uVar57;
                  goto LAB_104c0f8d4;
                }
                uVar83 = (ulong)((int)uVar83 + 1);
              }
              uVar31 = (uint)(byte)(&UNK_10dd74d48)[(ulong)*(byte *)(lVar68 + 10) * 4];
              uVar33 = uVar33 << (ulong)(uVar31 & 0x1f);
            }
          }
          else {
            uVar33 = uVar30 - 1 & uVar33;
            bVar19 = uVar33 == 0 && bVar19;
            uVar44 = 0;
            if ((int)(uVar30 - uVar33) <= (int)uVar81) {
              uVar44 = uVar32;
            }
          }
        }
        else {
          if ((int)uVar30 < (int)uVar32) {
            uVar32 = 0;
            uVar33 = *(uint *)(param_1 + 0x18);
            goto LAB_104c0f5bc;
          }
          uVar83 = 0;
          uVar57 = 0;
          uVar44 = 0;
        }
        iVar24 = (int)uVar83;
        uVar80 = uVar57;
        if ((int)uVar72 <= iVar56) {
          uVar84 = 0;
          goto LAB_104c0f84c;
        }
        lVar68 = *plVar75 + (long)*(int *)(param_1 + 0x18) * 0xc;
        if ((iVar51 + 1U == (uint)*(byte *)(lVar68 + -4)) && (*(char *)(lVar68 + -3) == -1)) {
          uVar84 = 1;
          if (iVar24 < 7) {
            uVar83 = (ulong)(iVar24 + 1);
            goto LAB_104c0f7c0;
          }
        }
        else {
          uVar84 = 0;
LAB_104c0f7c0:
          iVar24 = (int)uVar83;
          bVar21 = (&UNK_10dd74d49)[(ulong)*(byte *)(lVar68 + -2) * 4];
          uVar32 = (uint)bVar21;
          if (bVar21 < uVar34) {
            uVar25 = 1 << (ulong)(bVar21 & 0x1f);
            uVar33 = uVar32;
            for (; iVar24 = (int)uVar83, (int)uVar32 < (int)uVar65; uVar32 = uVar32 + uVar33) {
              plVar75 = plVar75 + uVar33;
              lVar68 = *plVar75 + (long)*(int *)(param_1 + 0x18) * 0xc;
              if ((iVar51 + 1U == (uint)*(byte *)(lVar68 + -4)) && (*(char *)(lVar68 + -3) == -1)) {
                uVar84 = uVar84 | uVar25;
                if (6 < iVar24) goto LAB_104c0f8d4;
                uVar83 = (ulong)(iVar24 + 1);
              }
              uVar33 = (uint)(byte)(&UNK_10dd74d49)[(ulong)*(byte *)(lVar68 + -2) * 4];
              uVar25 = uVar25 << (ulong)(uVar33 & 0x1f);
            }
LAB_104c0f84c:
            if (!bVar19) goto LAB_104c0f89c;
            lVar68 = *(long *)(lVar53 + 0x20);
            iVar56 = *(int *)(param_1 + 0x18);
            lVar71 = lVar68 + (long)iVar56 * 0xc;
            if ((iVar51 + 1U != (uint)*(byte *)(lVar71 + -4)) || (*(char *)(lVar71 + -3) != -1))
            goto LAB_104c0f89c;
            uVar84 = uVar84 | 0x100000000;
            if ((6 < iVar24) || (uVar44 == 0)) goto LAB_104c0f8d4;
          }
          else {
            if ((bVar21 - 1 & *(uint *)(param_1 + 0x1c)) == 0) goto LAB_104c0f84c;
LAB_104c0f89c:
            if (uVar44 == 0) goto LAB_104c0f8d4;
            lVar68 = *(long *)(lVar53 + 0x20);
            iVar56 = *(int *)(param_1 + 0x18);
          }
          lVar68 = lVar68 + (long)(int)(iVar56 + uVar81) * 0xc;
          if ((iVar51 + 1 == (int)*(char *)(lVar68 + 8)) &&
             (uVar80 = uVar57 | 0x100000000, *(char *)(lVar68 + 9) != -1)) {
            uVar80 = uVar57;
          }
        }
LAB_104c0f8d4:
        if ((((cVar15 == '\0') && (*(int *)(lVar52 + (long)iVar51 * 0x10 + 0xc38) == 0)) &&
            (*(char *)(lVar78 + 0x37d) != '\0')) && (uVar84 != 0 || uVar80 != 0)) {
          pbVar62 = pbVar43 + 0x3500;
          func_0x000100daf3e4(pbVar62,pbVar43 + uVar77 * 8 + 0x2de0,2);
          uVar32 = (uint)pbVar62;
        }
        else {
          uVar32 = iVar50 + 0x3500;
          func_0x000104c12358(pbVar35);
        }
        pbStack_1c0[0x16] = (byte)uVar32;
        if ((uVar32 & 0xff) == 2) {
          iVar51 = *(int *)pbVar26;
          uVar32 = *(uint *)(param_1 + 0x1c);
          lVar78 = param_1 + 0x2a0 + ((ulong)uVar32 & 0x1f) * 8;
          plVar75 = (long *)(lVar78 + 0x28);
          uVar77 = uVar84 >> 0x20;
          if (((int)uVar80 == 1) && (uVar77 == 0)) {
            psVar64 = (short *)(*(long *)(lVar78 + 0x20) +
                               (long)(int)*(uint *)(param_1 + 0x18) * 0xc);
            iVar56 = (uint)(byte)(&UNK_10dd74d48)[(ulong)*(byte *)(psVar64 + 5) * 4] * 0x10 +
                     ((byte)(&UNK_10dd74d48)[(ulong)*(byte *)(psVar64 + 5) * 4] - 1 &
                     *(uint *)(param_1 + 0x18)) * -0x20 + -8;
            uStack_f0 = CONCAT44((uint)(byte)(&UNK_10dd74d49)[(ulong)*(byte *)(psVar64 + 5) * 4] <<
                                 4,iVar56) ^ 0xfffffff800000000;
            uStack_e8 = iVar56 + psVar64[1];
            aiStack_e4[0] =
                 ((uint)(byte)(&UNK_10dd74d49)[(ulong)*(byte *)(psVar64 + 5) * 4] << 4 ^ 0xfffffff8)
                 + (int)*psVar64;
            uVar83 = 1;
LAB_104c0fa6c:
            if (uVar84 != 1) goto LAB_104c0fca8;
            lVar53 = (long)*(int *)(param_1 + 0x18) * 0xc + -0xc;
            uVar32 = (byte)(&UNK_10dd74d49)[(ulong)*(byte *)(*plVar75 + lVar53 + 10) * 4] - 1 &
                     uVar32;
            lVar53 = (ulong)*(byte *)(plVar75[(int)-uVar32] + lVar53 + 10) * 4;
            uVar25 = (uint)(byte)(&UNK_10dd74d48)[lVar53] << 4 ^ 0xfffffff8;
            uVar77 = uVar83 & 0xffffffff;
            lVar68 = plVar75[(int)-uVar32] + (long)*(int *)(param_1 + 0x18) * 0xc;
            iVar56 = (uint)(byte)(&UNK_10dd74d49)[lVar53] * 0x10 + uVar32 * -0x20 + -8;
            *(uint *)(&uStack_f0 + uVar77 * 2) = uVar25;
            *(int *)((long)&uStack_f0 + uVar77 * 0x10 + 4) = iVar56;
            aiStack_e4[uVar77 * 4 + -1] = uVar25 + (int)*(short *)(lVar68 + -10);
            aiStack_e4[uVar77 * 4] = iVar56 + *(short *)(lVar68 + -0xc);
            if ((uint)uVar83 < 7) {
              uVar57 = (ulong)((uint)uVar83 + 1);
              goto LAB_104c10560;
            }
LAB_104c0fd50:
            uVar57 = 8;
          }
          else {
            uVar83 = 0;
            iVar56 = 0;
            piVar40 = &uStack_e8;
            uVar57 = uVar80;
            while ((uVar83 < 8 && (uVar25 = (uint)uVar57, uVar25 != 0))) {
              uVar65 = (uVar25 & 0xaaaaaaaa) >> 1 | (uVar25 & 0x55555555) << 1;
              uVar65 = (uVar65 & 0xcccccccc) >> 2 | (uVar65 & 0x33333333) << 2;
              uVar65 = (uVar65 & 0xf0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f) << 4;
              uVar65 = (uVar65 & 0xff00ff00) >> 8 | (uVar65 & 0xff00ff) << 8;
              uVar33 = (uint)LZCOUNT(uVar65 >> 0x10 | uVar65 << 0x10);
              iVar56 = iVar56 + uVar33;
              psVar64 = (short *)(*(long *)(lVar78 + 0x20) +
                                 (ulong)(uint)(*(int *)(param_1 + 0x18) + iVar56) * 0xc);
              iVar50 = iVar56 * 0x20 +
                       (uint)(byte)(&UNK_10dd74d48)[(ulong)*(byte *)(psVar64 + 5) * 4] * 0x10 + -8;
              uVar65 = (uint)(byte)(&UNK_10dd74d49)[(ulong)*(byte *)(psVar64 + 5) * 4] << 4 ^
                       0xfffffff8;
              piVar40[-2] = iVar50;
              piVar40[-1] = uVar65;
              *piVar40 = iVar50 + psVar64[1];
              piVar40[1] = uVar65 + (int)*psVar64;
              uVar83 = uVar83 + 1;
              piVar40 = piVar40 + 4;
              uVar57 = (ulong)(uVar25 >> (ulong)(uVar33 & 0x1f) & 0xfffffffe);
            }
            if (uVar83 < 8) goto LAB_104c0fa6c;
            uVar83 = 8;
LAB_104c0fca8:
            uVar32 = 0;
            uVar57 = uVar83 & 0xffffffff;
            piVar40 = aiStack_e4 + (uVar83 & 0xffffffff) * 4 + -1;
            while ((uVar57 < 8 && (uVar25 = (uint)uVar84, uVar25 != 0))) {
              uVar65 = (uVar25 & 0xaaaaaaaa) >> 1 | (uVar25 & 0x55555555) << 1;
              uVar65 = (uVar65 & 0xcccccccc) >> 2 | (uVar65 & 0x33333333) << 2;
              uVar65 = (uVar65 & 0xf0f0f0f0) >> 4 | (uVar65 & 0xf0f0f0f) << 4;
              uVar65 = (uVar65 & 0xff00ff00) >> 8 | (uVar65 & 0xff00ff) << 8;
              uVar33 = (uint)LZCOUNT(uVar65 >> 0x10 | uVar65 << 0x10);
              uVar32 = uVar33 + uVar32;
              lVar68 = plVar75[uVar32] + (long)*(int *)(param_1 + 0x18) * 0xc;
              lVar53 = (ulong)*(byte *)(lVar68 + -2) * 4;
              uVar65 = (uint)(byte)(&UNK_10dd74d48)[lVar53] << 4 ^ 0xfffffff8;
              iVar56 = uVar32 * 0x20 + (uint)(byte)(&UNK_10dd74d49)[lVar53] * 0x10 + -8;
              piVar40[-2] = uVar65;
              piVar40[-1] = iVar56;
              *piVar40 = uVar65 + (int)*(short *)(lVar68 + -10);
              piVar40[1] = iVar56 + *(short *)(lVar68 + -0xc);
              uVar57 = uVar57 + 1;
              piVar40 = piVar40 + 4;
              uVar84 = (ulong)(uVar25 >> (ulong)(uVar33 & 0x1f) & 0xfffffffe);
            }
            if (7 < uVar57) goto LAB_104c0fd50;
            if (uVar77 == 0) {
LAB_104c10560:
              if (uVar80 >> 0x20 != 0) {
                psVar64 = (short *)(*(long *)(lVar78 + 0x20) +
                                   (long)(int)(*(int *)(param_1 + 0x18) + uVar81) * 0xc);
                iVar56 = uVar81 * 0x20 +
                         (uint)(byte)(&UNK_10dd74d48)[(ulong)*(byte *)(psVar64 + 5) * 4] * 0x10 + -8
                ;
                uVar77 = uVar57 & 0xffffffff;
                uVar32 = (uint)(byte)(&UNK_10dd74d49)[(ulong)*(byte *)(psVar64 + 5) * 4] << 4 ^
                         0xfffffff8;
                *(int *)(&uStack_f0 + uVar77 * 2) = iVar56;
                *(uint *)((long)&uStack_f0 + uVar77 * 0x10 + 4) = uVar32;
                aiStack_e4[uVar77 * 4 + -1] = iVar56 + psVar64[1];
                aiStack_e4[uVar77 * 4] = uVar32 + (int)*psVar64;
                uVar57 = (ulong)((int)uVar57 + 1);
              }
            }
            else {
              lVar68 = *(long *)(lVar78 + 0x20) + (long)*(int *)(param_1 + 0x18) * 0xc;
              lVar53 = (ulong)*(byte *)(lVar68 + -2) * 4;
              uVar32 = (uint)(byte)(&UNK_10dd74d48)[lVar53] << 4 ^ 0xfffffff8;
              uVar25 = (uint)(byte)(&UNK_10dd74d49)[lVar53] << 4 ^ 0xfffffff8;
              piVar40[-2] = uVar32;
              piVar40[-1] = uVar25;
              *piVar40 = uVar32 + (int)*(short *)(lVar68 + -10);
              piVar40[1] = uVar25 + (int)*(short *)(lVar68 + -0xc);
              if (uVar57 != 7) {
                uVar57 = uVar57 + 1;
                goto LAB_104c10560;
              }
              uVar57 = 8;
            }
          }
          lVar78 = 0;
          iVar56 = 0;
          if (uVar81 <= uVar34) {
            uVar81 = uVar34;
          }
          if (uVar81 < 5) {
            uVar81 = 4;
          }
          if (0x1b < uVar81) {
            uVar81 = 0x1c;
          }
          piVar40 = &uStack_e8;
          for (; (uVar57 & 0xffffffff) << 2 != lVar78; lVar78 = lVar78 + 4) {
            iVar24 = *piVar40 - ((iVar51 >> 0x10) + piVar40[-2]);
            iVar50 = -iVar24;
            if (-1 < iVar24) {
              iVar50 = iVar24;
            }
            iVar49 = piVar40[1] - ((int)(short)iVar51 + piVar40[-1]);
            iVar24 = -iVar49;
            if (-1 < iVar49) {
              iVar24 = iVar49;
            }
            *(int *)((long)aiStack_114 + lVar78 + 4U) = iVar24 + iVar50;
            if (uVar81 * 4 < (uint)(iVar24 + iVar50)) {
              *(undefined4 *)((long)aiStack_114 + lVar78 + 4U) = 0xffffffff;
            }
            else {
              iVar56 = iVar56 + 1;
            }
            piVar40 = piVar40 + 4;
          }
          if (iVar56 == 0) {
            iVar56 = 1;
          }
          else {
            lVar78 = 0;
            uVar25 = (int)uVar57 - iVar56;
            for (uVar32 = 0; uVar32 != (uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU));
                uVar32 = uVar32 + 1) {
              iVar51 = (int)lVar78;
              uVar77 = -(long)iVar51;
              puVar29 = auStack_100 + (long)iVar51 * 2;
              piVar40 = aiStack_114 + (long)iVar51 + 1;
              do {
                piVar76 = piVar40;
                puVar73 = puVar29;
                puVar29 = puVar73 + 2;
                uVar77 = uVar77 - 1;
                piVar40 = piVar76 + 1;
              } while (*piVar76 != -1);
              iVar51 = (int)uVar57;
              lVar78 = -uVar77;
              lVar53 = (long)iVar51 + 1;
              puVar28 = &uStack_f0 + (long)iVar51 * 2;
              piVar40 = aiStack_114 + iVar51;
              do {
                puVar27 = puVar28;
                iVar51 = *piVar40;
                lVar53 = lVar53 + -1;
                uVar57 = (ulong)((int)uVar57 - 1);
                puVar28 = puVar27 + -2;
                piVar40 = piVar40 + -1;
              } while (iVar51 == -1);
              if (lVar53 <= (long)~uVar77) break;
              *piVar76 = iVar51;
              uVar59 = *puVar28;
              puVar73[3] = puVar27[-1];
              *puVar29 = uVar59;
            }
          }
          pbVar42 = (byte *)(ulong)*(uint *)(param_1 + 0x18);
          puVar29 = &uStack_f0;
          pbVar39 = (byte *)(lVar61 + 0x3f1c0);
          FUN_104c2cbfc(puVar29,iVar56,pbVar82,uVar34);
          if ((int)puVar29 == 0) {
            iVar51 = (int)lVar61 + 0x3f1c0;
            FUN_104c2c9cc();
            if (iVar51 != 0) goto LAB_104c1072c;
            *(undefined4 *)(lVar61 + 0x3f1c0) = 3;
            if (*(int *)(lVar61 + 0x3f204) != 0) {
              bVar20 = false;
              *(short *)(pbStack_1c0 + 0xc) = (short)*(undefined4 *)(lVar61 + 0x3f1cc);
              *(short *)(pbStack_1c0 + 0xe) = (short)*(undefined4 *)(lVar61 + 0x3f1d0);
              *(short *)(pbStack_1c0 + 0x10) = (short)*(undefined4 *)(lVar61 + 0x3f1d4);
              *(short *)(pbStack_1c0 + 0x12) = (short)*(undefined4 *)(lVar61 + 0x3f1d8);
              goto LAB_104c0e378;
            }
          }
          else {
LAB_104c1072c:
            *(undefined4 *)(lVar61 + 0x3f1c0) = 0;
            if (*(int *)(lVar61 + 0x3f204) != 0) {
              bVar20 = false;
              pbStack_1c0[0xc] = 0;
              pbStack_1c0[0xd] = 0x80;
              goto LAB_104c0e378;
            }
          }
          bVar20 = false;
        }
      }
LAB_104c0e378:
      bVar20 = !bVar20;
      bVar19 = true;
    }
    else {
      bVar19 = false;
LAB_104c0b0f4:
      pbStack_1c0[0x18] = *(byte *)(lVar78 + 0x37b);
      pbStack_1c0[0x19] = *(byte *)(*(long *)(lVar52 + 0x18) + 0x37c);
      pbStack_1c0[0x14] = 2;
      pbStack_1c0[0x15] = 0;
      pbStack_1c0[0x17] = 0;
      func_0x000104c12918();
      pbVar42 = pbVar39;
      func_0x000104c126c8();
      *(ulong *)(pbStack_1c0 + 8) = uStack_f0;
      func_0x000104c12514();
      FUN_104c11268(*(undefined8 *)(lVar52 + 0x18),pbStack_1c0 + 0xc);
      bVar20 = true;
    }
LAB_104c0e388:
    uVar32 = *(uint *)(*(long *)(lVar52 + 0x18) + 0x1b0);
    uVar13 = uVar32 == 4;
    if ((bool)uVar13) {
      uVar32 = 0;
    }
    uVar83 = (ulong)uVar32;
    uVar77 = uVar83;
    if (((bool)uVar13) && (!bVar20)) {
      uVar13 = pbStack_1c0[0x14] == 0;
      bVar20 = !(bool)uVar13;
      uVar83 = *(ulong *)(param_1 + 0x290);
      func_0x000104c12a08(uVar83,param_1 + 0x20,bVar20,0,(long)(char)pbStack_1c0[0x18]);
      func_0x000104c1271c(pbVar43 + (uVar83 & 0xffffffff) * 8);
      uVar77 = uVar83;
      if (*(char *)(*(long *)(lVar52 + 8) + 0x18e) != '\0') {
        uVar77 = *(ulong *)(param_1 + 0x290);
        func_0x000104c12a08(uVar77,param_1 + 0x20,bVar20,1,(long)(char)pbStack_1c0[0x18]);
        func_0x000104c1271c(pbVar43 + (uVar77 & 0xffffffff) * 8);
      }
    }
    pbStack_1c0[0x1b] = (&UNK_10dd74f66)[(uVar83 & 0xffffffff) + (uVar77 & 0xffffffff) * 4];
    param_5 = (byte *)((ulong)param_3 & 0xffffffff);
    pbVar26 = pbVar74;
    pbVar38 = pbVar60;
    FUN_104c10e54(param_1);
    uVar25 = (uint)pbVar26;
    func_0x000104c12520();
    if ((bool)uVar13) {
      param_5 = pbStack_1c0;
      (**(code **)(lVar52 + 0xd20))(param_1,(byte *)((ulong)param_3 & 0xffffffff));
    }
    else {
      lVar78 = param_1;
      uVar32 = uVar41;
      func_0x000104c12a70(*(undefined8 *)(lVar52 + 0xce0));
      pbVar62 = param_5;
      if ((int)lVar78 != 0) goto LAB_104c10084;
    }
    lVar78 = *(long *)(lVar52 + 0x18);
    if ((*(char *)(lVar78 + 0x33e) != '\0') || (*(char *)(lVar78 + 0x33f) != '\0')) {
      bVar21 = 2;
      if (!bVar19) {
        bVar21 = 6;
      }
      lVar53 = *(long *)(pbVar43 + 0x37f0) + (ulong)pbStack_1c0[4] * 0x40 +
               (long)(char)pbStack_1c0[0x18] * 2;
      if (bVar21 != pbStack_1c0[0x15]) {
        lVar53 = lVar53 + 1;
      }
      uStack_f0._0_4_ = CONCAT22(*(undefined2 *)(pbStack_1c0 + 0x1e),(ushort)pbStack_1c0[0x1d]);
      bVar21 = pbStack_1c0[0x1a];
      if (*(char *)(lVar78 + (ulong)pbStack_1c0[4] + 0x328) != '\0') {
        bVar21 = 0;
      }
      param_5 = *(byte **)(lVar52 + 0xd68);
      pbVar39 = (byte *)(ulong)*(uint *)(param_1 + 0x1c);
      pbVar42 = (byte *)(ulong)*(uint *)(lVar52 + 0xd70);
      func_0x000104c1b04c(*(undefined8 *)(lVar61 + 0x3f1e8),*(undefined8 *)(lVar52 + 0x1140),param_5
                          ,lVar53 + 2,*(undefined4 *)(param_1 + 0x18),pbVar39,pbVar42,
                          *(undefined4 *)(lVar52 + 0xd74),pbStack_1c0[6],uVar41,bVar21);
    }
    uVar57 = uVar77 & 0xffffffff;
    uVar80 = uVar83 & 0xffffffff;
    uVar32 = (uint)bVar23;
    if (bVar19) {
      uStack_f0 = (ulong)*(uint *)(pbStack_1c0 + 8);
      uStack_e8._0_2_ = CONCAT11(-(pbStack_1c0[0x1c] == 0),pbStack_1c0[0x18] + 1);
      uStack_e8._0_3_ = CONCAT12(bVar22,(undefined2)uStack_e8);
      pbVar38 = (byte *)(ulong)uVar34;
      uVar41 = uVar32;
      if (uVar34 <= uVar32) {
        uVar41 = uVar34;
      }
      cVar15 = '\x02';
      if (pbStack_1c0[0x15] != 3) {
        cVar15 = '\0';
      }
      if (pbStack_1c0[0x15] == 2 && 1 < uVar41) {
        cVar15 = cVar15 + '\x01';
      }
      uStack_e8 = CONCAT13(cVar15,(uint3)uStack_e8);
      func_0x000104c12274(*(undefined8 *)(lVar52 + 0xcb8));
      pcVar54 = extraout_x8_x00155;
    }
    else {
      uStack_f0 = *(ulong *)(pbStack_1c0 + 8);
      uStack_e8._0_2_ = CONCAT11(pbStack_1c0[0x19] + 1,pbStack_1c0[0x18] + 1);
      uStack_e8._0_3_ = CONCAT12(bVar22,(undefined2)uStack_e8);
      bVar22 = (byte)(0x178 >> (ulong)(pbStack_1c0[0x15] & 0x1f)) & 2;
      if (pbStack_1c0[0x15] == 6) {
        bVar22 = 1;
      }
      uStack_e8 = CONCAT13(bVar22,(uint3)uStack_e8);
      func_0x000104c12274(*(undefined8 *)(lVar52 + 0xcb8));
      pbVar38 = (byte *)(ulong)uVar34;
      pcVar54 = extraout_x8_x00156;
    }
    pbVar26 = (byte *)&uStack_f0;
    (*pcVar54)();
    param_4 = pbVar82;
    switch(uVar34) {
    case 1:
      func_0x000104c129cc();
      *(byte *)(extraout_x8_x00157 + 0xa0) = bVar7;
      *(byte *)(extraout_x8_x00157 + 0xe0) = pbStack_1c0[5];
      *(undefined1 *)(extraout_x8_x00157 + 0x100) = 0;
      *(byte *)(extraout_x8_x00157 + 0xc0) = pbStack_1c0[6];
      *(undefined1 *)(extraout_x8_x00157 + 0x270) = 0;
      *(undefined1 *)(extraout_x8_x00157 + 0x2020) = 0;
      *(undefined *)(extraout_x8_x00157 + 0x1c0) = (&UNK_10dd74d4b)[lVar58];
      *(byte *)(extraout_x8_x00157 + 0x120) = pbStack_1c0[0x14];
      *(char *)(extraout_x8_x00157 + 0x180) = (char)uVar83;
      *(char *)(extraout_x8_x00157 + 0x1a0) = (char)uVar77;
      *(byte *)(extraout_x8_x00157 + 0x20) = pbStack_1c0[0x15];
      *(byte *)(extraout_x8_x00157 + 0x140) = pbStack_1c0[0x18];
      *(byte *)(extraout_x8_x00157 + 0x160) = pbStack_1c0[0x19];
      param_4 = pbVar82;
      break;
    case 2:
      func_0x000104c129cc();
      *(short *)(extraout_x8_x00164 + 0xa0) = sVar8;
      *(ushort *)(extraout_x8_x00164 + 0xe0) = CONCAT11(pbStack_1c0[5],pbStack_1c0[5]);
      *(undefined2 *)(extraout_x8_x00164 + 0x100) = 0;
      *(ushort *)(extraout_x8_x00164 + 0xc0) = CONCAT11(pbStack_1c0[6],pbStack_1c0[6]);
      *(undefined2 *)(extraout_x8_x00164 + 0x270) = 0;
      *(undefined2 *)(extraout_x8_x00164 + 0x2020) = 0;
      *(ushort *)(extraout_x8_x00164 + 0x1c0) =
           CONCAT11((&UNK_10dd74d4b)[lVar58],(&UNK_10dd74d4b)[lVar58]);
      *(ushort *)(extraout_x8_x00164 + 0x120) = CONCAT11(pbStack_1c0[0x14],pbStack_1c0[0x14]);
      *(short *)(extraout_x8_x00164 + 0x180) = (short)uVar83 * 0x101;
      *(short *)(extraout_x8_x00164 + 0x1a0) = (short)uVar77 * 0x101;
      *(ushort *)(extraout_x8_x00164 + 0x20) = CONCAT11(pbStack_1c0[0x15],pbStack_1c0[0x15]);
      *(short *)(extraout_x8_x00164 + 0x140) = (char)pbStack_1c0[0x18] * 0x101;
      *(ushort *)(extraout_x8_x00164 + 0x160) = CONCAT11(pbStack_1c0[0x19],pbStack_1c0[0x19]);
      param_4 = pbVar82;
      break;
    case 3:
    case 5:
    case 6:
    case 7:
      break;
    case 4:
      func_0x000104c129d8(0x1010101);
      *(undefined4 *)(extraout_x10_38 + 0xa0) = extraout_w9_23;
      *(uint *)(extraout_x10_38 + 0xe0) = (uint)pbStack_1c0[5] * extraout_w8_58;
      *(undefined4 *)(extraout_x10_38 + 0x100) = 0;
      *(uint *)(extraout_x10_38 + 0xc0) = (uint)pbStack_1c0[6] * extraout_w8_58;
      *(undefined4 *)(extraout_x10_38 + 0x270) = 0;
      *(undefined4 *)(extraout_x10_38 + 0x2020) = 0;
      *(uint *)(extraout_x10_38 + 0x1c0) = (uint)(byte)(&UNK_10dd74d4b)[lVar58] * extraout_w8_58;
      *(uint *)(extraout_x10_38 + 0x120) = (uint)pbStack_1c0[0x14] * extraout_w8_58;
      *(int *)(extraout_x10_38 + 0x180) = (int)uVar83 * extraout_w8_58;
      *(int *)(extraout_x10_38 + 0x1a0) = (int)uVar77 * extraout_w8_58;
      *(uint *)(extraout_x10_38 + 0x20) = (uint)pbStack_1c0[0x15] * extraout_w8_58;
      *(int *)(extraout_x10_38 + 0x140) = (char)pbStack_1c0[0x18] * extraout_w8_58;
      *(uint *)(extraout_x10_38 + 0x160) = (uint)pbStack_1c0[0x19] * extraout_w8_58;
      param_4 = pbVar82;
      break;
    case 8:
      func_0x000104c125f0();
      func_0x000104c123d0();
      func_0x000104c129d8();
      *(undefined8 *)(extraout_x10_36 + 0xa0) = extraout_x8_x00162;
      *(ulong *)(extraout_x10_36 + 0xe0) = (ulong)pbStack_1c0[5] * extraout_x9_40;
      *(undefined8 *)(extraout_x10_36 + 0x100) = 0;
      *(ulong *)(extraout_x10_36 + 0xc0) = (ulong)pbStack_1c0[6] * extraout_x9_40;
      *(undefined8 *)(extraout_x10_36 + 0x270) = 0;
      *(undefined8 *)(extraout_x10_36 + 0x2020) = 0;
      func_0x000104c12b84();
      *(long *)(extraout_x10_37 + 0x1c0) = extraout_x8_x00163 * extraout_x9_41;
      *(ulong *)(extraout_x10_37 + 0x120) =
           (ulong)*(byte *)(extraout_x11_18 + 0x14) * extraout_x9_41;
      *(ulong *)(extraout_x10_37 + 0x180) = uVar80 * extraout_x9_41;
      *(ulong *)(extraout_x10_37 + 0x1a0) = uVar57 * extraout_x9_41;
      *(ulong *)(extraout_x10_37 + 0x20) = (ulong)*(byte *)(extraout_x11_18 + 0x15) * extraout_x9_41
      ;
      *(long *)(extraout_x10_37 + 0x140) = *(char *)(extraout_x11_18 + 0x18) * extraout_x9_41;
      *(ulong *)(extraout_x10_37 + 0x160) =
           (ulong)*(byte *)(extraout_x11_18 + 0x19) * extraout_x9_41;
      param_4 = pbVar82;
      break;
    default:
      if (uVar34 == 0x10) {
        func_0x000104c125f0();
        func_0x000104c123d0();
        uVar59 = extraout_x8_x00165;
        uVar86 = extraout_x8_x00165;
        func_0x000104c129cc();
        *(undefined8 *)(extraout_x8_x00166 + 0xa8) = uVar86;
        *(undefined8 *)(extraout_x8_x00166 + 0xa0) = uVar59;
        func_0x000104c1293c();
        *(undefined8 *)(extraout_x8_x00167 + 0xe8) = uVar86;
        *(undefined8 *)(extraout_x8_x00167 + 0xe0) = uVar59;
        uVar59 = 0;
        uVar86 = 0;
        *(undefined8 *)(extraout_x8_x00167 + 0x108) = 0;
        *(undefined8 *)(extraout_x8_x00167 + 0x100) = 0;
        lVar78 = (ulong)*(byte *)(extraout_x11_19 + 6) * extraout_x9_42;
        *(long *)(extraout_x8_x00167 + 200) = lVar78;
        *(long *)(extraout_x8_x00167 + 0xc0) = lVar78;
        *(undefined8 *)(extraout_x8_x00167 + 0x278) = 0;
        *(undefined8 *)(extraout_x8_x00167 + 0x270) = 0;
        *(undefined8 *)(extraout_x8_x00167 + 0x2028) = 0;
        *(undefined8 *)(extraout_x8_x00167 + 0x2020) = 0;
        func_0x000104c1293c();
        *(undefined8 *)(extraout_x8_x00168 + 0x1c8) = uVar86;
        *(undefined8 *)(extraout_x8_x00168 + 0x1c0) = uVar59;
        func_0x000104c1293c();
        *(undefined8 *)(extraout_x8_x00169 + 0x128) = uVar86;
        *(undefined8 *)(extraout_x8_x00169 + 0x120) = uVar59;
        lVar53 = uVar80 * extraout_x9_43;
        *(long *)(extraout_x8_x00169 + 0x188) = lVar53;
        *(long *)(extraout_x8_x00169 + 0x180) = lVar53;
        *(ulong *)(extraout_x8_x00169 + 0x1a8) = uVar57 * extraout_x9_43;
        *(ulong *)(extraout_x8_x00169 + 0x1a0) = uVar57 * extraout_x9_43;
        lVar78 = lVar53;
        func_0x000104c1293c();
        *(long *)(extraout_x8_x00170 + 0x28) = lVar78;
        *(long *)(extraout_x8_x00170 + 0x20) = lVar53;
        func_0x000104c1293c();
        *(long *)(extraout_x8_x00171 + 0x148) = lVar78;
        *(long *)(extraout_x8_x00171 + 0x140) = lVar53;
        lVar78 = (ulong)*(byte *)(extraout_x11_20 + 0x19) * extraout_x9_44;
        *(long *)(extraout_x8_x00171 + 0x168) = lVar78;
        *(long *)(extraout_x8_x00171 + 0x160) = lVar78;
        param_4 = pbVar82;
      }
      else if (uVar34 == 0x20) {
        func_0x000104c12898();
        lVar78 = extraout_x9_38 * extraout_x8_x00158;
        *(long *)(pbVar60 + param_1 + 0xa0 + 8) = lVar78;
        *(long *)(pbVar60 + param_1 + 0xa0) = lVar78;
        *(long *)(pbVar60 + param_1 + 0xb0 + 8) = lVar78;
        *(long *)(pbVar60 + param_1 + 0xb0) = lVar78;
        func_0x000104c126e4((ulong)pbStack_1c0[5] * extraout_x8_x00158);
        func_0x000104c126e4();
        lVar78 = (ulong)*(byte *)(extraout_x13_10 + 6) * extraout_x8_x00159;
        plVar75 = (long *)(param_1 + 0xc0 + extraout_x12_36);
        plVar75[1] = lVar78;
        *plVar75 = lVar78;
        plVar75 = (long *)(param_1 + 0xc0 + extraout_x9_39);
        plVar75[1] = lVar78;
        *plVar75 = lVar78;
        func_0x000104c126e4();
        func_0x000104c126e4();
        func_0x000104c12434();
        func_0x000104c12434();
        func_0x000104c12434();
        func_0x000104c12434();
        func_0x000104c126e4((ulong)*(byte *)(extraout_x13_11 + 0x15) * extraout_x8_x00160);
        func_0x000104c12434();
        func_0x000104c126e4((ulong)*(byte *)(extraout_x13_12 + 0x19) * extraout_x8_x00161);
        param_4 = pbVar82;
      }
    }
    uVar41 = uVar32 - 1;
    uVar18 = 6 < uVar41;
    uVar13 = uVar41 == 7;
    switch(uVar41) {
    case 0:
      func_0x000104c1236c();
      *(byte *)(extraout_x8_x00172 + 0x80) = bVar7;
      func_0x000104c12360(pbStack_1c0[5]);
      *(undefined1 *)(extraout_x9_45 + 0xc0) = extraout_w8_06;
      func_0x000104c1236c();
      *(undefined1 *)(extraout_x8_x00173 + 0xe0) = 0;
      func_0x000104c12360(*(undefined1 *)(extraout_x10_39 + 6));
      *(undefined1 *)(extraout_x9_46 + 0xa0) = extraout_w8_07;
      func_0x000104c1236c();
      func_0x000104c12af4();
      func_0x000104c129f0();
      func_0x000104c12360();
      *(undefined1 *)(extraout_x9_47 + 0x1a0) = extraout_w8_08;
      func_0x000104c12360(*(undefined1 *)(extraout_x10_40 + 0x14));
      *(undefined1 *)(extraout_x9_48 + 0x100) = extraout_w8_09;
      func_0x000104c1236c();
      *(char *)(extraout_x8_x00174 + 0x160) = (char)uVar83;
      func_0x000104c1236c();
      *(char *)(extraout_x8_x00175 + 0x180) = (char)uVar77;
      pbVar74[*(long *)(param_1 + 0x290)] = *(byte *)(extraout_x10_41 + 0x15);
      func_0x000104c12360(*(undefined1 *)(extraout_x10_41 + 0x18));
      *(undefined1 *)(extraout_x9_49 + 0x120) = extraout_w8_10;
      func_0x000104c12360(*(undefined1 *)(extraout_x10_42 + 0x19));
      *(undefined1 *)(extraout_x9_50 + 0x140) = extraout_w8_11;
      pbVar82 = param_4;
      if (uVar85 == 0) goto LAB_104c0f118;
      goto LAB_104c0efa0;
    case 1:
      func_0x000104c1236c();
      *(short *)(extraout_x8_x00189 + 0x80) = sVar8;
      func_0x000104c122d0(pbStack_1c0[5]);
      *(undefined2 *)(extraout_x9_59 + 0xc0) = extraout_w8_17;
      func_0x000104c1236c();
      *(undefined2 *)(extraout_x8_x00190 + 0xe0) = 0;
      func_0x000104c122d0(*(undefined1 *)(extraout_x10_54 + 6));
      *(undefined2 *)(extraout_x9_60 + 0xa0) = extraout_w8_18;
      func_0x000104c1236c();
      func_0x000104c12ac8();
      func_0x000104c129f0();
      func_0x000104c122d0();
      *(undefined2 *)(extraout_x9_61 + 0x1a0) = extraout_w8_19;
      func_0x000104c122d0(*(undefined1 *)(extraout_x10_55 + 0x14));
      *(undefined2 *)(extraout_x9_62 + 0x100) = extraout_w8_20;
      func_0x000104c12360((int)uVar83 * 0x101);
      *(undefined2 *)(extraout_x9_63 + 0x160) = extraout_w8_21;
      func_0x000104c12360((int)uVar77 * 0x101);
      *(undefined2 *)(extraout_x9_64 + 0x180) = extraout_w8_22;
      *(ushort *)(pbVar74 + *(long *)(param_1 + 0x290)) =
           CONCAT11(*(undefined1 *)(extraout_x10_56 + 0x15),*(undefined1 *)(extraout_x10_56 + 0x15))
      ;
      func_0x000104c12360(*(char *)(extraout_x10_56 + 0x18) * 0x101);
      *(undefined2 *)(extraout_x9_65 + 0x120) = extraout_w8_23;
      func_0x000104c122d0(*(undefined1 *)(extraout_x10_57 + 0x19));
      *(undefined2 *)(extraout_x9_66 + 0x140) = extraout_w8_24;
      break;
    case 3:
      func_0x000104c123dc(0x1010101);
      *(undefined4 *)(extraout_x10_58 + 0x80) = extraout_w9_24;
      func_0x000104c123dc();
      *(undefined4 *)(extraout_x10_59 + 0xc0) = extraout_w9_25;
      func_0x000104c12360();
      *(undefined4 *)(extraout_x9_67 + 0xe0) = 0;
      func_0x000104c123dc();
      *(undefined4 *)(extraout_x10_60 + 0xa0) = extraout_w9_26;
      func_0x000104c12360();
      *(undefined4 *)(extraout_x9_68 + 0x250) = 0;
      pbVar43 = pbVar74 + param_1 + 0x2000;
      pbVar43[0] = 0;
      pbVar43[1] = 0;
      pbVar43[2] = 0;
      pbVar43[3] = 0;
      func_0x000104c123dc();
      *(undefined4 *)(extraout_x10_61 + 0x1a0) = extraout_w9_27;
      func_0x000104c123dc();
      *(undefined4 *)(extraout_x10_62 + 0x100) = extraout_w9_28;
      func_0x000104c123dc();
      *(undefined4 *)(extraout_x10_63 + 0x160) = extraout_w9_29;
      func_0x000104c123dc();
      *(undefined4 *)(extraout_x10_64 + 0x180) = extraout_w9_30;
      *(uint *)(pbVar74 + *(long *)(param_1 + 0x290)) =
           (uint)*(byte *)(extraout_x11_27 + 0x15) * extraout_w8_59;
      func_0x000104c123dc();
      *(undefined4 *)(extraout_x10_65 + 0x120) = extraout_w9_31;
      func_0x000104c12360((uint)*(byte *)(extraout_x11_28 + 0x19) * extraout_w8_60);
      *(undefined4 *)(extraout_x9_69 + 0x140) = extraout_w8_61;
    case 2:
    case 4:
    case 5:
    case 6:
LAB_104c0ef9c:
      break;
    case 7:
      func_0x000104c125f0();
      func_0x000104c12290();
      *(undefined8 *)(extraout_x10_46 + 0x80) = extraout_x8_x00178;
      func_0x000104c12290(pbStack_1c0[5]);
      *(undefined8 *)(extraout_x10_47 + 0xc0) = extraout_x8_x00179;
      func_0x000104c1236c();
      *(undefined8 *)(extraout_x8_x00180 + 0xe0) = 0;
      func_0x000104c12290(*(undefined1 *)(extraout_x11_23 + 6));
      *(undefined8 *)(extraout_x10_48 + 0xa0) = extraout_x8_x00181;
      func_0x000104c1236c();
      *(undefined8 *)(extraout_x8_x00182 + 0x250) = 0;
      pbVar43 = pbVar74 + param_1 + 0x2000;
      pbVar43[0] = 0;
      pbVar43[1] = 0;
      pbVar43[2] = 0;
      pbVar43[3] = 0;
      pbVar43[4] = 0;
      pbVar43[5] = 0;
      pbVar43[6] = 0;
      pbVar43[7] = 0;
      func_0x000104c12290((&UNK_10dd74d4a)[lVar58]);
      *(undefined8 *)(extraout_x10_49 + 0x1a0) = extraout_x8_x00183;
      func_0x000104c12290(*(undefined1 *)(extraout_x11_24 + 0x14));
      *(undefined8 *)(extraout_x10_50 + 0x100) = extraout_x8_x00184;
      func_0x000104c123dc(uVar80 * extraout_x9_54);
      *(undefined8 *)(extraout_x10_51 + 0x160) = extraout_x8_x00185;
      func_0x000104c123dc(uVar57 * extraout_x9_55);
      *(undefined8 *)(extraout_x10_52 + 0x180) = extraout_x8_x00186;
      *(ulong *)(pbVar74 + *(long *)(param_1 + 0x290)) =
           (ulong)*(byte *)(extraout_x11_25 + 0x15) * extraout_x9_56;
      func_0x000104c12290((long)*(char *)(extraout_x11_25 + 0x18));
      *(undefined8 *)(extraout_x10_53 + 0x120) = extraout_x8_x00187;
      func_0x000104c12360((ulong)*(byte *)(extraout_x11_26 + 0x19) * extraout_x9_57);
      uVar59 = extraout_x8_x00188;
      lVar58 = extraout_x9_58;
      goto LAB_104c0f10c;
    default:
      uVar18 = 0xf < uVar32;
      uVar13 = uVar32 == 0x10;
      if ((bool)uVar13) {
        func_0x000104c12898();
        func_0x000104c12360();
        *(undefined8 *)(extraout_x9_70 + 0x80) = extraout_x10_66;
        *(undefined8 *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x88) = extraout_x10_66;
        func_0x000104c12424();
        *(undefined8 *)(extraout_x11_29 + 0xc0) = extraout_x10_67;
        func_0x000104c12684();
        *(undefined8 *)(extraout_x11_30 + 0xc0) = extraout_x10_68;
        func_0x000104c123dc();
        *(undefined8 *)(extraout_x10_69 + 0xe0) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x9_71 + 0xe0) = 0;
        func_0x000104c12424();
        *(undefined8 *)(extraout_x11_31 + 0xa0) = extraout_x10_70;
        func_0x000104c12684();
        *(undefined8 *)(extraout_x11_32 + 0xa0) = extraout_x10_71;
        func_0x000104c123dc();
        *(undefined8 *)(extraout_x10_72 + 0x250) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x9_72 + 0x250) = 0;
        pbVar43 = pbVar74 + param_1 + 0x2008;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43[4] = 0;
        pbVar43[5] = 0;
        pbVar43[6] = 0;
        pbVar43[7] = 0;
        pbVar43 = pbVar74 + param_1 + 0x2000;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43[4] = 0;
        pbVar43[5] = 0;
        pbVar43[6] = 0;
        pbVar43[7] = 0;
        func_0x000104c12424();
        *(undefined8 *)(extraout_x11_33 + 0x1a0) = extraout_x10_73;
        func_0x000104c12684();
        *(undefined8 *)(extraout_x11_34 + 0x1a0) = extraout_x10_74;
        func_0x000104c12424();
        *(undefined8 *)(extraout_x11_35 + 0x100) = extraout_x10_75;
        func_0x000104c12684();
        *(undefined8 *)(extraout_x11_36 + 0x100) = extraout_x10_76;
        *(ulong *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x160) = uVar80 * extraout_x8_x00192;
        func_0x000104c12684();
        *(undefined8 *)(extraout_x11_37 + 0x160) = extraout_x10_77;
        *(ulong *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x180) = uVar57 * extraout_x8_x00193;
        func_0x000104c12684();
        *(undefined8 *)(extraout_x11_38 + 0x180) = extraout_x10_78;
        lVar58 = (ulong)*(byte *)(extraout_x12_41 + 0x15) * extraout_x8_x00194;
        *(long *)(pbVar74 + *(long *)(param_1 + 0x290)) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + extraout_x9_73) = lVar58;
        func_0x000104c12424();
        *(undefined8 *)(extraout_x11_39 + 0x120) = extraout_x10_79;
        func_0x000104c12684();
        *(undefined8 *)(extraout_x11_40 + 0x120) = extraout_x10_80;
        func_0x000104c123dc((ulong)*(byte *)(extraout_x12_42 + 0x19) * extraout_x8_x00195);
        *(undefined8 *)(extraout_x10_81 + 0x140) = extraout_x8_x00196;
        lVar58 = *(long *)(param_1 + 0x290) + extraout_x9_74;
        uVar59 = extraout_x8_x00196;
      }
      else {
        uVar18 = 0x1f < uVar32;
        uVar13 = uVar32 == 0x20;
        if (!(bool)uVar13) goto LAB_104c0ef9c;
        func_0x000104c12898();
        func_0x000104c12360();
        *(undefined8 *)(extraout_x9_51 + 0x80) = extraout_x12_37;
        func_0x000104c12bfc();
        *(undefined8 *)(extraout_x10_43 + 0x80) = extraout_x12_38;
        func_0x000104c12ae8();
        lVar78 = extraout_x11_21 + 0x18;
        *(undefined8 *)(extraout_x13_13 + lVar78 + 0x80) = extraout_x12_39;
        lVar53 = (ulong)pbStack_1c0[5] * extraout_x8_x00176;
        *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0xc0) = lVar53;
        *(long *)(*(long *)(param_1 + 0x290) + extraout_x9_52 + 0xc0) = lVar53;
        *(long *)(*(long *)(param_1 + 0x290) + extraout_x10_44 + 0xc0) = lVar53;
        *(long *)(*(long *)(param_1 + 0x290) + lVar78 + 0xc0) = lVar53;
        pbVar43 = pbVar74 + *(long *)(param_1 + 0x290) + 0xe0;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43[4] = 0;
        pbVar43[5] = 0;
        pbVar43[6] = 0;
        pbVar43[7] = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x9_52 + 0xe0) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x10_44 + 0xe0) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x290) + lVar78 + 0xe0) = 0;
        lVar53 = (ulong)pbStack_1c0[6] * extraout_x8_x00176;
        *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0xa0) = lVar53;
        *(long *)(*(long *)(param_1 + 0x290) + extraout_x9_52 + 0xa0) = lVar53;
        *(long *)(*(long *)(param_1 + 0x290) + extraout_x10_44 + 0xa0) = lVar53;
        *(long *)(*(long *)(param_1 + 0x290) + lVar78 + 0xa0) = lVar53;
        pbVar43 = pbVar74 + *(long *)(param_1 + 0x290) + 0x250;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43[4] = 0;
        pbVar43[5] = 0;
        pbVar43[6] = 0;
        pbVar43[7] = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x9_52 + 0x250) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x10_44 + 0x250) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x290) + lVar78 + 0x250) = 0;
        pbVar43 = pbVar74 + param_1 + 0x2000;
        pbVar43[8] = 0;
        pbVar43[9] = 0;
        pbVar43[10] = 0;
        pbVar43[0xb] = 0;
        pbVar43[0xc] = 0;
        pbVar43[0xd] = 0;
        pbVar43[0xe] = 0;
        pbVar43[0xf] = 0;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43[4] = 0;
        pbVar43[5] = 0;
        pbVar43[6] = 0;
        pbVar43[7] = 0;
        puVar29 = (undefined8 *)(param_1 + 0x2000 + extraout_x10_44);
        puVar29[1] = 0;
        *puVar29 = 0;
        lVar58 = (ulong)(byte)(&UNK_10dd74d4a)[lVar58] * extraout_x8_x00176;
        *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x1a0) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + extraout_x9_52 + 0x1a0) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + extraout_x10_44 + 0x1a0) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + lVar78 + 0x1a0) = lVar58;
        lVar58 = (ulong)pbStack_1c0[0x14] * extraout_x8_x00176;
        *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x100) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + extraout_x9_52 + 0x100) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + extraout_x10_44 + 0x100) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + lVar78 + 0x100) = lVar58;
        lVar58 = uVar80 * extraout_x8_x00176;
        *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x160) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + extraout_x9_52 + 0x160) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + extraout_x10_44 + 0x160) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + lVar78 + 0x160) = lVar58;
        lVar58 = uVar57 * extraout_x8_x00176;
        *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x180) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + extraout_x9_52 + 0x180) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + extraout_x10_44 + 0x180) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + lVar78 + 0x180) = lVar58;
        lVar58 = (ulong)pbStack_1c0[0x15] * extraout_x8_x00176;
        *(long *)(pbVar74 + *(long *)(param_1 + 0x290)) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + extraout_x9_52) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + extraout_x10_44) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + lVar78) = lVar58;
        lVar58 = (char)pbStack_1c0[0x18] * extraout_x8_x00176;
        *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x120) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + extraout_x9_52 + 0x120) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + extraout_x10_44 + 0x120) = lVar58;
        *(long *)(*(long *)(param_1 + 0x290) + lVar78 + 0x120) = lVar58;
        func_0x000104c12984((ulong)pbStack_1c0[0x19] * extraout_x8_x00176);
        *(undefined8 *)(extraout_x12_40 + 0x140) = extraout_x8_x00177;
        *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x9_53 + 0x140) = extraout_x8_x00177;
        *(undefined8 *)(*(long *)(param_1 + 0x290) + extraout_x10_45 + 0x140) = extraout_x8_x00177;
        lVar58 = *(long *)(param_1 + 0x290) + extraout_x11_22;
        uVar59 = extraout_x8_x00177;
      }
LAB_104c0f10c:
      *(undefined8 *)(lVar58 + 0x140) = uVar59;
    }
    pbVar82 = param_4;
    if (uVar85 != 0) {
LAB_104c0efa0:
      func_0x000104c12abc();
      if (!(bool)uVar18 || (bool)uVar13) {
                    /* WARNING: Could not recover jumptable at 0x000104c0efc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(ushort *)(&UNK_10dd6a884 + extraout_x8_x00191 * 2) * 4 + 0x104c0efc4))()
        ;
        return;
      }
      uVar13 = 0xf < extraout_w15_03;
      uVar18 = extraout_w15_03 == 0x10;
      if ((bool)uVar18) {
        func_0x000104c124e4();
        *(undefined8 *)(extraout_x8_x00201 + 600) = 0;
        *(undefined8 *)(extraout_x8_x00201 + 0x250) = 0;
      }
      else {
        uVar13 = 0x1f < extraout_w15_03;
        uVar18 = extraout_w15_03 == 0x20;
        if ((bool)uVar18) {
          func_0x000104c1269c();
        }
      }
      func_0x000104c12c10();
      if (!(bool)uVar13 || (bool)uVar18) {
                    /* WARNING: Could not recover jumptable at 0x000104c0f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(ushort *)(&UNK_10dd6a894 + extraout_x8_x00202 * 2) * 4 + 0x104c0f118))()
        ;
        return;
      }
LAB_104c0f520:
      uVar13 = uVar9 == 0x10;
      if ((bool)uVar13) {
        func_0x000104c123c0();
        func_0x000104c12ab0();
        *(undefined8 *)(extraout_x8_x00204 + (extraout_x9_77 & 0xffffffff) + 0x238) = 0;
        param_4 = pbVar82;
      }
      else {
        uVar13 = uVar9 == 0x20;
        param_4 = pbVar82;
        if ((bool)uVar13) {
          func_0x000104c123c0();
          func_0x000104c12ab0();
          *(undefined8 *)(extraout_x8_x00203 + (extraout_x9_76 & 0xffffffff) + 0x238) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + (extraout_x9_76 & 0xffffffff) + 0x240) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + (extraout_x9_76 & 0xffffffff) + 0x248) = 0;
          param_4 = pbVar82;
        }
      }
    }
LAB_104c0f118:
    pbStack_280 = pbStack_1c0 + 3;
    uVar32 = (uint)pbVar26;
    uVar41 = (uint)bVar23;
    if ((*(char *)(*(long *)(lVar52 + 0x18) + 0x2d2) != '\0') &&
       (*(char *)(*(long *)(lVar52 + 0x18) + 0x2d3) != '\0')) {
      pbVar43 = (byte *)(*(long *)(lVar52 + 0xb00) +
                         *(long *)(lVar52 + 0xd68) * (long)*(int *)(param_1 + 0x1c) +
                        (long)*(int *)(param_1 + 0x18));
      uVar13 = uVar41 - 1 == 7;
      switch(uVar41 - 1) {
      case 0:
        for (uVar25 = uVar34; uVar25 != 0; uVar25 = uVar25 - 1) {
          *pbVar43 = pbStack_1c0[4];
          pbVar43 = pbVar43 + *(long *)(lVar52 + 0xd68);
        }
        break;
      case 1:
        for (uVar25 = uVar34; uVar25 != 0; uVar25 = uVar25 - 1) {
          *(ushort *)pbVar43 = CONCAT11(pbStack_1c0[4],pbStack_1c0[4]);
          pbVar43 = pbVar43 + *(long *)(lVar52 + 0xd68);
        }
        break;
      case 2:
      case 4:
      case 5:
      case 6:
        break;
      case 3:
        uVar59 = 0x1010101;
        uVar25 = uVar34;
        while (uVar25 != 0) {
          *(uint *)pbVar43 = (uint)pbStack_1c0[4] * (int)uVar59;
          func_0x000104c125bc();
          uVar32 = (uint)pbVar26;
          pbVar43 = extraout_x8_x00199;
          uVar59 = extraout_x9_75;
          uVar25 = extraout_w10_04;
        }
        break;
      case 7:
        uVar25 = uVar34;
        while (uVar25 != 0) {
          func_0x000104c128d8();
          *extraout_x8_x00198 = extraout_x11_42;
          func_0x000104c125bc();
          uVar32 = (uint)pbVar26;
          uVar25 = extraout_w10_03;
        }
        break;
      default:
        if (uVar41 == 0x10) {
          uVar13 = 1;
          uVar25 = uVar34;
          while (uVar25 != 0) {
            func_0x000104c128d8();
            *extraout_x8_x00200 = extraout_x11_43;
            extraout_x8_x00200[1] = extraout_x11_43;
            func_0x000104c125bc();
            uVar32 = (uint)pbVar26;
            uVar25 = extraout_w10_05;
          }
        }
        else {
          uVar13 = uVar41 == 0x20;
          uVar25 = uVar34;
          if ((bool)uVar13) {
            while (uVar25 != 0) {
              func_0x000104c128d8();
              extraout_x8_x00197[1] = extraout_x11_41;
              *extraout_x8_x00197 = extraout_x11_41;
              extraout_x8_x00197[3] = extraout_x11_41;
              extraout_x8_x00197[2] = extraout_x11_41;
              func_0x000104c125bc();
              uVar32 = (uint)pbVar26;
              uVar25 = extraout_w10_02;
            }
          }
        }
      }
    }
    func_0x000104c125fc();
    if (extraout_w8_62 == 0) {
      lVar58 = *(long *)(lVar61 + 0x3f1e8) + ((ulong)pbVar60 >> 1) * 4 + 0x506;
      lVar78 = (((ulong)pbVar60 >> 1) << 2 | (ulong)(uVar72 >> 4 & 1) << 1) +
               *(long *)(lVar61 + 0x3f1e8) + 0x504;
      for (lVar53 = 0; uVar13 = (uint)lVar53 == uVar34, (uint)lVar53 < uVar34; lVar53 = lVar53 + 2)
      {
        uVar48 = (ushort)((0xffffffffU >> (ulong)(-uVar41 & 0x1f)) << (ulong)(uVar72 & 0xf));
        *(ushort *)(lVar78 + lVar53 * 2) = *(ushort *)(lVar78 + lVar53 * 2) | uVar48;
        if (uVar41 == 0x20) {
          *(ushort *)(lVar58 + lVar53 * 2) = *(ushort *)(lVar58 + lVar53 * 2) | uVar48;
        }
      }
    }
    func_0x000104c12520();
    uVar25 = (uint)param_4;
    pbVar62 = param_5;
    if ((((bool)uVar13) && (*pbStack_280 == 0)) &&
       ((*(byte *)(*(long *)(lVar52 + 0x18) + 0xe8) & 1) != 0)) {
      uVar32 = *(uint *)(param_1 + 0x1c);
      uVar77 = (ulong)uVar32;
      lVar58 = *(long *)(extraout_x14_06 + 0x3578) +
               (long)((int)(uVar32 - *(int *)(extraout_x14_06 + 0x3530)) >>
                     (*(uint *)(lVar52 + 0xd8c) & 0x1f)) * 0x38;
      if (pbStack_1c0[0x14] == 0) {
        uVar25 = uVar41;
        if (uVar34 <= uVar41) {
          uVar25 = uVar34;
        }
        iVar51 = (int)lVar58;
        uVar65 = extraout_w15_04;
        if (uVar25 < 2) {
LAB_104c0f638:
          uVar25 = (uint)*(short *)(pbStack_1c0 + 8);
          pbVar39 = (byte *)(lVar52 + (long)(char)pbStack_1c0[0x18] * 0x10 + 0xc40);
          pbVar36 = (byte *)(ulong)uVar34;
          pbVar38 = (byte *)0x0;
          func_0x000104c1199c(lVar58 + (long)(char)pbStack_1c0[0x18] * 8);
          uVar13 = pbStack_1c0[0x16] == 1;
          if ((bool)uVar13) {
            pbVar36 = (byte *)0x0;
            lVar78 = lVar58;
            func_0x000104c12754(param_1);
            uVar32 = (uint)lVar78;
          }
        }
        else {
          bVar20 = pbStack_1c0[0x15] == 2;
          if (bVar20) {
            lVar78 = (long)(char)pbStack_1c0[0x18];
            if (*(char *)(lVar52 + lVar78 + 0xbf0) == '\0') goto LAB_104c0f5f4;
            uVar13 = pbStack_1c0[0x16] == 2;
            uVar25 = (int)param_1 + 0x3f1c0;
            if (!(bool)uVar13) {
              uVar25 = (int)*(long *)(lVar52 + 0x18) + (char)pbStack_1c0[0x18] * 0x24 + 0x380;
            }
          }
          else {
LAB_104c0f5f4:
            func_0x000104c128b8();
            uVar65 = extraout_w15_05;
            if ((!bVar20) ||
               (uVar13 = *(uint *)(lVar61 + 0x3f1c0) == 2, *(uint *)(lVar61 + 0x3f1c0) < 2))
            goto LAB_104c0f638;
            lVar78 = (long)(char)pbStack_1c0[0x18];
            uVar25 = (int)lVar61 + 0x3f1c0;
          }
          uVar32 = iVar51 + (int)lVar78 * 8;
          func_0x000104c11918(param_1);
        }
        pbVar62 = pbVar36;
        if (uVar85 != 0) {
          if (uVar41 == bVar16 || uVar34 == bVar17) {
            uVar32 = *(uint *)(param_1 + 0x1c);
            lVar78 = param_1 + ((ulong)uVar32 & 0x1f) * 8;
            if (uVar41 == 1) {
              func_0x000104c125cc(*(undefined8 *)(lVar78 + 0x2c8));
              bVar16 = *(char *)(extraout_x8_x00205 + -4) != '\0';
              uVar65 = extraout_w12_00;
            }
            else {
              bVar16 = true;
            }
            uVar25 = (uint)pbVar63;
            if (uVar34 == uVar25) {
              if (*(char *)(*(long *)(lVar78 + 0x2c0) + (long)*(int *)(param_1 + 0x18) * 0xc + 8) <
                  '\x01') {
                bVar16 = false;
              }
              if ((uVar41 == 1) &&
                 (*(char *)(*(long *)(lVar78 + 0x2c0) + (long)*(int *)(param_1 + 0x18) * 0xc + -4)
                  == '\0')) goto LAB_104c0fbb4;
            }
            if (bVar16) {
              if (uVar41 == 1 && uVar34 == uVar25) {
                func_0x000104c125cc(*(undefined8 *)(lVar78 + 0x2c0));
                func_0x000104c12858();
                func_0x000104c1199c();
LAB_104c0fff0:
                func_0x000104c125cc(*(undefined8 *)(lVar78 + 0x2c8));
                func_0x000104c12858();
                func_0x000104c1199c();
                uVar32 = *(uint *)(param_1 + 0x1c);
              }
              else if (uVar41 == 1) goto LAB_104c0fff0;
              uVar13 = uVar34 == uVar25;
              if ((bool)uVar13) {
                func_0x000104c125cc(*(undefined8 *)(lVar78 + 0x2c0));
                func_0x000104c12858();
                func_0x000104c1199c();
                uVar32 = *(uint *)(param_1 + 0x1c);
              }
              uVar25 = (uint)*(short *)(pbStack_1c0 + 8);
              pbVar39 = (byte *)(lVar52 + (long)(char)pbStack_1c0[0x18] * 0x10 + 0xc40);
              pbVar62 = (byte *)(ulong)uVar34;
              func_0x000104c1199c(lVar58 + (long)(char)pbStack_1c0[0x18] * 8 + 4);
              pbVar38 = pbVar63;
              goto LAB_104c10084;
            }
          }
LAB_104c0fbb4:
          if ((int)uVar65 <= (int)uVar9) {
            uVar9 = uVar65;
          }
          if (uVar9 < 2) {
LAB_104c0fc4c:
            pbVar62 = (byte *)(ulong)(uVar34 << (uVar34 == (uint)pbVar63));
            uVar25 = (uint)*(short *)(pbStack_1c0 + 8);
            uVar32 = *(uint *)(param_1 + 0x1c) & ((uint)pbVar63 ^ 0xffffffff);
            pbVar39 = (byte *)(lVar52 + (long)(char)pbStack_1c0[0x18] * 0x10 + 0xc40);
            func_0x000104c1199c(lVar58 + (long)(char)pbStack_1c0[0x18] * 8 + 4);
            uVar13 = pbStack_1c0[0x16] == 1;
            pbVar38 = pbVar63;
            if ((bool)uVar13) {
              pbVar62 = (byte *)0x1;
              func_0x000104c12754(param_1);
              uVar32 = (uint)lVar58;
              pbVar38 = pbVar63;
            }
          }
          else {
            bVar16 = pbStack_1c0[0x15] == 2;
            if ((bVar16) &&
               (bVar23 = pbStack_1c0[0x18], *(char *)(lVar52 + (char)bVar23 + 0xbf0) != '\0')) {
              uVar32 = iVar51 + (char)bVar23 * 8 + 4;
              uVar13 = pbStack_1c0[0x16] == 2;
              if ((bool)uVar13) goto LAB_104c0fc3c;
              uVar25 = (int)*(undefined8 *)(lVar52 + 0x18) + (char)bVar23 * 0x24 + 0x380;
            }
            else {
              func_0x000104c128b8();
              if ((!bVar16) ||
                 (uVar13 = *(uint *)(lVar61 + 0x3f1c0) == 2, *(uint *)(lVar61 + 0x3f1c0) < 2))
              goto LAB_104c0fc4c;
              uVar32 = iVar51 + (char)pbStack_1c0[0x18] * 8 + 4;
LAB_104c0fc3c:
              uVar25 = (int)param_1 + 0x3f1c0;
            }
            func_0x000104c12a38();
            pbVar62 = pbVar36;
            pbVar38 = pbVar63;
          }
        }
      }
      else {
        lVar61 = 0;
        pbVar43 = pbStack_1c0 + 0x18;
        pbVar26 = pbVar43;
        while( true ) {
          uVar25 = (uint)param_4;
          uVar32 = (uint)uVar77;
          if (lVar61 == 8) break;
          lVar78 = (long)(char)*pbVar26;
          uVar83 = lVar58 + lVar78 * 8;
          if ((pbStack_1c0[0x15] == 6) && (*(char *)(lVar52 + 0xbf0 + lVar78) != '\0')) {
            param_4 = (byte *)(*(long *)(lVar52 + 0x18) + (long)(int)(char)*pbVar26 * 0x24 + 0x380);
            param_5 = pbVar36;
            func_0x000104c11918(param_1);
            uVar77 = uVar83;
          }
          else {
            uVar77 = (ulong)*(uint *)(param_1 + 0x1c);
            param_4 = (byte *)(long)*(short *)(pbStack_1c0 + lVar61 + 8);
            pbVar39 = (byte *)(lVar52 + 0xc40 + lVar78 * 0x10);
            pbVar38 = (byte *)0x0;
            param_5 = (byte *)(ulong)uVar34;
            func_0x000104c1199c(uVar83);
          }
          pbVar26 = pbVar26 + 1;
          lVar61 = lVar61 + 4;
        }
        uVar13 = 1;
        pbVar62 = param_5;
        if (uVar85 != 0) {
          lVar61 = 0;
          if ((int)uVar2 <= (int)uVar9) {
            uVar9 = uVar2;
          }
          while( true ) {
            uVar25 = (uint)param_4;
            uVar32 = (uint)uVar77;
            uVar13 = 1;
            pbVar62 = param_5;
            if (lVar61 == 8) break;
            lVar53 = (long)(char)*pbVar43;
            lVar78 = lVar58 + lVar53 * 8;
            if ((pbStack_1c0[0x15] == 6 && 1 < uVar9) &&
               (*(char *)(lVar52 + 0xbf0 + lVar53) != '\0')) {
              uVar77 = lVar78 + 4;
              param_4 = (byte *)(*(long *)(lVar52 + 0x18) + (long)(int)(char)*pbVar43 * 0x24 + 0x380
                                );
              func_0x000104c12a38();
            }
            else {
              uVar77 = (ulong)*(uint *)(param_1 + 0x1c);
              param_4 = (byte *)(long)*(short *)(pbStack_1c0 + lVar61 + 8);
              pbVar39 = (byte *)(lVar52 + 0xc40 + lVar53 * 0x10);
              param_5 = (byte *)(ulong)uVar34;
              pbVar38 = pbVar63;
              func_0x000104c1199c(lVar78 + 4);
            }
            pbVar43 = pbVar43 + 1;
            lVar61 = lVar61 + 4;
          }
        }
      }
    }
    goto LAB_104c10084;
  }
  uVar41 = (uint)bVar23;
  if (pbStack_1c0[3] == 0) {
    pbVar43 = param_3;
    uVar25 = (uint)param_4;
    func_0x000104c125e4();
    uVar13 = uVar18;
    pbVar39 = param_5;
    if (((extraout_x8_01 & 1) != 0) && (pbStack_1c0[0x14] == 0)) {
      func_0x000104c128b8();
      uVar13 = 0;
      pbVar39 = param_5;
      if ((bool)uVar18) {
        puVar1 = (undefined4 *)(extraout_x12 + 0x1c0);
        uVar13 = *(short *)(pbStack_1c0 + 0xc) == -0x8000;
        if ((bool)uVar13) {
          *puVar1 = 0;
        }
        else {
          *(undefined4 *)(extraout_x12 + 0x1c0) = 3;
          *(int *)(extraout_x12 + 0x1cc) = *(short *)(pbStack_1c0 + 0xc) + 0x10000;
          *(int *)(extraout_x12 + 0x1d0) = (int)*(short *)(pbStack_1c0 + 0xe);
          *(int *)(extraout_x12 + 0x1d4) = (int)*(short *)(pbStack_1c0 + 0x10);
          *(int *)(extraout_x12 + 0x1d8) = *(short *)(pbStack_1c0 + 0x12) + 0x10000;
          pbVar35 = (byte *)(ulong)*(uint *)(pbStack_1c0 + 8);
          puVar37 = puVar1;
          func_0x000104c2cb80(pbVar82,uVar34);
          uVar25 = (uint)puVar37;
          FUN_104c2c9cc(puVar1);
          pbVar43 = (byte *)((ulong)param_3 & 0xffffffff);
          pbVar38 = pbVar62;
          pbVar39 = pbVar26;
        }
      }
    }
    lVar61 = param_1;
    pbVar42 = pbVar43;
    func_0x000104c12a70(*(undefined8 *)(lVar52 + 0xce0));
    uVar32 = (uint)pbVar43;
    pbVar62 = pbVar35;
    if ((int)lVar61 != 0) goto LAB_104c10084;
    lVar61 = (ulong)pbStack_1c0[0x1b] * 2;
    pbVar26 = &UNK_10dd74f76 + lVar61;
    switch(uVar34) {
    case 1:
      pbVar60[param_1 + 0x180] = *pbVar26;
      pbVar60[param_1 + 0x1a0] = (&UNK_10dd74f77)[lVar61];
      pbVar60[param_1 + 0x100] = 0;
      break;
    case 2:
      *(ushort *)(pbVar60 + param_1 + 0x180) = CONCAT11(*pbVar26,*pbVar26);
      *(ushort *)(pbVar60 + param_1 + 0x1a0) =
           CONCAT11((&UNK_10dd74f77)[lVar61],(&UNK_10dd74f77)[lVar61]);
      (pbVar60 + param_1 + 0x100)[0] = 0;
      (pbVar60 + param_1 + 0x100)[1] = 0;
      break;
    case 3:
    case 5:
    case 6:
    case 7:
      break;
    case 4:
      *(uint *)(pbVar60 + param_1 + 0x180) = (uint)*pbVar26 * 0x1010101;
      *(uint *)(pbVar60 + param_1 + 0x1a0) = (uint)(byte)(&UNK_10dd74f77)[lVar61] * 0x1010101;
      pbVar60 = pbVar60 + param_1 + 0x100;
      pbVar60[0] = 0;
      pbVar60[1] = 0;
      pbVar60[2] = 0;
      pbVar60[3] = 0;
      break;
    case 8:
      *(ulong *)(pbVar60 + param_1 + 0x180) = (ulong)*pbVar26 * 0x101010101010101;
      *(ulong *)(pbVar60 + param_1 + 0x1a0) =
           (ulong)(byte)(&UNK_10dd74f77)[lVar61] * 0x101010101010101;
      pbVar60 = pbVar60 + param_1 + 0x100;
      pbVar60[0] = 0;
      pbVar60[1] = 0;
      pbVar60[2] = 0;
      pbVar60[3] = 0;
      pbVar60[4] = 0;
      pbVar60[5] = 0;
      pbVar60[6] = 0;
      pbVar60[7] = 0;
      break;
    default:
      if (uVar34 == 0x10) {
        bVar23 = *pbVar26;
        *(ulong *)(pbVar60 + param_1 + 0x188) = (ulong)bVar23 * 0x101010101010101;
        *(ulong *)(pbVar60 + param_1 + 0x180) = (ulong)bVar23 * 0x101010101010101;
        bVar23 = (&UNK_10dd74f77)[lVar61];
        *(ulong *)(pbVar60 + param_1 + 0x1a8) = (ulong)bVar23 * 0x101010101010101;
        *(ulong *)(pbVar60 + param_1 + 0x1a0) = (ulong)bVar23 * 0x101010101010101;
        pbVar43 = pbVar60 + param_1 + 0x100;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43[4] = 0;
        pbVar43[5] = 0;
        pbVar43[6] = 0;
        pbVar43[7] = 0;
        pbVar60 = pbVar60 + param_1 + 0x108;
        pbVar60[0] = 0;
        pbVar60[1] = 0;
        pbVar60[2] = 0;
        pbVar60[3] = 0;
        pbVar60[4] = 0;
        pbVar60[5] = 0;
        pbVar60[6] = 0;
        pbVar60[7] = 0;
      }
      else if (uVar34 == 0x20) {
        lVar58 = (ulong)*pbVar26 * 0x101010101010101;
        *(long *)(pbVar60 + param_1 + 0x180 + 8) = lVar58;
        *(long *)(pbVar60 + param_1 + 0x180) = lVar58;
        *(long *)(pbVar60 + param_1 + 400 + 8) = lVar58;
        *(long *)(pbVar60 + param_1 + 400) = lVar58;
        lVar58 = (ulong)(byte)(&UNK_10dd74f77)[lVar61] * 0x101010101010101;
        *(long *)(pbVar60 + param_1 + 0x1a0 + 8) = lVar58;
        *(long *)(pbVar60 + param_1 + 0x1a0) = lVar58;
        *(long *)(pbVar60 + param_1 + 0x1b0 + 8) = lVar58;
        *(long *)(pbVar60 + param_1 + 0x1b0) = lVar58;
        pbVar43 = pbVar60 + param_1 + 0x100;
        pbVar43[8] = 0;
        pbVar43[9] = 0;
        pbVar43[10] = 0;
        pbVar43[0xb] = 0;
        pbVar43[0xc] = 0;
        pbVar43[0xd] = 0;
        pbVar43[0xe] = 0;
        pbVar43[0xf] = 0;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43[4] = 0;
        pbVar43[5] = 0;
        pbVar43[6] = 0;
        pbVar43[7] = 0;
        pbVar60 = pbVar60 + param_1 + 0x110;
        pbVar60[8] = 0;
        pbVar60[9] = 0;
        pbVar60[10] = 0;
        pbVar60[0xb] = 0;
        pbVar60[0xc] = 0;
        pbVar60[0xd] = 0;
        pbVar60[0xe] = 0;
        pbVar60[0xf] = 0;
        pbVar60[0] = 0;
        pbVar60[1] = 0;
        pbVar60[2] = 0;
        pbVar60[3] = 0;
        pbVar60[4] = 0;
        pbVar60[5] = 0;
        pbVar60[6] = 0;
        pbVar60[7] = 0;
      }
    }
    uVar65 = uVar33 - 1;
    bVar16 = 6 < uVar65;
    uVar13 = uVar65 == 7;
    switch(uVar65) {
    case 0:
      pbVar74[*(long *)(param_1 + 0x290) + 0x160] = *pbVar26;
      pbVar74[*(long *)(param_1 + 0x290) + 0x180] = (&UNK_10dd74f77)[lVar61];
      pbVar74[*(long *)(param_1 + 0x290) + 0xe0] = 0;
      break;
    case 1:
      *(ushort *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x160) = CONCAT11(*pbVar26,*pbVar26);
      *(ushort *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x180) =
           CONCAT11((&UNK_10dd74f77)[lVar61],(&UNK_10dd74f77)[lVar61]);
      lVar61 = *(long *)(param_1 + 0x290);
      (pbVar74 + lVar61 + 0xe0)[0] = 0;
      (pbVar74 + lVar61 + 0xe0)[1] = 0;
      break;
    case 2:
    case 4:
    case 5:
    case 6:
      break;
    case 3:
      *(uint *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x160) = (uint)*pbVar26 * 0x1010101;
      *(uint *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x180) =
           (uint)(byte)(&UNK_10dd74f77)[lVar61] * 0x1010101;
      pbVar74 = pbVar74 + *(long *)(param_1 + 0x290) + 0xe0;
      pbVar74[0] = 0;
      pbVar74[1] = 0;
      pbVar74[2] = 0;
      pbVar74[3] = 0;
      break;
    case 7:
      *(ulong *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x160) = (ulong)*pbVar26 * 0x101010101010101
      ;
      *(ulong *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x180) =
           (ulong)(byte)(&UNK_10dd74f77)[lVar61] * 0x101010101010101;
      goto code_r0x000104c0c578;
    default:
      if (uVar81 == 0x10) {
        bVar23 = *pbVar26;
        *(ulong *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x160) = (ulong)bVar23 * 0x101010101010101
        ;
        pbVar26 = pbVar74 + 8;
        *(ulong *)(pbVar26 + *(long *)(param_1 + 0x290) + 0x160) = (ulong)bVar23 * 0x101010101010101
        ;
        bVar23 = (&UNK_10dd74f77)[lVar61];
        *(ulong *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x180) = (ulong)bVar23 * 0x101010101010101
        ;
        *(ulong *)(pbVar26 + *(long *)(param_1 + 0x290) + 0x180) = (ulong)bVar23 * 0x101010101010101
        ;
        lVar61 = *(long *)(param_1 + 0x290);
        uVar13 = true;
        bVar16 = true;
      }
      else {
        bVar16 = 0x1f < uVar41;
        uVar13 = uVar41 == 0x20;
        if (!(bool)uVar13) break;
        lVar58 = (ulong)*pbVar26 * 0x101010101010101;
        *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x160) = lVar58;
        *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x168) = lVar58;
        *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x170) = lVar58;
        pbVar26 = pbVar74 + 0x18;
        *(long *)(pbVar26 + *(long *)(param_1 + 0x290) + 0x160) = lVar58;
        lVar61 = (ulong)(byte)(&UNK_10dd74f77)[lVar61] * 0x101010101010101;
        *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x180) = lVar61;
        *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x188) = lVar61;
        *(long *)(pbVar74 + *(long *)(param_1 + 0x290) + 400) = lVar61;
        *(long *)(pbVar26 + *(long *)(param_1 + 0x290) + 0x180) = lVar61;
        pbVar43 = pbVar74 + *(long *)(param_1 + 0x290) + 0xe0;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43[4] = 0;
        pbVar43[5] = 0;
        pbVar43[6] = 0;
        pbVar43[7] = 0;
        pbVar43 = pbVar74 + *(long *)(param_1 + 0x290) + 0xe8;
        pbVar43[0] = 0;
        pbVar43[1] = 0;
        pbVar43[2] = 0;
        pbVar43[3] = 0;
        pbVar43[4] = 0;
        pbVar43[5] = 0;
        pbVar43[6] = 0;
        pbVar43[7] = 0;
        lVar61 = *(long *)(param_1 + 0x290) + 0x10;
      }
      pbVar74 = pbVar74 + lVar61;
      pbVar74[0xe0] = 0;
      pbVar74[0xe1] = 0;
      pbVar74[0xe2] = 0;
      pbVar74[0xe3] = 0;
      pbVar74[0xe4] = 0;
      pbVar74[0xe5] = 0;
      pbVar74[0xe6] = 0;
      pbVar74[0xe7] = 0;
      pbVar74 = pbVar26;
code_r0x000104c0c578:
      pbVar74 = pbVar74 + *(long *)(param_1 + 0x290) + 0xe0;
      pbVar74[0] = 0;
      pbVar74[1] = 0;
      pbVar74[2] = 0;
      pbVar74[3] = 0;
      pbVar74[4] = 0;
      pbVar74[5] = 0;
      pbVar74[6] = 0;
      pbVar74[7] = 0;
    }
    if ((*(byte *)(*(long *)(lVar52 + 0x18) + 0xe8) & 1) != 0) {
      pbVar26 = (byte *)(*(long *)(param_1 + 0x2a0 +
                                  (ulong)(uVar34 + (*(uint *)(param_1 + 0x1c) & 0x1f) + 4) * 8) +
                         (long)*(int *)(param_1 + 0x18) * 0xc + 10);
      for (; pbVar82 != (byte *)0x0; pbVar82 = pbVar82 + -1) {
        pbVar26[-2] = pbStack_1c0[0x18] + 1;
        *(undefined4 *)(pbVar26 + -10) = *(undefined4 *)(pbStack_1c0 + 8);
        *pbVar26 = bVar22;
        pbVar26 = pbVar26 + 0xc;
      }
      bVar16 = uVar34 != 0;
      uVar13 = uVar34 == 1;
      if (uVar34 < 2) {
        uVar34 = 1;
      }
      plVar75 = (long *)(param_1 + 0x2a0 + ((ulong)*(uint *)(param_1 + 0x1c) & 0x1f) * 8 + 0x28);
      for (uVar57 = (ulong)(uVar34 - 1); uVar57 != 0; uVar57 = uVar57 - 1) {
        *(byte *)(*plVar75 + (long)(int)(*(int *)(param_1 + 0x18) + uVar41) * 0xc + -4) =
             pbStack_1c0[0x18] + 1;
        *(undefined4 *)(*plVar75 + (long)(int)(*(int *)(param_1 + 0x18) + uVar41) * 0xc + -0xc) =
             *(undefined4 *)(pbStack_1c0 + 8);
        *(byte *)(*plVar75 + (long)(int)(*(int *)(param_1 + 0x18) + uVar33) * 0xc + -2) = bVar22;
        plVar75 = plVar75 + 1;
      }
    }
    if (uVar85 != 0) {
      func_0x000104c12abc();
      if (!bVar16 || (bool)uVar13) {
                    /* WARNING: Could not recover jumptable at 0x000104c0c684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(ushort *)(&UNK_10dd6a95c + extraout_x8_56 * 2) * 4 + 0x104c0c688))();
        return;
      }
      if (extraout_w15_01 == 0x10) {
        *(undefined8 *)(param_1 + uVar83 + 600) = 0;
        *(undefined8 *)(param_1 + uVar83 + 0x250) = 0;
      }
      else if (extraout_w15_01 == 0x20) {
        puVar29 = (undefined8 *)(param_1 + 0x250 + uVar83);
        puVar29[1] = 0;
        *puVar29 = 0;
        lVar52 = param_1 + 0x250 + (uVar83 & 0xffffffff);
        *(undefined8 *)(lVar52 + 0x18) = 0;
        *(undefined8 *)(lVar52 + 0x10) = 0;
      }
      uVar13 = uVar9 - 1 == 7;
      pbVar62 = pbVar35;
      switch(uVar9 - 1) {
      case 0:
        func_0x000104c1236c(0);
        *(undefined1 *)(extraout_x8_x00145 + 0x230) = 0;
        pbVar62 = pbVar35;
        break;
      case 1:
        func_0x000104c1236c(0);
        *(undefined2 *)(extraout_x8_x00148 + 0x230) = 0;
        pbVar62 = pbVar35;
        break;
      case 2:
      case 4:
      case 5:
      case 6:
        break;
      case 3:
        func_0x000104c1236c(0);
        *(undefined4 *)(extraout_x8_x00149 + 0x230) = 0;
        pbVar62 = pbVar35;
        break;
      case 7:
        func_0x000104c1236c(0);
        *(undefined8 *)(extraout_x8_x00147 + 0x230) = 0;
        pbVar62 = pbVar35;
        break;
      default:
        uVar13 = uVar9 == 0x10;
        if ((bool)uVar13) {
          func_0x000104c1236c(0);
          func_0x000104c12ab0();
          *(undefined8 *)(extraout_x8_x00150 + (uVar77 & 0xffffffff) + 0x238) = 0;
          pbVar62 = pbVar35;
        }
        else {
          uVar13 = uVar9 == 0x20;
          if ((bool)uVar13) {
            func_0x000104c1236c(0);
            func_0x000104c12ab0();
            *(undefined8 *)(extraout_x8_x00146 + (uVar77 & 0xffffffff) + 0x238) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x290) + (uVar77 & 0xffffffff) + 0x240) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x290) + (uVar77 & 0xffffffff) + 0x248) = 0;
            pbVar62 = pbVar35;
          }
        }
      }
    }
    goto LAB_104c10084;
  }
  pbVar26 = pbStack_1c0;
  (**(code **)(lVar52 + 0xcd8))(param_1);
  uVar25 = (uint)pbVar26;
  uVar32 = (uint)param_3;
  func_0x000104c12738(pbStack_1c0[8]);
  if (!(bool)uVar13 || (bool)uVar18) {
                    /* WARNING: Could not recover jumptable at 0x000104c0a824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dd6a914)[extraout_x10] * 4 + 0x104c0a828))();
    return;
  }
  if (uVar34 == 0x10) {
    lVar61 = extraout_x8_00 * 0x101010101010101;
    lVar52 = lVar61;
    func_0x000104c129d8();
    *(long *)(extraout_x10_00 + 0x28) = lVar52;
    *(long *)(extraout_x10_00 + 0x20) = lVar61;
    *(undefined8 *)(extraout_x10_00 + 0x108) = 0x101010101010101;
    *(undefined8 *)(extraout_x10_00 + 0x100) = 0x101010101010101;
    lVar52 = extraout_x8_02;
    uVar55 = extraout_w9_03;
  }
  else {
    lVar52 = extraout_x8_00;
    uVar55 = extraout_w9_02;
    if (uVar34 == 0x20) {
      lVar61 = extraout_x8_00 * 0x101010101010101;
      *(long *)(pbVar60 + param_1 + 0x20 + 8) = lVar61;
      *(long *)(pbVar60 + param_1 + 0x20) = lVar61;
      *(long *)(pbVar60 + param_1 + 0x30 + 8) = lVar61;
      *(long *)(pbVar60 + param_1 + 0x30) = lVar61;
      pbVar26 = pbVar60 + param_1 + 0x100;
      pbVar26[8] = 1;
      pbVar26[9] = 1;
      pbVar26[10] = 1;
      pbVar26[0xb] = 1;
      pbVar26[0xc] = 1;
      pbVar26[0xd] = 1;
      pbVar26[0xe] = 1;
      pbVar26[0xf] = 1;
      pbVar26[0] = 1;
      pbVar26[1] = 1;
      pbVar26[2] = 1;
      pbVar26[3] = 1;
      pbVar26[4] = 1;
      pbVar26[5] = 1;
      pbVar26[6] = 1;
      pbVar26[7] = 1;
      pbVar60 = pbVar60 + param_1 + 0x110;
      pbVar60[8] = 1;
      pbVar60[9] = 1;
      pbVar60[10] = 1;
      pbVar60[0xb] = 1;
      pbVar60[0xc] = 1;
      pbVar60[0xd] = 1;
      pbVar60[0xe] = 1;
      pbVar60[0xf] = 1;
      pbVar60[0] = 1;
      pbVar60[1] = 1;
      pbVar60[2] = 1;
      pbVar60[3] = 1;
      pbVar60[4] = 1;
      pbVar60[5] = 1;
      pbVar60[6] = 1;
      pbVar60[7] = 1;
    }
  }
  uVar13 = uVar33 - 1 == 7;
  switch(uVar33 - 1) {
  case 0:
    pbVar74[*(long *)(param_1 + 0x290)] = (byte)lVar52;
    func_0x000104c123fc();
    *(undefined1 *)(extraout_x8_03 + 0xe0) = 1;
    break;
  case 1:
    *(undefined2 *)(pbVar74 + *(long *)(param_1 + 0x290)) = uVar55;
    func_0x000104c123fc();
    *(undefined2 *)(extraout_x8_08 + 0xe0) = 0x101;
    break;
  case 2:
  case 4:
  case 5:
  case 6:
    break;
  case 3:
    *(int *)(pbVar74 + *(long *)(param_1 + 0x290)) = (int)lVar52 * 0x1010101;
    func_0x000104c1246c();
    *(undefined4 *)(extraout_x8_09 + 0xe0) = extraout_w9_13;
    break;
  case 7:
    func_0x000104c12394();
    *(undefined8 *)(pbVar74 + extraout_x10_02) = extraout_x8_07;
    goto code_r0x000104c0ac00;
  default:
    uVar13 = uVar41 == 0x10;
    if ((bool)uVar13) {
      func_0x000104c12394();
      *(undefined8 *)(pbVar74 + extraout_x10_03) = extraout_x8_10;
      *(undefined8 *)(pbVar74 + *(long *)(param_1 + 0x290) + 8) = extraout_x8_10;
      func_0x000104c129a8();
      lVar52 = extraout_x8_11;
      uVar59 = extraout_x9_02;
    }
    else {
      uVar13 = uVar41 == 0x20;
      if (!(bool)uVar13) break;
      func_0x000104c12394();
      *(undefined8 *)(pbVar74 + extraout_x10_01) = extraout_x8_04;
      *(undefined8 *)(pbVar74 + *(long *)(param_1 + 0x290) + 8) = extraout_x8_04;
      *(undefined8 *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x10) = extraout_x8_04;
      *(undefined8 *)(pbVar74 + *(long *)(param_1 + 0x290) + 0x18) = extraout_x8_04;
      *(undefined8 *)(pbVar74 + *(long *)(param_1 + 0x290) + 0xe0) = extraout_x9;
      func_0x000104c129a8();
      *(undefined8 *)(extraout_x8_05 + 0xe0) = extraout_x9_00;
      func_0x000104c1258c();
      lVar52 = extraout_x8_06;
      uVar59 = extraout_x9_01;
    }
    *(undefined8 *)(lVar52 + 0xe0) = uVar59;
code_r0x000104c0ac00:
    func_0x000104c1246c();
    *(undefined8 *)(extraout_x8_12 + 0xe0) = extraout_x9_03;
  }
  func_0x000104c125e4();
  if ((extraout_x8_13 & 1) != 0) {
    puVar12 = (undefined1 *)
              (*(long *)(param_1 + 0x2a0 +
                        (ulong)(uVar34 + (*(uint *)(param_1 + 0x1c) & 0x1f) + 4) * 8) +
               (long)*(int *)(param_1 + 0x18) * 0xc + 10);
    for (; pbVar82 != (byte *)0x0; pbVar82 = pbVar82 + -1) {
      puVar12[-2] = 0;
      *puVar12 = extraout_w15;
      puVar12 = puVar12 + 0xc;
    }
    uVar13 = uVar34 == 1;
    if (uVar34 < 2) {
      uVar34 = 1;
    }
    plVar75 = (long *)(param_1 + 0x2a0 + ((ulong)*(uint *)(param_1 + 0x1c) & 0x1f) * 8 + 0x28);
    for (uVar57 = (ulong)(uVar34 - 1); uVar57 != 0; uVar57 = uVar57 - 1) {
      *(undefined1 *)(*plVar75 + (long)(int)(*(int *)(param_1 + 0x18) + uVar41) * 0xc + -4) = 0;
      *(undefined1 *)(*plVar75 + (long)(int)(*(int *)(param_1 + 0x18) + uVar41) * 0xc + -2) =
           extraout_w15;
      plVar75 = plVar75 + 1;
    }
  }
  pbVar62 = param_5;
  if (uVar85 != 0) {
    switch(uVar2) {
    case 1:
      func_0x000104c12478();
      *(undefined1 *)(param_1 + uVar83 + 0x250) = extraout_w8;
      break;
    case 2:
      func_0x000104c12478();
      *(ushort *)(param_1 + uVar83 + 0x250) = (ushort)extraout_w8_26 | (ushort)(extraout_w8_26 << 8)
      ;
      break;
    case 3:
    case 5:
    case 6:
    case 7:
      break;
    case 4:
      func_0x000104c123e8();
      *(undefined4 *)(param_1 + uVar83 + 0x250) = extraout_w8_27;
      break;
    case 8:
      func_0x000104c12208();
      *(undefined8 *)(param_1 + uVar83 + 0x250) = extraout_x8_16;
      break;
    default:
      if (uVar2 == 0x10) {
        func_0x000104c12208();
        *(undefined8 *)(param_1 + uVar83 + 600) = extraout_x8_17;
        *(undefined8 *)(param_1 + uVar83 + 0x250) = extraout_x8_17;
      }
      else if (uVar2 == 0x20) {
        func_0x000104c12208();
        puVar29 = (undefined8 *)(param_1 + 0x250 + uVar83);
        puVar29[1] = extraout_x8_14;
        *puVar29 = extraout_x8_14;
        lVar52 = param_1 + 0x250 + (uVar83 & 0xffffffff);
        *(undefined8 *)(lVar52 + 0x18) = extraout_x8_14;
        *(undefined8 *)(lVar52 + 0x10) = extraout_x8_14;
      }
    }
    uVar13 = uVar9 - 1 == 7;
    pbVar62 = param_5;
    switch(uVar9 - 1) {
    case 0:
      func_0x000104c12478(0);
      func_0x000104c12360();
      *(undefined1 *)(extraout_x9_04 + 0x230) = extraout_w8_00;
      pbVar62 = param_5;
      break;
    case 1:
      func_0x000104c12478(0);
      func_0x000104c122d0();
      *(undefined2 *)(extraout_x9_07 + 0x230) = extraout_w8_13;
      pbVar62 = param_5;
      break;
    case 2:
    case 4:
    case 5:
    case 6:
      break;
    case 3:
      func_0x000104c123e8(0);
      func_0x000104c12360();
      *(undefined4 *)(extraout_x9_08 + 0x230) = extraout_w8_28;
      pbVar62 = param_5;
      break;
    case 7:
      func_0x000104c12208(0);
      func_0x000104c12360();
      *(undefined8 *)(extraout_x9_06 + 0x230) = extraout_x8_19;
      pbVar62 = param_5;
      break;
    default:
      uVar13 = uVar9 == 0x10;
      if ((bool)uVar13) {
        func_0x000104c12208(0);
        func_0x000104c12360();
        func_0x000104c12be4();
        *(undefined8 *)(extraout_x9_09 + (uVar77 & 0xffffffff) + 0x238) = extraout_x8_20;
        pbVar62 = param_5;
      }
      else {
        uVar13 = uVar9 == 0x20;
        if ((bool)uVar13) {
          func_0x000104c12208(0);
          func_0x000104c12360();
          func_0x000104c12be4();
          *(undefined8 *)(extraout_x9_05 + (uVar77 & 0xffffffff) + 0x238) = extraout_x8_18;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + (uVar77 & 0xffffffff) + 0x240) =
               extraout_x8_18;
          *(undefined8 *)(*(long *)(param_1 + 0x290) + (uVar77 & 0xffffffff) + 0x248) =
               extraout_x8_18;
          pbVar62 = param_5;
        }
      }
    }
  }
LAB_104c10084:
  func_0x000104c1222c(uStack_70);
  if ((bool)uVar13) {
    return;
  }
  ___stack_chk_fail();
FUN_104c108d0:
  pbVar39 = pbVar39 + (long)(int)pbVar62 + (long)pbVar42 * (long)(int)uVar32;
  bVar23 = 8;
  while( true ) {
    for (uVar77 = 0; (uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU)) != uVar77; uVar77 = uVar77 + 1)
    {
      if (pbVar39[uVar77] <= bVar23) {
        bVar23 = pbVar39[uVar77];
      }
    }
    if ((int)pbVar38 < 2) break;
    pbVar39 = pbVar39 + (long)pbVar42;
    pbVar38 = (byte *)(ulong)((int)pbVar38 - 1);
    if (bVar23 == 0) {
      return;
    }
  }
  return;
}



/* Entry: 104c108d0; end: 104c109ff;  */

void FUN_104c108d0(undefined8 param_1,int param_2,int param_3,uint param_4,int param_5,long param_6,
                  long param_7)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = param_6 + param_7 * param_2 + (long)param_3;
  bVar1 = 8;
  while( true ) {
    for (uVar3 = 0; (param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU)) != uVar3; uVar3 = uVar3 + 1) {
      if (*(byte *)(lVar2 + uVar3) <= bVar1) {
        bVar1 = *(byte *)(lVar2 + uVar3);
      }
    }
    if (param_5 < 2) break;
    lVar2 = lVar2 + param_7;
    param_5 = param_5 + -1;
    if (bVar1 == 0) {
      return;
    }
  }
  return;
}



/* Entry: 104c10a00; end: 104c10a47;  */

uint FUN_104c10a00(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = param_1;
    func_0x000100daf8ec(param_1);
    uVar2 = (uint)uVar1 | uVar2 << 1;
  }
  return uVar2;
}



/* Entry: 104c10a48; end: 104c10de3;  */

void FUN_104c10a48(long *param_1,undefined8 param_2,long param_3,ulong param_4,int param_5,
                  int param_6,uint param_7,int param_8)

{
  long *plVar1;
  byte *pbVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  long lVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  undefined1 *puVar27;
  uint uVar28;
  ulong uVar29;
  byte *pbVar30;
  
  plVar1 = param_1 + 0x690;
  pbVar2 = (byte *)(param_1 + 0x448);
  lVar24 = param_1[2];
  uVar29 = (ulong)(param_7 << 2);
  plVar3 = param_1 + 0x408;
  param_3 = param_3 + 0xb;
  uVar26 = param_4 & 0xffffffff;
  uVar10 = (uint)*(byte *)(param_3 + (param_4 & 0xffffffff));
  uVar10 = (2 << (ulong)(((uint)LZCOUNT(uVar10) ^ 0x1f) & 0x1f)) - uVar10;
  uVar28 = (int)lVar24 + 0x3500;
  FUN_104c10a00();
  if (uVar10 <= uVar28) {
    iVar9 = (int)lVar24 + 0x3500;
    func_0x000100daf8ec();
    uVar28 = (iVar9 - uVar10) + uVar28 * 2;
  }
  *(char *)plVar1 = (char)uVar28;
  bVar4 = *(byte *)(param_3 + uVar26);
  iVar9 = param_5 * 4;
  iVar8 = iVar9 + -1;
  lVar15 = 1;
  do {
    lVar25 = lVar15;
    if (iVar8 <= lVar15) {
      lVar25 = (long)iVar8;
    }
    if ((param_6 + param_5) * 4 + -1 <= lVar15) {
                    /* WARNING: Could not recover jumptable at 0x000104c10de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xf610))(param_2,plVar1,uVar29,param_8 << 2,(long)iVar9,param_6 * 4);
      return;
    }
    lVar11 = 0;
    puVar27 = (undefined1 *)
              ((long)param_1 + lVar25 + (ulong)param_7 * 4 * (lVar15 - lVar25) + 0x3480);
    iVar14 = (int)lVar15;
    iVar12 = iVar14;
    if (iVar8 <= iVar14) {
      iVar12 = iVar8;
    }
    uVar28 = iVar14 + param_6 * -4;
    if (0x7fffffff < uVar28) {
      uVar28 = 0xffffffff;
    }
    bVar16 = iVar9 <= lVar15;
    puVar13 = (undefined1 *)((long)plVar1 + (long)iVar12 + (lVar15 - iVar12) * uVar29);
    for (; (int)uVar28 < iVar12; iVar12 = iVar12 + -1) {
      pbVar30 = (byte *)(plVar3 + lVar11);
      if (iVar12 < 1) {
        pbVar2[lVar11] = 0;
        bVar5 = puVar13[-uVar29];
LAB_104c10c68:
        *(byte *)(plVar3 + lVar11) = bVar5;
        iVar14 = 1;
        uVar10 = 1 << (ulong)(bVar5 & 0x1f);
      }
      else {
        if (!bVar16) {
          pbVar2[lVar11] = 0;
          bVar5 = puVar13[-1];
          goto LAB_104c10c68;
        }
        bVar7 = puVar13[-1];
        bVar5 = puVar13[-uVar29];
        bVar6 = puVar13[~uVar29];
        uVar22 = (uint)bVar6;
        uVar17 = (uint)bVar5;
        if ((uint)bVar5 == (uint)bVar7 && bVar5 == uVar22) {
          pbVar2[lVar11] = 4;
          *(byte *)(plVar3 + lVar11) = bVar7;
          iVar14 = 1;
          uVar10 = 1 << (ulong)(uVar17 & 0x1f);
        }
        else {
          uVar10 = 1 << (ulong)(uVar22 & 0x1f);
          uVar19 = (uint)bVar7;
          uVar18 = (uint)bVar5;
          uVar20 = (uint)bVar7;
          if (uVar17 == uVar19) {
            pbVar2[lVar11] = 3;
            *pbVar30 = bVar7;
            pbVar30[1] = bVar6;
            uVar10 = uVar10 | 1 << (ulong)(uVar18 & 0x1f);
            iVar14 = 2;
          }
          else if (uVar18 == uVar22 || uVar19 == uVar22) {
            iVar14 = 2;
            pbVar2[lVar11] = 2;
            *pbVar30 = bVar6;
            if (uVar17 != bVar6) {
              uVar20 = uVar18;
            }
            pbVar30[1] = (byte)uVar20;
            uVar10 = 1 << (ulong)(uVar20 & 0x1f) | uVar10;
          }
          else {
            pbVar2[lVar11] = 1;
            uVar22 = uVar18;
            if (uVar19 <= uVar18) {
              uVar22 = uVar20;
            }
            *pbVar30 = (byte)uVar22;
            if (uVar18 <= uVar19) {
              uVar17 = uVar20;
            }
            pbVar30[1] = (byte)uVar17;
            pbVar30[2] = bVar6;
            uVar10 = 1 << (ulong)(uVar22 & 0x1f) | 1 << (ulong)(uVar17 & 0x1f) | uVar10;
            iVar14 = 3;
          }
        }
      }
      uVar17 = 1;
      for (iVar21 = 0; iVar21 != 8; iVar21 = iVar21 + 1) {
        if ((uVar17 & uVar10) == 0) {
          pbVar30[iVar14] = (byte)iVar21;
          iVar14 = iVar14 + 1;
        }
        uVar17 = uVar17 << 1;
      }
      lVar11 = lVar11 + 1;
      puVar13 = puVar13 + (uVar29 - 1);
      bVar16 = true;
    }
    plVar23 = plVar3;
    pbVar30 = pbVar2;
    for (; (int)uVar28 < lVar25; lVar25 = lVar25 + -1) {
      lVar11 = lVar24 + 0x3500;
      func_0x000100daf560(lVar11,lVar24 + uVar26 * 0x230 + (ulong)bVar4 * 0x50 + 0x2440 +
                                 (ulong)*pbVar30 * 0x10,(ulong)*(byte *)(param_3 + uVar26) - 1);
      *puVar27 = *(undefined1 *)((long)plVar23 + (long)(int)lVar11);
      plVar23 = plVar23 + 1;
      puVar27 = puVar27 + (uVar29 - 1);
      pbVar30 = pbVar30 + 1;
    }
    lVar15 = lVar15 + 1;
  } while( true );
}



/* Entry: 104c10de4; end: 104c10e53;  */

void FUN_104c10de4(long param_1,short *param_2)

{
  short sVar1;
  ulong uVar2;
  
  uVar2 = param_1 + 0x3500;
  func_0x000104c125dc(uVar2,param_1 + 0x31c0);
  sVar1 = (short)uVar2;
  if (((uint)uVar2 >> 1 & 1) != 0) {
    func_0x000104c126f0(0x30c0);
    *param_2 = *param_2 + sVar1;
  }
  if ((uVar2 & 1) != 0) {
    func_0x000104c126f0(0x3140);
    param_2[1] = param_2[1] + sVar1;
  }
  return;
}



/* Entry: 104c10e54; end: 104c11267;  */

void FUN_104c10e54(long param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 extraout_w8;
  undefined2 extraout_w8_00;
  undefined2 extraout_w8_01;
  undefined2 extraout_w8_02;
  undefined2 extraout_w8_03;
  undefined2 extraout_w8_04;
  undefined2 extraout_w8_05;
  undefined2 extraout_w8_06;
  undefined4 extraout_w8_07;
  byte *extraout_x8;
  byte *extraout_x8_00;
  byte *extraout_x8_01;
  byte *pbVar5;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined1 uVar6;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  undefined1 extraout_w9_01;
  undefined1 extraout_w9_02;
  undefined1 extraout_w9_03;
  undefined1 extraout_w9_04;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long lVar7;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x10_02;
  long extraout_x10_03;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  long extraout_x10_07;
  long extraout_x10_08;
  ulong uVar8;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong extraout_x13_01;
  ulong extraout_x13_02;
  ulong extraout_x13_03;
  ulong extraout_x13_04;
  ulong extraout_x13_05;
  ulong extraout_x13_06;
  ulong extraout_x13_07;
  undefined *extraout_x14;
  undefined *extraout_x14_00;
  undefined *extraout_x14_01;
  undefined *extraout_x14_02;
  undefined *extraout_x14_03;
  undefined *extraout_x14_04;
  undefined *extraout_x14_05;
  undefined *extraout_x14_06;
  undefined *extraout_x14_07;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 in_stack_0000000c;
  
  func_0x000104c12c6c();
  lVar12 = *(long *)(param_1 + 8);
  uVar8 = param_3 & 0xffffffff;
  lVar1 = (param_3 & 0xffffffff) * 4;
  pbVar5 = &UNK_10dd74d48 + lVar1;
  bVar2 = *pbVar5;
  bVar3 = (&UNK_10dd74d49)[lVar1];
  puVar9 = &UNK_10dd74e38;
  in_stack_0000000c = 0;
  bVar4 = (&UNK_10dd74e38)[(param_3 & 0xffffffff) * 4];
  *(byte *)(param_2 + 0x1a) = bVar4;
  lVar7 = *(long *)(lVar12 + 0x18);
  uVar14 = (uint)bVar2;
  if (*(char *)(param_2 + 6) == '\0') {
    if ((*(char *)(lVar7 + (ulong)*(byte *)(param_2 + 4) + 0x328) != '\0') || (bVar4 == 0)) {
      *(undefined1 *)(param_2 + 7) = 0;
      *(undefined1 *)(param_2 + 0x1a) = 0;
      if (*(int *)(*(long *)(lVar12 + 0x18) + 0x374) != 2) {
        in_stack_0000000c._2_2_ = 0;
        uVar6 = 0;
        goto LAB_104c1114c;
      }
      switch((uint)bVar3) {
      case 1:
        *(undefined1 *)(param_1 + (param_5 & 0xffffffff) + 0x1e0) = 0;
        break;
      case 2:
        *(undefined2 *)(param_1 + (param_5 & 0xffffffff) + 0x1e0) = 0;
        break;
      case 3:
      case 5:
      case 6:
      case 7:
        break;
      case 4:
        *(undefined4 *)(param_1 + (param_5 & 0xffffffff) + 0x1e0) = 0;
        break;
      case 8:
        param_1 = param_1 + (param_5 & 0xffffffff);
code_r0x000104c111bc:
        *(undefined8 *)(param_1 + 0x1e0) = 0;
        break;
      default:
        if (bVar3 == 0x10) {
          param_1 = param_1 + (param_5 & 0xffffffff);
          *(undefined8 *)(param_1 + 0x1e8) = 0;
          goto code_r0x000104c111bc;
        }
        if (bVar3 == 0x20) {
          param_1 = param_1 + (param_5 & 0xffffffff);
          *(undefined8 *)(param_1 + 0x1e8) = 0;
          *(undefined8 *)(param_1 + 0x1e0) = 0;
          *(undefined8 *)(param_1 + 0x1f8) = 0;
          *(undefined8 *)(param_1 + 0x1f0) = 0;
        }
      }
      in_stack_0000000c._2_2_ = 0;
      uVar6 = 0;
      switch(uVar14) {
      case 1:
        func_0x000104c12260();
        *(undefined1 *)(extraout_x10 + 0x1c0) = 0;
        uVar6 = extraout_w9;
        in_stack_0000000c._2_2_ = extraout_w8_01;
        break;
      case 2:
        func_0x000104c12260();
        *(undefined2 *)(extraout_x10_05 + 0x1c0) = 0;
        uVar6 = extraout_w9_02;
        in_stack_0000000c._2_2_ = extraout_w8_04;
        break;
      case 3:
      case 5:
      case 6:
      case 7:
        break;
      case 4:
        func_0x000104c12260();
        *(undefined4 *)(extraout_x10_06 + 0x1c0) = 0;
        uVar6 = extraout_w9_03;
        in_stack_0000000c._2_2_ = extraout_w8_05;
        break;
      case 8:
        func_0x000104c12260();
        *(undefined8 *)(extraout_x10_04 + 0x1c0) = 0;
        uVar6 = extraout_w9_01;
        in_stack_0000000c._2_2_ = extraout_w8_03;
        break;
      default:
        if (uVar14 == 0x10) {
          func_0x000104c12260();
          *(undefined8 *)(extraout_x10_07 + 0x1c0) = 0;
          func_0x000104c124f0();
          *(undefined8 *)(extraout_x10_08 + 0x1c8) = 0;
          uVar6 = extraout_w9_04;
          in_stack_0000000c._2_2_ = extraout_w8_06;
        }
        else {
          uVar6 = 0;
          if (uVar14 == 0x20) {
            func_0x000104c12260();
            *(undefined8 *)(extraout_x10_00 + 0x1c0) = 0;
            func_0x000104c124f0();
            *(undefined8 *)(extraout_x10_01 + 0x1c8) = 0;
            func_0x000104c124f0();
            *(undefined8 *)(extraout_x10_02 + 0x1d0) = 0;
            func_0x000104c124f0();
            *(undefined8 *)(extraout_x10_03 + 0x1d8) = 0;
            uVar6 = extraout_w9_00;
            in_stack_0000000c._2_2_ = extraout_w8_02;
          }
        }
      }
      goto LAB_104c1114c;
    }
    if (*(int *)(lVar7 + 0x374) == 2) {
      iVar10 = 0;
      for (uVar15 = 0; uVar15 < bVar3; uVar15 = uVar15 + bVar2) {
        iVar11 = 0;
        for (uVar13 = 0; uVar13 < uVar14; uVar13 = uVar13 + bVar2) {
          FUN_104c11ea4(param_1,*(undefined1 *)(param_2 + 0x1a),0,&stack0x0000000c,iVar11,iVar10);
          bVar2 = (&UNK_10dd74da0)[(ulong)bVar4 * 8];
          *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (uint)bVar2;
          iVar11 = iVar11 + 1;
        }
        bVar2 = (&UNK_10dd74da1)[(ulong)bVar4 * 8];
        *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar13;
        *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uint)bVar2;
        iVar10 = iVar10 + 1;
      }
      *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - uVar15;
      *(undefined *)(param_2 + 7) = (&UNK_10dd74e38)[(ulong)*(uint *)(lVar12 + 0x878) + uVar8 * 4];
      uVar6 = (undefined1)in_stack_0000000c;
      goto LAB_104c1114c;
    }
  }
  else if (*(int *)(lVar7 + 0x374) == 2) {
    switch(bVar3) {
    case 1:
      *(undefined *)(param_1 + (param_5 & 0xffffffff) + 0x1e0) = (&UNK_10dd74d4b)[lVar1];
      puVar9 = &UNK_10dd74e38;
      break;
    case 2:
      *(ushort *)(param_1 + (param_5 & 0xffffffff) + 0x1e0) =
           CONCAT11((&UNK_10dd74d4b)[lVar1],(&UNK_10dd74d4b)[lVar1]);
      puVar9 = &UNK_10dd74e38;
      break;
    case 3:
    case 5:
    case 6:
    case 7:
      break;
    case 4:
      *(uint *)(param_1 + (param_5 & 0xffffffff) + 0x1e0) =
           (uint)(byte)(&UNK_10dd74d4b)[lVar1] * 0x1010101;
      puVar9 = &UNK_10dd74e38;
      break;
    case 8:
      func_0x000104c12848();
      *(undefined8 *)(param_1 + (param_5 & 0xffffffff) + 0x1e0) = extraout_x9_00;
      pbVar5 = extraout_x8_00;
      uVar8 = extraout_x13_00;
      puVar9 = extraout_x14_00;
      break;
    default:
      if (bVar3 == 0x10) {
        func_0x000104c12848();
        param_1 = param_1 + (param_5 & 0xffffffff);
        *(undefined8 *)(param_1 + 0x1e8) = extraout_x9_01;
        *(undefined8 *)(param_1 + 0x1e0) = extraout_x9_01;
        pbVar5 = extraout_x8_01;
        uVar8 = extraout_x13_01;
        puVar9 = extraout_x14_01;
      }
      else if (bVar3 == 0x20) {
        func_0x000104c12848();
        param_1 = param_1 + (param_5 & 0xffffffff);
        *(undefined8 *)(param_1 + 0x1e8) = extraout_x9;
        *(undefined8 *)(param_1 + 0x1e0) = extraout_x9;
        *(undefined8 *)(param_1 + 0x1f8) = extraout_x9;
        *(undefined8 *)(param_1 + 0x1f0) = extraout_x9;
        pbVar5 = extraout_x8;
        uVar8 = extraout_x13;
        puVar9 = extraout_x14;
      }
    }
    switch(uVar14) {
    case 1:
      func_0x000104c124fc(pbVar5[2]);
      *(undefined1 *)(extraout_x9_02 + 0x1c0) = extraout_w8;
      uVar8 = extraout_x13_02;
      puVar9 = extraout_x14_02;
      break;
    case 2:
      func_0x000104c124fc(CONCAT11(pbVar5[2],pbVar5[2]));
      *(undefined2 *)(extraout_x9_06 + 0x1c0) = extraout_w8_00;
      uVar8 = extraout_x13_05;
      puVar9 = extraout_x14_05;
      break;
    case 3:
    case 5:
    case 6:
    case 7:
      break;
    case 4:
      func_0x000104c124fc((uint)pbVar5[2] * 0x1010101);
      *(undefined4 *)(extraout_x9_07 + 0x1c0) = extraout_w8_07;
      uVar8 = extraout_x13_06;
      puVar9 = extraout_x14_06;
      break;
    case 8:
      func_0x000104c12378();
      uVar8 = extraout_x13_04;
      puVar9 = extraout_x14_04;
      break;
    default:
      if (uVar14 == 0x10) {
        func_0x000104c12378();
        func_0x000104c124fc();
        *(undefined8 *)(extraout_x9_08 + 0x1c8) = extraout_x8_05;
        uVar8 = extraout_x13_07;
        puVar9 = extraout_x14_07;
      }
      else if (uVar14 == 0x20) {
        func_0x000104c12378();
        func_0x000104c124fc();
        *(undefined8 *)(extraout_x9_03 + 0x1c8) = extraout_x8_02;
        func_0x000104c124fc();
        *(undefined8 *)(extraout_x9_04 + 0x1d0) = extraout_x8_03;
        func_0x000104c124fc();
        *(undefined8 *)(extraout_x9_05 + 0x1d8) = extraout_x8_04;
        uVar8 = extraout_x13_03;
        puVar9 = extraout_x14_03;
      }
    }
  }
  in_stack_0000000c._2_2_ = 0;
  uVar6 = 0;
  *(undefined *)(param_2 + 7) = puVar9[(ulong)*(uint *)(lVar12 + 0x878) + uVar8 * 4];
LAB_104c1114c:
  *(undefined1 *)(param_2 + 0x1d) = uVar6;
  *(undefined2 *)(param_2 + 0x1e) = in_stack_0000000c._2_2_;
  return;
}



/* Entry: 104c11268; end: 104c112a7;  */

void FUN_104c11268(long param_1,ushort *param_2)

{
  if (*(char *)(param_1 + 0x10d) != '\0') {
    param_2[1] = (param_2[1] - ((short)param_2[1] >> 0xf)) + 3 & 0xfff8;
    *param_2 = (*param_2 - ((short)*param_2 >> 0xf)) + 3 & 0xfff8;
    return;
  }
  if (*(char *)(param_1 + 0x1ac) != '\0') {
    return;
  }
  param_2[1] = param_2[1] - ((short)param_2[1] >> 0xf) & 0xfffe;
  *param_2 = *param_2 - ((short)*param_2 >> 0xf) & 0xfffe;
  return;
}



/* Entry: 104c112a8; end: 104c11683;  */

ulong FUN_104c112a8(undefined8 param_1,long param_2,uint param_3,uint param_4,int param_5,
                   int param_6)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  ulong uVar4;
  byte bVar5;
  int extraout_w8;
  int extraout_w8_00;
  uint extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  uint extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  uint extraout_w8_07;
  int extraout_w8_08;
  int extraout_w8_09;
  int extraout_w8_10;
  int extraout_w8_11;
  uint extraout_w8_12;
  int extraout_w8_13;
  uint uVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong uVar7;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  undefined8 extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined8 extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  undefined8 extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  byte bVar8;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  long extraout_x9_11;
  long extraout_x9_12;
  long extraout_x9_13;
  long extraout_x9_14;
  long extraout_x9_15;
  long extraout_x9_16;
  long lVar9;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x10_02;
  long extraout_x10_03;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  
  func_0x000104c12304();
  if ((param_5 != 0) && (func_0x000104c12c88(), extraout_w8 == 0)) {
    func_0x000104c12574();
    in_OV = SBORROW8(extraout_x10,3);
    in_NG = extraout_x10 + -3 < 0;
    in_ZR = extraout_x10 == 3;
    lVar9 = extraout_x9;
    if (extraout_x10 < 4) {
      func_0x000104c12564();
      lVar9 = extraout_x9_00;
    }
    if (*(char *)(lVar9 + 0x100) != '\0') {
      func_0x000104c12bb0();
      in_OV = SBORROW8(extraout_x8_00,3);
      in_NG = extraout_x8_00 + -3 < 0;
      in_ZR = extraout_x8_00 == 3;
      if (extraout_x8_00 < 4) {
        func_0x000104c12554();
      }
    }
  }
  if ((param_6 != 0) && (func_0x000104c12978(), extraout_w8_00 == 0)) {
    func_0x000104c12544();
    in_OV = SBORROW8(extraout_x10_00,3);
    in_NG = extraout_x10_00 + -3 < 0;
    in_ZR = extraout_x10_00 == 3;
    lVar9 = extraout_x9_01;
    if (extraout_x10_00 < 4) {
      func_0x000104c12564();
      lVar9 = extraout_x9_02;
    }
    if (*(char *)(lVar9 + 0x100) != '\0') {
      func_0x000104c12adc();
      in_OV = SBORROW8(extraout_x8_01,3);
      in_NG = extraout_x8_01 + -3 < 0;
      in_ZR = extraout_x8_01 == 3;
      if (extraout_x8_01 < 4) {
        func_0x000104c12554();
      }
    }
  }
  func_0x000104c12ba4(0);
  uVar6 = 0;
  if (in_NG == in_OV) {
    uVar6 = extraout_w8_01;
  }
  if ((bool)in_ZR) {
    uVar6 = 1;
  }
  uVar4 = (ulong)uVar6;
  func_0x000104c1222c(extraout_x8);
  if ((bool)in_ZR) {
    return uVar4;
  }
  ___stack_chk_fail();
  func_0x000104c12304();
  if ((param_5 != 0) && (func_0x000104c12c88(), extraout_w8_02 == 0)) {
    uVar7 = (ulong)param_4;
    lVar9 = uVar4 + uVar7;
    uVar6 = (int)*(char *)(lVar9 + 0x120) ^ 2;
    in_OV = SBORROW4(uVar6,1);
    in_NG = (int)(uVar6 - 1) < 0;
    in_ZR = uVar6 == 1;
    if (uVar6 < 2) {
      func_0x000104c12960();
      uVar7 = extraout_x8_03;
      lVar9 = extraout_x9_03;
    }
    if (*(char *)(lVar9 + 0x100) != '\0') {
      uVar6 = (int)*(char *)(uVar4 + uVar7 + 0x140) ^ 2;
      in_OV = SBORROW4(uVar6,1);
      in_NG = (int)(uVar6 - 1) < 0;
      in_ZR = uVar6 == 1;
      if (uVar6 < 2) {
        func_0x000104c12948();
      }
    }
  }
  if ((param_6 != 0) && (func_0x000104c12978(), extraout_w8_03 == 0)) {
    uVar4 = (ulong)param_3;
    lVar9 = param_2 + uVar4;
    uVar6 = (int)*(char *)(lVar9 + 0x120) ^ 2;
    in_OV = SBORROW4(uVar6,1);
    in_NG = (int)(uVar6 - 1) < 0;
    in_ZR = uVar6 == 1;
    if (uVar6 < 2) {
      func_0x000104c12960();
      uVar4 = extraout_x8_04;
      lVar9 = extraout_x9_04;
    }
    if (*(char *)(lVar9 + 0x100) != '\0') {
      uVar6 = (int)*(char *)(param_2 + uVar4 + 0x140) ^ 2;
      in_OV = SBORROW4(uVar6,1);
      in_NG = (int)(uVar6 - 1) < 0;
      in_ZR = uVar6 == 1;
      if (uVar6 < 2) {
        func_0x000104c12948();
      }
    }
  }
  func_0x000104c12ba4(0);
  uVar6 = 0;
  if (in_NG == in_OV) {
    uVar6 = extraout_w8_04;
  }
  if ((bool)in_ZR) {
    uVar6 = 1;
  }
  uVar4 = (ulong)uVar6;
  func_0x000104c1222c(extraout_x8_02,uVar4);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104c12304();
    if ((param_5 != 0) && (func_0x000104c12c88(), extraout_w8_05 == 0)) {
      func_0x000104c12574();
      in_OV = SBORROW8(extraout_x10_01,1);
      in_NG = extraout_x10_01 + -1 < 0;
      in_ZR = extraout_x10_01 == 1;
      lVar9 = extraout_x9_05;
      if (extraout_x10_01 < 2) {
        func_0x000104c12564();
        lVar9 = extraout_x9_06;
      }
      if (*(char *)(lVar9 + 0x100) != '\0') {
        func_0x000104c12bb0();
        in_OV = SBORROW8(extraout_x8_06,1);
        in_NG = extraout_x8_06 + -1 < 0;
        in_ZR = extraout_x8_06 == 1;
        if (extraout_x8_06 < 2) {
          func_0x000104c12554();
        }
      }
    }
    if ((param_6 != 0) && (func_0x000104c12978(), extraout_w8_06 == 0)) {
      func_0x000104c12544();
      in_OV = SBORROW8(extraout_x10_02,1);
      in_NG = extraout_x10_02 + -1 < 0;
      in_ZR = extraout_x10_02 == 1;
      lVar9 = extraout_x9_07;
      if (extraout_x10_02 < 2) {
        func_0x000104c12564();
        lVar9 = extraout_x9_08;
      }
      if (*(char *)(lVar9 + 0x100) != '\0') {
        func_0x000104c12adc();
        in_OV = SBORROW8(extraout_x8_07,1);
        in_NG = extraout_x8_07 + -1 < 0;
        in_ZR = extraout_x8_07 == 1;
        if (extraout_x8_07 < 2) {
          func_0x000104c12554();
        }
      }
    }
    func_0x000104c12ba4(0);
    uVar6 = 0;
    if (in_NG == in_OV) {
      uVar6 = extraout_w8_07;
    }
    if ((bool)in_ZR) {
      uVar6 = 1;
    }
    uVar4 = (ulong)uVar6;
    func_0x000104c1222c(extraout_x8_05,uVar4);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000104c12304();
      if ((param_5 != 0) && (func_0x000104c12c88(), extraout_w8_08 == 0)) {
        func_0x000104c12574();
        lVar9 = extraout_x9_09;
        if (3 < extraout_x10_03) {
          func_0x000104c122b8();
          lVar9 = extraout_x9_10;
        }
        if ((*(char *)(lVar9 + 0x100) != '\0') && (func_0x000104c12bb0(), 3 < extraout_x8_09)) {
          func_0x000104c122a0();
        }
      }
      if ((param_6 != 0) && (func_0x000104c12978(), extraout_w8_09 == 0)) {
        func_0x000104c12544();
        lVar9 = extraout_x9_11;
        if (3 < extraout_x10_04) {
          func_0x000104c122b8();
          lVar9 = extraout_x9_12;
        }
        if ((*(char *)(lVar9 + 0x100) != '\0') && (func_0x000104c12adc(), 3 < extraout_x8_10)) {
          func_0x000104c122a0();
        }
      }
      cVar1 = '\0';
      cVar2 = '\0';
      uVar3 = true;
      uVar4 = 1;
      func_0x000104c1222c(extraout_x8_08,1);
      if ((bool)uVar3) {
        return uVar4;
      }
      ___stack_chk_fail();
      func_0x000104c12304();
      if ((param_5 != 0) && (func_0x000104c12c88(), extraout_w8_10 == 0)) {
        func_0x000104c12574();
        cVar1 = SBORROW8(extraout_x10_05,4);
        cVar2 = extraout_x10_05 + -4 < 0;
        uVar3 = extraout_x10_05 == 4;
        lVar9 = extraout_x9_13;
        if (3 < extraout_x10_05) {
          func_0x000104c122b8();
          lVar9 = extraout_x9_14;
        }
        if (*(char *)(lVar9 + 0x100) != '\0') {
          func_0x000104c12bb0();
          cVar1 = SBORROW8(extraout_x8_12,4);
          cVar2 = extraout_x8_12 + -4 < 0;
          uVar3 = extraout_x8_12 == 4;
          if (3 < extraout_x8_12) {
            func_0x000104c122a0();
          }
        }
      }
      if ((param_6 != 0) && (func_0x000104c12978(), extraout_w8_11 == 0)) {
        func_0x000104c12544();
        cVar1 = SBORROW8(extraout_x10_06,4);
        cVar2 = extraout_x10_06 + -4 < 0;
        uVar3 = extraout_x10_06 == 4;
        lVar9 = extraout_x9_15;
        if (3 < extraout_x10_06) {
          func_0x000104c122b8();
          lVar9 = extraout_x9_16;
        }
        if (*(char *)(lVar9 + 0x100) != '\0') {
          func_0x000104c12adc();
          cVar1 = SBORROW8(extraout_x8_13,4);
          cVar2 = extraout_x8_13 + -4 < 0;
          uVar3 = extraout_x8_13 == 4;
          if (3 < extraout_x8_13) {
            func_0x000104c122a0();
          }
        }
      }
      func_0x000104c12ba4(0);
      uVar6 = 0;
      if (cVar2 == cVar1) {
        uVar6 = extraout_w8_12;
      }
      if ((bool)uVar3) {
        uVar6 = 1;
      }
      uVar4 = (ulong)uVar6;
      func_0x000104c1222c(extraout_x8_11);
      if ((bool)uVar3) {
        return uVar4;
      }
      ___stack_chk_fail();
      if ((param_5 == 0) || (func_0x000104c12c88(), extraout_w8_13 != 0)) {
        bVar5 = 0;
        bVar8 = 0;
      }
      else {
        lVar9 = uVar4 + param_4;
        bVar5 = *(char *)(lVar9 + 0x120) < '\x04';
        bVar8 = '\x03' < *(char *)(lVar9 + 0x120);
        if (*(char *)(lVar9 + 0x100) != '\0') {
          if (*(char *)(lVar9 + 0x140) < '\x04') {
            bVar5 = bVar5 + 1;
          }
          else {
            bVar8 = bVar8 + 1;
          }
        }
      }
      if ((param_6 != 0) && (*(char *)(param_2 + (ulong)param_3 + 0xe0) == '\0')) {
        param_2 = param_2 + (ulong)param_3;
        if (*(char *)(param_2 + 0x120) < '\x04') {
          bVar5 = bVar5 + 1;
        }
        else {
          bVar8 = bVar8 + 1;
        }
        if (*(char *)(param_2 + 0x100) != '\0') {
          if (*(char *)(param_2 + 0x140) < '\x04') {
            bVar5 = bVar5 + 1;
          }
          else {
            bVar8 = bVar8 + 1;
          }
        }
      }
      uVar6 = 0;
      if (bVar8 <= bVar5) {
        uVar6 = 2;
      }
      if (bVar5 == bVar8) {
        uVar6 = 1;
      }
      return (ulong)uVar6;
    }
  }
  return uVar4;
}



/* Entry: 104c11684; end: 104c11737;  */

undefined4
FUN_104c11684(long param_1,long param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  byte bVar1;
  int extraout_w8;
  undefined4 uVar2;
  byte bVar3;
  
  if ((param_5 == 0) || (func_0x000104c12c88(), extraout_w8 != 0)) {
    bVar1 = 0;
    bVar3 = 0;
  }
  else {
    param_1 = param_1 + (ulong)param_4;
    bVar1 = *(char *)(param_1 + 0x120) < '\x04';
    bVar3 = '\x03' < *(char *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x100) != '\0') {
      if (*(char *)(param_1 + 0x140) < '\x04') {
        bVar1 = bVar1 + 1;
      }
      else {
        bVar3 = bVar3 + 1;
      }
    }
  }
  if ((param_6 != 0) && (*(char *)(param_2 + (ulong)param_3 + 0xe0) == '\0')) {
    param_2 = param_2 + (ulong)param_3;
    if (*(char *)(param_2 + 0x120) < '\x04') {
      bVar1 = bVar1 + 1;
    }
    else {
      bVar3 = bVar3 + 1;
    }
    if (*(char *)(param_2 + 0x100) != '\0') {
      if (*(char *)(param_2 + 0x140) < '\x04') {
        bVar1 = bVar1 + 1;
      }
      else {
        bVar3 = bVar3 + 1;
      }
    }
  }
  uVar2 = 0;
  if (bVar3 <= bVar1) {
    uVar2 = 2;
  }
  if (bVar1 == bVar3) {
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 104c11738; end: 104c11837;  */

undefined4 FUN_104c11738(int *param_1,int param_2,int param_3,int param_4,int param_5,long param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uStack_14;
  
  iVar7 = *param_1;
  if (iVar7 == 0) {
    uStack_14 = 0;
  }
  else {
    if (iVar7 == 1) {
      uStack_14._0_2_ = (short)((uint)param_1[1] >> 0xd);
      sVar5 = (short)((uint)param_1[2] >> 0xd);
    }
    else {
      if (iVar7 == 2) {
        iVar7 = param_1[5];
        iVar6 = param_1[6];
        iVar8 = param_1[4];
        iVar9 = iVar6;
      }
      else {
        iVar9 = param_1[3];
        iVar8 = param_1[4];
        iVar7 = param_1[5];
        iVar6 = param_1[6];
      }
      iVar2 = param_2 * 4 + param_4 * 2 + -1;
      iVar3 = param_3 * 4 + param_5 * 2 + -1;
      iVar9 = param_1[1] + iVar8 * iVar3 + (iVar9 + -0x10000) * iVar2;
      iVar7 = iVar7 * iVar2 + (iVar6 + -0x10000) * iVar3 + param_1[2];
      bVar4 = *(char *)(param_6 + 0x1ac) == '\0';
      uVar10 = 0xd;
      if (bVar4) {
        uVar10 = 0xe;
      }
      iVar6 = -iVar7;
      if (-1 < iVar7) {
        iVar6 = iVar7;
      }
      sVar5 = (short)((iVar6 + ((uint)(1 << (ulong)uVar10) >> 1) >> (ulong)uVar10) << bVar4);
      uStack_14._0_2_ = -sVar5;
      if (-1 < iVar7) {
        uStack_14._0_2_ = sVar5;
      }
      iVar7 = -iVar9;
      if (-1 < iVar9) {
        iVar7 = iVar9;
      }
      sVar1 = (short)((iVar7 + ((uint)(1 << (ulong)uVar10) >> 1) >> (ulong)uVar10) << (ulong)bVar4);
      sVar5 = -sVar1;
      if (-1 < iVar9) {
        sVar5 = sVar1;
      }
    }
    uStack_14 = CONCAT22(sVar5,(short)uStack_14);
    if (*(char *)(param_6 + 0x10d) != '\0') {
      FUN_104c121dc(&uStack_14);
    }
  }
  return uStack_14;
}



/* Entry: 104c11838; end: 104c11a53;  */

bool FUN_104c11838(char *param_1,uint param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU));
  uVar3 = 0xffffffffffffffff;
  do {
    uVar4 = uVar2;
    if (uVar3 - uVar2 == -1) break;
    cVar1 = *param_1;
    uVar4 = uVar3 + 1;
    param_1 = param_1 + 2;
    uVar3 = uVar4;
  } while (cVar1 != '\0');
  return (long)uVar4 < (long)(int)param_2;
}



/* Entry: 104c11a54; end: 104c11cd7;  */

void FUN_104c11a54(long param_1,long param_2,uint param_3,byte *param_4,int param_5,int param_6)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  
  iVar6 = *(int *)(param_1 + 0x18);
  uVar5 = *(uint *)(param_1 + 0x1c);
  lVar10 = *(long *)(param_1 + 8);
  lVar1 = param_1 + ((ulong)uVar5 & 0x1e) * 8;
  if (param_3 == 0) {
    bVar4 = false;
    lVar9 = *(long *)(param_1 + 0x10);
    if ((int)uVar5 <= *(int *)(lVar9 + 0x3530)) goto LAB_104c11be8;
  }
  else {
    iVar12 = *(int *)(lVar10 + 0x878);
    bVar4 = iVar12 == 1;
    lVar9 = *(long *)(param_1 + 0x10);
    if ((int)uVar5 <= *(int *)(lVar9 + 0x3530)) goto LAB_104c11be8;
    uVar5 = 1;
    if (iVar12 == 3) {
      uVar5 = 2;
    }
    uVar7 = 1;
    if (iVar12 != 1) {
      uVar7 = 2;
    }
    if (((uint)param_4[1] << (ulong)uVar7) + ((uint)*param_4 << (ulong)uVar5) < 0x10)
    goto LAB_104c11be8;
  }
  iVar12 = 0;
  for (iVar11 = 0; iVar11 < param_5; iVar11 = iVar11 + uVar5) {
    uVar5 = (uint)param_4[2];
    if (3 < uVar5) {
      uVar5 = 4;
    }
    iVar6 = *(int *)(param_1 + 0x18);
    if ((int)uVar5 <= iVar12) goto LAB_104c11bdc;
    lVar8 = *(long *)(lVar1 + 0x2c0) + (long)(iVar6 + iVar11) * 0xc;
    bVar3 = *(byte *)(lVar8 + 0x16);
    lVar9 = (long)*(char *)(lVar8 + 0x14) + -1;
    if (0 < (long)*(char *)(lVar8 + 0x14)) {
      uVar5 = (uint)param_4[1];
      if (0xf < uVar5) {
        uVar5 = 0x10;
      }
      func_0x000104c1199c(param_2 + lVar9 * 8 + (ulong)param_3 * 4,*(undefined4 *)(param_1 + 0x1c),
                          (uVar5 & 0xfffffffe) + (uVar5 >> 1) + 3 >> 2,(long)*(short *)(lVar8 + 0xc)
                          ,bVar4,lVar10 + 0xc40 + lVar9 * 0x10);
      iVar12 = iVar12 + 1;
    }
    uVar5 = (uint)(byte)(&UNK_10dd74d48)[(ulong)bVar3 * 4];
    if ((byte)(&UNK_10dd74d48)[(ulong)bVar3 * 4] < 3) {
      uVar5 = 2;
    }
  }
  iVar6 = *(int *)(param_1 + 0x18);
LAB_104c11bdc:
  lVar9 = *(long *)(param_1 + 0x10);
LAB_104c11be8:
  if (*(int *)(lVar9 + 0x3528) < iVar6) {
    iVar6 = 0;
    for (uVar5 = 0; (int)uVar5 < param_6; uVar5 = uVar5 + uVar7) {
      uVar7 = (uint)param_4[3];
      if (3 < uVar7) {
        uVar7 = 4;
      }
      if ((int)uVar7 <= iVar6) {
        return;
      }
      lVar8 = *(long *)(lVar1 + 0x2d0 + (ulong)uVar5 * 8) + (long)*(int *)(param_1 + 0x18) * 0xc;
      lVar9 = (ulong)*(byte *)(lVar8 + -2) * 4;
      if ((long)*(char *)(lVar8 + -4) < 1) {
        bVar3 = (&UNK_10dd74d49)[lVar9];
      }
      else {
        bVar3 = (&UNK_10dd74d49)[lVar9];
        uVar7 = (uint)bVar3;
        if ((uint)param_4[1] <= (uint)bVar3) {
          uVar7 = (uint)param_4[1];
        }
        uVar2 = 2;
        if (1 < bVar3) {
          uVar2 = uVar7;
        }
        lVar9 = (long)*(char *)(lVar8 + -4) + -1;
        func_0x000104c1199c(param_2 + lVar9 * 8 + (ulong)param_3 * 4,
                            *(int *)(param_1 + 0x1c) + uVar5,uVar2,(long)*(short *)(lVar8 + -0xc),
                            bVar4,lVar10 + 0xc40 + lVar9 * 0x10);
        iVar6 = iVar6 + 1;
      }
      uVar7 = (uint)bVar3;
      if (bVar3 < 3) {
        uVar7 = 2;
      }
    }
  }
  return;
}



/* Entry: 104c11cd8; end: 104c11d87;  */

void FUN_104c11cd8(long param_1,int *param_2,byte *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar8 = *(uint *)(*(long *)(param_1 + 8) + 0x878);
  if (uVar8 == 3) {
    bVar4 = param_3[1];
    iVar3 = *(int *)(param_1 + 0x1c);
    iVar6 = *(int *)(param_4 + 0x18);
    iVar7 = *(int *)(param_4 + 8);
    bVar5 = *param_3;
    for (uVar8 = 0; uVar8 < (uint)bVar5 << 2; uVar8 = (uVar8 + uVar9) - 8) {
      iVar1 = (int)((ulong)((long)iVar7 + (long)iVar6 * (long)(int)((iVar3 + (uint)bVar4) * 4 + -4)
                           + ((long)*(int *)(param_1 + 0x18) * 4 + (long)(int)uVar8 + 4) *
                             (long)*(int *)(param_4 + 0x14)) >> 0x10) + 8;
      iVar2 = *param_2;
      if (*param_2 <= iVar1) {
        iVar2 = iVar1;
      }
      *param_2 = iVar2;
      bVar5 = *param_3;
      uVar9 = (uint)bVar5 << 2;
      if (uVar9 < 0x11) {
        uVar9 = 0x10;
      }
    }
    return;
  }
  uVar8 = uVar8 & 1;
  bVar4 = param_3[1];
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar6 = *(int *)(param_4 + 0x18);
  iVar7 = *(int *)(param_4 + 8);
  bVar5 = *param_3;
  for (uVar9 = 0; uVar9 < (uint)bVar5 << 1; uVar9 = (uVar9 + uVar10) - 8) {
    iVar1 = (int)((ulong)((long)iVar7 +
                          ((long)iVar3 * 4 +
                          (long)(int)(((uint)bVar4 << (ulong)(2 - uVar8 & 0x1f)) + -4 << uVar8)) *
                          (long)iVar6 +
                          ((long)*(int *)(param_1 + 0x18) * 4 + (long)(int)uVar9 * 2 + 8) *
                          (long)*(int *)(param_4 + 0x14) >> uVar8) >> 0x10) + 8;
    iVar2 = *param_2;
    if (*param_2 <= iVar1) {
      iVar2 = iVar1;
    }
    *param_2 = iVar2;
    bVar5 = *param_3;
    uVar10 = (uint)bVar5 << 1;
    if (uVar10 < 0x11) {
      uVar10 = 0x10;
    }
  }
  return;
}



/* Entry: 104c11d88; end: 104c11ea3;  */

uint FUN_104c11d88(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  
  uVar2 = param_1;
  func_0x000100daf99c(param_1,param_2 + 0x20);
  uVar3 = param_1;
  func_0x000100daf650(param_1,param_2,10);
  uVar1 = (uint)uVar3;
  if (uVar1 == 0) {
    uVar3 = param_1;
    func_0x000100daf99c(param_1,param_2 + 0x24);
    uVar5 = (uint)uVar3;
    if (param_3 < 0) goto LAB_104c11e68;
    uVar3 = param_1;
    func_0x000104c125dc(param_1,param_2 + (long)(int)uVar5 * 8 + 0x28);
    iVar6 = (int)uVar3;
    if (param_3 == 0) goto LAB_104c11e74;
    lVar4 = 0x38;
  }
  else {
    uVar5 = 1 << (ulong)(uVar1 & 0x1f);
    lVar4 = param_2 + 0x3c;
    for (uVar7 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar7; uVar7 = uVar7 + 1) {
      uVar3 = param_1;
      func_0x000100daf99c(param_1,lVar4);
      uVar5 = (int)uVar3 << (ulong)((uint)uVar7 & 0x1f) | uVar5;
      lVar4 = lVar4 + 4;
    }
    if (param_3 < 0) {
LAB_104c11e68:
      uVar1 = 1;
      iVar6 = 3;
      goto LAB_104c11e78;
    }
    uVar3 = param_1;
    func_0x000104c125dc(param_1,param_2 + 0x68);
    iVar6 = (int)uVar3;
    if (param_3 == 0) {
LAB_104c11e74:
      uVar1 = 1;
      goto LAB_104c11e78;
    }
    lVar4 = 0x70;
  }
  func_0x000100daf99c(param_1,param_2 + lVar4);
  uVar1 = (uint)param_1;
LAB_104c11e78:
  uVar5 = uVar1 | iVar6 << 1 | uVar5 << 3;
  uVar1 = ~uVar5;
  if ((int)uVar2 == 0) {
    uVar1 = uVar5 + 1;
  }
  return uVar1;
}



/* Entry: 104c11ea4; end: 104c121db;  */

void FUN_104c11ea4(long param_1,uint param_2,uint param_3,long param_4,int param_5,int param_6)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined2 uVar8;
  undefined1 extraout_w8;
  undefined2 extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  undefined4 extraout_w8_04;
  int iVar9;
  int iVar10;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  uint extraout_w10;
  ulong uVar11;
  long extraout_x10;
  long extraout_x10_00;
  int extraout_w13;
  uint uVar12;
  uint extraout_w13_00;
  uint extraout_w13_01;
  uint uVar13;
  ulong uVar14;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar14 = (ulong)*(uint *)(param_1 + 0x1c) & 0x1f;
  lVar1 = (ulong)param_2 * 8;
  bVar4 = (&UNK_10dd74da2)[lVar1];
  bVar5 = (&UNK_10dd74da3)[lVar1];
  iVar9 = 1;
  uVar13 = (uint)bVar5;
  if ((param_2 != 0) && (param_3 < 2)) {
    bVar6 = (&UNK_10dd74da5)[lVar1];
    func_0x000104c12700(-(param_3 + (uint)bVar6 * 2));
    uVar11 = (ulong)((int)*(char *)(param_1 + uVar14 + 0x1e0) < (int)(uint)bVar5);
    lVar3 = *(long *)(param_1 + 8);
    if (*(char *)(extraout_x9 + 0x1c0) < extraout_w13) {
      uVar11 = uVar11 + 1;
    }
    iVar10 = (int)*(long *)(param_1 + 0x10) + 0x3500;
    func_0x000104c12a30(*(long *)(param_1 + 0x10) + (long)extraout_w8_01 * 0xc + uVar11 * 4);
    iVar9 = 1;
    if (iVar10 != 0) {
      *(ushort *)(param_4 + (ulong)param_3 * 2) =
           *(ushort *)(param_4 + (ulong)param_3 * 2) |
           (ushort)(1 << (ulong)(param_5 + param_6 * 4 & 0x1f));
      if (1 < bVar6) {
        bVar5 = (&UNK_10dd74da6)[lVar1];
        lVar1 = (ulong)bVar5 * 8;
        bVar6 = (&UNK_10dd74da0)[lVar1];
        bVar7 = (&UNK_10dd74da1)[lVar1];
        func_0x000104c12508();
        FUN_104c11ea4();
        iVar9 = *(int *)(param_1 + 0x18) + (uint)bVar6;
        *(int *)(param_1 + 0x18) = iVar9;
        if ((uVar13 <= bVar4) && (iVar9 < *(int *)(lVar3 + 0xd78))) {
          func_0x000104c12508();
          FUN_104c11ea4();
          iVar9 = *(int *)(param_1 + 0x18);
        }
        iVar10 = *(int *)(param_1 + 0x1c) + (uint)bVar7;
        *(uint *)(param_1 + 0x18) = iVar9 - (uint)bVar6;
        *(int *)(param_1 + 0x1c) = iVar10;
        if ((bVar4 <= uVar13) && (iVar10 < *(int *)(lVar3 + 0xd7c))) {
          func_0x000104c12508();
          FUN_104c11ea4();
          iVar9 = *(int *)(param_1 + 0x18) + (uint)bVar6;
          *(int *)(param_1 + 0x18) = iVar9;
          if ((uVar13 <= extraout_w10) && (iVar9 < *(int *)(lVar3 + 0xd78))) {
            FUN_104c11ea4(param_1,(ulong)bVar5,param_3 + 1,param_4,param_5 << 1 | 1,param_6 << 1 | 1
                         );
            iVar9 = *(int *)(param_1 + 0x18);
          }
          *(uint *)(param_1 + 0x18) = iVar9 - (uint)bVar6;
          iVar10 = *(int *)(param_1 + 0x1c);
        }
        *(uint *)(param_1 + 0x1c) = iVar10 - (uint)bVar7;
        return;
      }
      iVar9 = 0;
    }
  }
  uVar12 = (uint)bVar4;
  switch((&UNK_10dd74da1)[lVar1]) {
  case 1:
    if (iVar9 == 0) {
      bVar5 = 0;
    }
    *(byte *)(param_1 + uVar14 + 0x1e0) = bVar5;
    break;
  case 2:
    uVar8 = CONCAT11(bVar5,bVar5);
    if (iVar9 == 0) {
      uVar8 = 0;
    }
    *(undefined2 *)(param_1 + uVar14 + 0x1e0) = uVar8;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
    break;
  case 4:
    iVar10 = uVar13 * 0x1010101;
    if (iVar9 == 0) {
      iVar10 = 0;
    }
    *(int *)(param_1 + uVar14 + 0x1e0) = iVar10;
    break;
  case 8:
    func_0x000104c12990();
    *(undefined8 *)(extraout_x10_00 + 0x1e0) = extraout_x9_01;
    uVar12 = extraout_w13_01;
    iVar9 = extraout_w8_03;
    break;
  default:
    if ((&UNK_10dd74da1)[lVar1] == '\x10') {
      func_0x000104c12990();
      *(undefined8 *)(extraout_x10 + 0x1e8) = extraout_x9_00;
      *(undefined8 *)(extraout_x10 + 0x1e0) = extraout_x9_00;
      uVar12 = extraout_w13_00;
      iVar9 = extraout_w8_02;
    }
  }
  switch((&UNK_10dd74da0)[lVar1]) {
  case 1:
    if (iVar9 == 0) {
      uVar12 = 0;
    }
    func_0x000104c12700(uVar12);
    *(undefined1 *)(extraout_x9_02 + 0x1c0) = extraout_w8;
    break;
  case 2:
    uVar12 = uVar12 | uVar12 << 8;
    if (iVar9 == 0) {
      uVar12 = 0;
    }
    func_0x000104c12700(uVar12);
    *(undefined2 *)(extraout_x9_04 + 0x1c0) = extraout_w8_00;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
    break;
  case 4:
    iVar10 = uVar12 * 0x1010101;
    if (iVar9 == 0) {
      iVar10 = 0;
    }
    func_0x000104c12700(iVar10);
    *(undefined4 *)(extraout_x9_03 + 0x1c0) = extraout_w8_04;
    break;
  case 8:
    func_0x000104c12658();
    break;
  default:
    if ((&UNK_10dd74da0)[lVar1] == '\x10') {
      func_0x000104c12658();
      *(undefined8 *)(*(long *)(param_1 + 0x290) + (ulong)(uVar2 & 0x1f) + 0x1c8) = extraout_x8;
    }
  }
  return;
}



/* Entry: 104c121dc; end: 104c12c93;  */

void FUN_104c121dc(ushort *param_1)

{
  param_1[1] = (param_1[1] - ((short)param_1[1] >> 0xf)) + 3 & 0xfff8;
  *param_1 = (*param_1 - ((short)*param_1 >> 0xf)) + 3 & 0xfff8;
  return;
}



/* Entry: 104c12c94; end: 104c12e73;  */

void FUN_104c12c94(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  code *extraout_x8;
  code *extraout_x8_00;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 8);
  (*(code *)*param_1)(param_5,lVar6);
  if ((*(int *)(lVar6 + 0x28) != 0) || (*(int *)(lVar6 + 0x24) != 0)) {
    func_0x000104c132bc();
    (*extraout_x8)(param_5 + 0x17b4,param_5,lVar6,0);
  }
  if ((*(int *)(lVar6 + 0x2c) != 0) || (*(int *)(lVar6 + 0x24) != 0)) {
    func_0x000104c132bc();
    (*extraout_x8_00)(param_5 + 0x2f68,param_5,lVar6,1);
  }
  if ((*(int *)(lVar6 + 4) != 0) || (*(int *)(lVar6 + 0x24) != 0)) {
    FUN_104c12e74(lVar6 + 8,*(int *)(lVar6 + 4),param_4);
  }
  if (*(int *)(lVar6 + 0x28) != 0) {
    FUN_104c12e74(lVar6 + 0x30,*(int *)(lVar6 + 0x28),param_4 + 0x100);
  }
  if (*(int *)(lVar6 + 0x2c) != 0) {
    FUN_104c12e74(lVar6 + 0x44,*(int *)(lVar6 + 0x2c),param_4 + 0x200);
  }
  if (*(int *)(lVar6 + 4) == 0) {
    lVar5 = *(long *)(param_2 + 0x28);
    lVar4 = lVar5 * *(int *)(param_2 + 0x3c);
    lVar3 = *(long *)(param_2 + 0x10);
    if (lVar4 < 0) {
      lVar3 = (lVar3 + lVar4) - lVar5;
      lVar5 = (*(long *)(param_3 + 0x10) + lVar4) - lVar5;
      lVar4 = -lVar4;
    }
    else {
      lVar5 = *(long *)(param_3 + 0x10);
    }
    _memcpy(lVar3,lVar5,lVar4);
  }
  iVar1 = *(int *)(param_3 + 0x40);
  if ((iVar1 != 0) && (*(int *)(lVar6 + 0x24) == 0)) {
    lVar3 = *(long *)(param_2 + 0x30);
    iVar2 = *(int *)(param_2 + 0x3c);
    if (iVar1 == 1) {
      iVar2 = iVar2 + 1;
    }
    lVar5 = lVar3 * (iVar2 >> (iVar1 == 1));
    if (lVar5 < 0) {
      if (*(int *)(lVar6 + 0x28) == 0) {
        _memcpy((*(long *)(param_2 + 0x18) + lVar5) - lVar3,
                (*(long *)(param_3 + 0x18) + lVar5) - lVar3,-lVar5);
      }
      if (*(int *)(lVar6 + 0x2c) == 0) {
        lVar6 = (*(long *)(param_2 + 0x20) + lVar5) - lVar3;
        lVar3 = (*(long *)(param_3 + 0x20) + lVar5) - lVar3;
        lVar5 = -lVar5;
        goto LAB_104c12e60;
      }
    }
    else {
      if (*(int *)(lVar6 + 0x28) == 0) {
        _memcpy(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + 0x18),lVar5);
      }
      if (*(int *)(lVar6 + 0x2c) == 0) {
        lVar6 = *(long *)(param_2 + 0x20);
        lVar3 = *(long *)(param_3 + 0x20);
LAB_104c12e60:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(lVar6,lVar3,lVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 104c12e74; end: 104c12f4f;  */

void FUN_104c12e74(undefined1 *param_1,int param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  
  if (param_2 != 0) {
    _memset(param_3,param_1[1],*param_1);
    uVar8 = 0;
    uVar4 = param_2 - 1;
    while (uVar8 != (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU))) {
      bVar1 = param_1[uVar8 * 2];
      bVar2 = (param_1 + uVar8 * 2)[1];
      uVar8 = uVar8 + 1;
      bVar3 = (param_1 + uVar8 * 2)[1];
      uVar5 = (uint)(byte)param_1[uVar8 * 2] - (uint)bVar1;
      uVar9 = (ulong)uVar5;
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = ((uVar5 >> 1) + 0x10000) / uVar5;
      }
      iVar10 = 0x8000;
      pcVar7 = (char *)(param_3 + (ulong)bVar1);
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar7 = bVar2 + (char)((uint)iVar10 >> 0x10);
        iVar10 = iVar10 + ((uint)bVar3 - (uint)bVar2) * uVar6;
        pcVar7 = pcVar7 + 1;
      }
    }
    uVar8 = (ulong)(byte)param_1[(long)(int)uVar4 * 2];
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memset_11034c668)
              (param_3 + uVar8,(param_1 + (long)(int)uVar4 * 2)[1],0x100 - uVar8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(param_3,0x100);
  return;
}



/* Entry: 104c12f50; end: 104c131e7;  */

void FUN_104c12f50(long param_1,long param_2,long param_3,long param_4,long param_5,int param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  iVar5 = *(int *)(param_3 + 0x40);
  iVar6 = *(int *)(param_2 + 0x38);
  lVar8 = (long)iVar6;
  if (iVar5 != 3) {
    iVar6 = iVar6 + 1;
  }
  lVar4 = *(long *)(param_2 + 8);
  lVar10 = (long)(param_6 * 0x20);
  lVar9 = *(long *)(param_3 + 0x10) + *(long *)(param_3 + 0x28) * lVar10;
  if (*(int *)(lVar4 + 4) != 0) {
    iVar7 = *(int *)(param_2 + 0x3c) + param_6 * -0x20;
    if (0x1f < iVar7) {
      iVar7 = 0x20;
    }
    (**(code **)(param_1 + 0x20))
              (*(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x28) * lVar10,lVar9,
               *(long *)(param_2 + 0x28),lVar4,lVar8,param_4,param_5,iVar7,param_6);
  }
  if (((*(int *)(lVar4 + 0x28) != 0) || (*(int *)(lVar4 + 0x2c) != 0)) ||
     (*(int *)(lVar4 + 0x24) != 0)) {
    uVar11 = (uint)(iVar5 != 3);
    iVar7 = *(int *)(param_2 + 0x3c) + param_6 * -0x20;
    if (0x1f < iVar7) {
      iVar7 = 0x20;
    }
    uVar2 = (int)(iVar7 + (uint)(iVar5 == 1)) >> (uint)(iVar5 == 1);
    if ((*(uint *)(param_2 + 0x38) & uVar11) != 0) {
      for (uVar3 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU); uVar3 != 0; uVar3 = uVar3 - 1) {
        puVar1 = (undefined1 *)(lVar9 + *(int *)(param_2 + 0x38));
        *puVar1 = puVar1[-1];
        lVar9 = lVar9 + (*(long *)(param_3 + 0x28) << (iVar5 == 1));
      }
    }
    lVar8 = *(long *)(param_2 + 0x30) * lVar10 >> (iVar5 == 1);
    lVar9 = (long)(iVar6 >> uVar11);
    if (*(int *)(lVar4 + 0x24) == 0) {
      lVar10 = 0;
      while( true ) {
        param_5 = param_5 + 0x17b4;
        param_4 = param_4 + 0x100;
        if (lVar10 == 2) break;
        if (((int *)(lVar4 + 0x28))[lVar10] != 0) {
          (**(code **)(param_1 + 0x28 + (ulong)(*(int *)(param_3 + 0x40) - 1) * 8))
                    (*(long *)(param_2 + 0x18 + lVar10 * 8) + lVar8,
                     *(long *)(param_3 + 0x18 + lVar10 * 8) + lVar8,*(undefined8 *)(param_3 + 0x30),
                     lVar4,lVar9,param_4,param_5,uVar2,param_6);
        }
        lVar10 = lVar10 + 1;
      }
    }
    else {
      for (lVar10 = 0; param_5 = param_5 + 0x17b4, lVar10 != 2; lVar10 = lVar10 + 1) {
        (**(code **)(param_1 + 0x28 + (ulong)(*(int *)(param_3 + 0x40) - 1) * 8))
                  (*(long *)(param_2 + 0x18 + lVar10 * 8) + lVar8,
                   *(long *)(param_3 + 0x18 + lVar10 * 8) + lVar8,*(undefined8 *)(param_3 + 0x30),
                   lVar4,lVar9,param_4,param_5,uVar2,param_6);
      }
    }
  }
  return;
}



/* Entry: 104c131e8; end: 104c132ab;  */

void FUN_104c131e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_4a70 [768];
  undefined1 auStack_4770 [18216];
  long lStack_48;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = (*(int *)(param_2 + 0x3c) + 0x1f) / 0x20;
  FUN_104c12c94();
  for (uVar2 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar2; uVar2 = uVar2 + 1) {
    FUN_104c12f50(param_1,param_2,param_3,auStack_4a70,auStack_4770,uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
  }
  return;
}



/* Entry: 104c132ac; end: 104c132f7;  */

void FUN_104c132ac(void)

{
  return;
}



/* Entry: 104c132f8; end: 104c1380b;  */

/* WARNING: Possible PIC construction at 0x000104c134b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c135dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104c13700: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104c135e0) */
/* WARNING: Removing unreachable block (ram,0x000104c135e8) */
/* WARNING: Removing unreachable block (ram,0x000104c13618) */
/* WARNING: Removing unreachable block (ram,0x000104c13638) */
/* WARNING: Removing unreachable block (ram,0x000104c13644) */
/* WARNING: Removing unreachable block (ram,0x000104c136d4) */
/* WARNING: Removing unreachable block (ram,0x000104c136e8) */
/* WARNING: Removing unreachable block (ram,0x000104c136e0) */
/* WARNING: Removing unreachable block (ram,0x000104c13650) */
/* WARNING: Removing unreachable block (ram,0x000104c13654) */
/* WARNING: Removing unreachable block (ram,0x000104c13658) */
/* WARNING: Removing unreachable block (ram,0x000104c13668) */
/* WARNING: Removing unreachable block (ram,0x000104c1366c) */
/* WARNING: Removing unreachable block (ram,0x000104c13674) */
/* WARNING: Removing unreachable block (ram,0x000104c1367c) */
/* WARNING: Removing unreachable block (ram,0x000104c1368c) */
/* WARNING: Removing unreachable block (ram,0x000104c13698) */
/* WARNING: Removing unreachable block (ram,0x000104c136a0) */
/* WARNING: Removing unreachable block (ram,0x000104c13684) */
/* WARNING: Removing unreachable block (ram,0x000104c13620) */
/* WARNING: Removing unreachable block (ram,0x000104c134bc) */
/* WARNING: Removing unreachable block (ram,0x000104c134c4) */
/* WARNING: Removing unreachable block (ram,0x000104c134f4) */
/* WARNING: Removing unreachable block (ram,0x000104c13514) */
/* WARNING: Removing unreachable block (ram,0x000104c13520) */
/* WARNING: Removing unreachable block (ram,0x000104c135b0) */
/* WARNING: Removing unreachable block (ram,0x000104c135c4) */
/* WARNING: Removing unreachable block (ram,0x000104c135bc) */
/* WARNING: Removing unreachable block (ram,0x000104c1352c) */
/* WARNING: Removing unreachable block (ram,0x000104c13530) */
/* WARNING: Removing unreachable block (ram,0x000104c13534) */
/* WARNING: Removing unreachable block (ram,0x000104c13544) */
/* WARNING: Removing unreachable block (ram,0x000104c13548) */
/* WARNING: Removing unreachable block (ram,0x000104c13550) */
/* WARNING: Removing unreachable block (ram,0x000104c13558) */
/* WARNING: Removing unreachable block (ram,0x000104c13568) */
/* WARNING: Removing unreachable block (ram,0x000104c13574) */
/* WARNING: Removing unreachable block (ram,0x000104c1357c) */
/* WARNING: Removing unreachable block (ram,0x000104c13560) */
/* WARNING: Removing unreachable block (ram,0x000104c134fc) */
/* WARNING: Removing unreachable block (ram,0x000104c13704) */
/* WARNING: Removing unreachable block (ram,0x000104c1370c) */
/* WARNING: Removing unreachable block (ram,0x000104c1373c) */
/* WARNING: Removing unreachable block (ram,0x000104c1375c) */
/* WARNING: Removing unreachable block (ram,0x000104c13768) */
/* WARNING: Removing unreachable block (ram,0x000104c137f4) */
/* WARNING: Removing unreachable block (ram,0x000104c13808) */
/* WARNING: Removing unreachable block (ram,0x000104c13800) */
/* WARNING: Removing unreachable block (ram,0x000104c1385c) */
/* WARNING: Removing unreachable block (ram,0x000104c13774) */
/* WARNING: Removing unreachable block (ram,0x000104c13778) */
/* WARNING: Removing unreachable block (ram,0x000104c1377c) */
/* WARNING: Removing unreachable block (ram,0x000104c1378c) */
/* WARNING: Removing unreachable block (ram,0x000104c13790) */
/* WARNING: Removing unreachable block (ram,0x000104c13798) */
/* WARNING: Removing unreachable block (ram,0x000104c137a0) */
/* WARNING: Removing unreachable block (ram,0x000104c137b0) */
/* WARNING: Removing unreachable block (ram,0x000104c137bc) */
/* WARNING: Removing unreachable block (ram,0x000104c137c4) */
/* WARNING: Removing unreachable block (ram,0x000104c137a8) */
/* WARNING: Removing unreachable block (ram,0x000104c13744) */

void FUN_104c132f8(void)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  uint *in_x3;
  ulong in_x4;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int in_stack_00000000;
  undefined4 auStack_80 [4];
  uint auStack_70 [2];
  undefined8 uStack_68;
  uint *puVar9;
  
  lVar4 = 0;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *in_x3;
  lVar1 = 1;
  if (in_x3[0x35] != 0 && 0 < in_stack_00000000) {
    lVar1 = 2;
  }
  uVar6 = in_stack_00000000 * 0x2500 + 0xb200;
  uVar7 = in_stack_00000000 * 0xad + 0x69;
  for (; lVar1 * 4 - lVar4 != 0; lVar4 = lVar4 + 4) {
    *(uint *)((long)auStack_70 + lVar4) = (uVar6 & 0xff00 | uVar7 & 0xff) ^ uVar2;
    uVar6 = uVar6 - 0x2500;
    uVar7 = uVar7 - 0xad;
  }
  for (uVar5 = 0; bVar3 = in_x4 == uVar5, uVar5 < in_x4; uVar5 = (ulong)((int)uVar5 + 0x20)) {
    lVar4 = lVar1;
    if ((int)uVar5 != 0 && in_x3[0x35] != 0) {
      while (lVar4 != 0) {
        func_0x000104c138c4();
        lVar4 = extraout_x8;
      }
    }
    puVar9 = auStack_70;
    for (lVar4 = 0; uVar8 = SUB84(puVar9,0), lVar1 * 4 - lVar4 != 0; lVar4 = lVar4 + 4) {
      func_0x000104c132d0();
      *(undefined4 *)((long)auStack_80 + lVar4) = uVar8;
      puVar9 = puVar9 + 1;
    }
    func_0x000100d781e8();
  }
  func_0x000104c138b0(uStack_68);
  if (!bVar3) {
    ___stack_chk_fail();
    func_0x000104c13938();
    return;
  }
  return;
}



/* Entry: 104c1380c; end: 104c138e7;  */

void FUN_104c1380c(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return;
}


