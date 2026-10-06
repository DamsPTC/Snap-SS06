/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105302928; end: 10530294b;  */

void FUN_105302928(long param_1)

{
  func_0x000100554494();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10530294c; end: 10530294f;  */

void FUN_10530294c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110877a10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105302950; end: 105302963;  */

void FUN_105302950(void)

{
  FUN_105302c64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105302964; end: 10530296b;  */

void FUN_105302964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105303004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10530296c; end: 105302997;  */

undefined8 * FUN_10530296c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110877a60;
  func_0x000105300ecc(param_1 + 1);
  return param_1;
}



/* Entry: 105302998; end: 1053029ab;  */

void FUN_105302998(void)

{
  FUN_10530296c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053029ac; end: 1053029d3;  */

void FUN_1053029ac(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110877a60;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *puVar2;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000100576598();
    } while (extraout_w10 != 0);
  }
  lVar3 = puVar2[3];
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000100576598();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1053029d4; end: 105302a2f;  */

void FUN_1053029d4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110877a60;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000100576598();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar1[3];
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000100576598();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 105302a30; end: 105302a67;  */

long FUN_105302a30(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110877ad0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 105302a68; end: 105302acf;  */

undefined ** FUN_105302a68(void)

{
  return &PTR_DAT_110877ad0;
}



/* Entry: 105302ad0; end: 105302ae3;  */

void FUN_105302ad0(void)

{
  FUN_105302bc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105302ae4; end: 105302b3f;  */

void FUN_105302ae4(long param_1)

{
  undefined1 auStack_38 [24];
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010002b838(auStack_38,"");
    FUN_105302bf0(*(undefined8 *)(param_1 + 0x20),1,auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  }
  return;
}



/* Entry: 105302b40; end: 105302bc3;  */

void FUN_105302b40(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  if (*(char *)(param_2 + 8) == '\0') {
    uVar1 = 0;
  }
  __ZNSt3__19to_stringEi(auStack_50,uVar1);
  func_0x0001004c3cd0(auStack_38,"HTTP ",auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_105302bf0(*(long *)(param_1 + 0x20),0,auStack_38);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 105302bc4; end: 105302bef;  */

undefined8 * FUN_105302bc4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110877af0;
  FUN_105302c20(param_1 + 1);
  return param_1;
}



/* Entry: 105302bf0; end: 105302c1f;  */

long * FUN_105302bf0(long *param_1,undefined1 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uStack_11;
  
  uStack_11 = param_2;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x30))(param_1,&uStack_11);
    return param_1;
  }
  func_0x000104bfeb48();
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 105302c20; end: 105302c63;  */

long * FUN_105302c20(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 105302c64; end: 105302c6f;  */

void FUN_105302c64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110877a10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105302c70; end: 105302cb7;  */

void FUN_105302c70(long param_1)

{
  func_0x000100554494();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105302cb8; end: 105302cbb;  */

void FUN_105302cb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110877b48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105302cbc; end: 105302ccf;  */

void FUN_105302cbc(void)

{
  FUN_105302fcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105302cd0; end: 105302cd7;  */

void FUN_105302cd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105303004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105302cd8; end: 105302d03;  */

undefined8 * FUN_105302cd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110877b98;
  func_0x000105300ea0(param_1 + 1);
  return param_1;
}



/* Entry: 105302d04; end: 105302d17;  */

void FUN_105302d04(void)

{
  FUN_105302cd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105302d18; end: 105302d3f;  */

void FUN_105302d18(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110877b98;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *puVar2;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000100576598();
    } while (extraout_w10 != 0);
  }
  lVar3 = puVar2[3];
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000100576598();
    } while (extraout_w10_00 != 0);
  }
  lVar3 = puVar2[5];
  uVar4 = puVar2[4];
  puVar1[6] = puVar2[5];
  puVar1[5] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000100576598();
    } while (extraout_w10_01 != 0);
  }
  return;
}



/* Entry: 105302d40; end: 105302d63;  */

void FUN_105302d40(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110877b98;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000100576598();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar1[3];
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000100576598();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = puVar1[5];
  uVar3 = puVar1[4];
  param_2[6] = puVar1[5];
  param_2[5] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000100576598();
    } while (extraout_w10_01 != 0);
  }
  return;
}



/* Entry: 105302d64; end: 105302e67;  */

void FUN_105302d64(long param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  code *extraout_x8;
  undefined8 *puVar5;
  code *pcVar6;
  undefined1 auStack_60 [16];
  long lStack_50;
  long alStack_48 [2];
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  FUN_105301f38(alStack_48,param_1 + 8);
  if (alStack_48[0] != 0) {
    pbVar4 = *(byte **)(param_1 + 0x18);
    do {
      bVar1 = *pbVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pbVar4,0x10);
      if (bVar3) {
        *pbVar4 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bVar1 & 1) == 0) {
      FUN_1052ff780(auStack_60,alStack_48[0] + 0x40);
      if (*(long *)(lStack_50 + 0x18) != 0) {
        func_0x00010057663c();
        (*extraout_x8)();
        uStack_38 = 0;
        uStack_30 = 0;
        func_0x0001052ff7a0(lStack_50 + 0x18,&uStack_38);
        func_0x000105301d8c(&uStack_38);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x28);
      pcVar6 = (code *)*puVar5;
      func_0x00010002b838(&uStack_38,"Timeout");
      (*pcVar6)(0,&uStack_38,puVar5);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
      func_0x0001000df5a0(auStack_60);
    }
  }
  FUN_105301b68(alStack_48);
  return;
}



/* Entry: 105302e68; end: 105302e9f;  */

long FUN_105302e68(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110877bf8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 105302ea0; end: 105302f2b;  */

undefined ** FUN_105302ea0(void)

{
  return &PTR_DAT_110877bf8;
}



/* Entry: 105302f2c; end: 105302f3f;  */

void FUN_105302f2c(void)

{
  FUN_105302fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105302f40; end: 105302f47;  */

void FUN_105302f40(long param_1)

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



/* Entry: 105302f48; end: 105302f9f;  */

long FUN_105302f48(long param_1,long param_2)

{
  long lVar1;
  code *extraout_x8;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x00010530315c(*(undefined8 *)(param_2 + 0x18));
    (*extraout_x8)();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 105302fa0; end: 105302fcb;  */

undefined8 * FUN_105302fa0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110877c18;
  func_0x0001006393ec(param_1 + 1);
  return param_1;
}



/* Entry: 105302fcc; end: 105302fd7;  */

void FUN_105302fcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110877b48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105302fd8; end: 105302ffb;  */

void FUN_105302fd8(long param_1)

{
  func_0x000100554494();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105302ffc; end: 105303203;  */

void FUN_105302ffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105303004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105303204; end: 105303277; -[SCGrapheneGoogleContactPermissionMetric2 init] */

undefined1 * FUN_105303204(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7738;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105303278; end: 1053033eb;  */

char * FUN_105303278(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                    undefined8 param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  char *pcStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  char *pcStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  char acStack_1c8 [24];
  char *pcStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar9 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_5 = param_4;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_1053033ec;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar7 = pcVar3;
  pcVar8 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar3);
  puVar11 = (undefined8 *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar2 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar6 = "";
    pcVar7 = acStack_118;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pcStack_100 = acStack_118;
    func_0x00010007e5dc(&pcStack_100);
    lVar10 = 0;
    puVar11 = auStack_f8;
    pcVar8 = param_5;
    do {
      if ((&cStack_c9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_128 = FUN_10530361c;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar7;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar6);
  _objc_retain(pcVar7);
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar6);
    _objc_retain(pcVar7);
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_1a8,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_190,pcVar1);
    acStack_1c8[0] = '\0';
    acStack_1c8[1] = '\0';
    acStack_1c8[2] = '\0';
    acStack_1c8[3] = '\0';
    acStack_1c8[4] = '\0';
    acStack_1c8[5] = '\0';
    acStack_1c8[6] = '\0';
    acStack_1c8[7] = '\0';
    acStack_1c8[8] = '\0';
    acStack_1c8[9] = '\0';
    acStack_1c8[10] = '\0';
    acStack_1c8[0xb] = '\0';
    acStack_1c8[0xc] = '\0';
    acStack_1c8[0xd] = '\0';
    acStack_1c8[0xe] = '\0';
    acStack_1c8[0xf] = '\0';
    acStack_1c8[0x10] = '\0';
    acStack_1c8[0x11] = '\0';
    acStack_1c8[0x12] = '\0';
    acStack_1c8[0x13] = '\0';
    acStack_1c8[0x14] = '\0';
    acStack_1c8[0x15] = '\0';
    acStack_1c8[0x16] = '\0';
    acStack_1c8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1c8,auStack_1a8,&lStack_178,2);
    pcVar8 = (char *)(long)(param_1 * 1000.0);
    pcVar1 = acStack_1c8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110877e18);
    pcStack_1b0 = acStack_1c8;
    func_0x00010007e5dc(&pcStack_1b0);
    lVar10 = 0;
    puVar11 = auStack_1a8;
    do {
      if ((&cStack_179)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
    _objc_release(pcVar7);
    _objc_release(pcVar6);
  }
  pcVar3 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar6);
    return pcVar6;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_191 < '\0') {
    __ZdlPv(auStack_1a8[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  _objc_release(pcVar7);
  _objc_release(pcVar6);
  pcVar2 = pcVar3;
  __Unwind_Resume();
  ppcVar4 = &pcStack_210;
  pcStack_1d8 = FUN_10530388c;
  puStack_200 = puVar11;
  pcStack_1f8 = pcVar3;
  pcStack_1f0 = pcVar7;
  pcStack_1e8 = pcVar6;
  pppuStack_1e0 = &ppuStack_130;
  _objc_retain(pcVar1);
  _objc_retain(pcVar8);
  _objc_retain(param_6);
  puStack_208 = PTR_PTR_1126e7740;
  pcStack_210 = pcVar2;
  _objc_msgSendSuper2(&pcStack_210,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(pcVar1);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
    *(char **)((long)ppcVar4 + 8) = pcVar1;
    _objc_release(uVar5);
    _objc_retain(pcVar8);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(char **)((long)ppcVar4 + 0x10) = pcVar8;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x18);
    *(undefined8 *)((long)ppcVar4 + 0x18) = param_6;
    _objc_release(uVar5);
  }
  _objc_release(param_6);
  _objc_release(pcVar8);
  _objc_release(pcVar1);
  return (char *)ppcVar4;
}



/* Entry: 1053033ec; end: 10530361b;  */

char * FUN_1053033ec(double param_1,long param_2,char *param_3,char *param_4,long param_5,
                    undefined8 param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  char *pcStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  char *pcStack_170;
  char *pcStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  char acStack_148 [24];
  char *pcStack_130;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar6 = param_4;
  lVar8 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar11 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    pcVar6 = acStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    lVar8 = param_5;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_a8 = FUN_10530361c;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar6;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar1);
    _objc_retain(pcVar6);
    plVar10 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_128,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_110,pcVar2);
    acStack_148[0] = '\0';
    acStack_148[1] = '\0';
    acStack_148[2] = '\0';
    acStack_148[3] = '\0';
    acStack_148[4] = '\0';
    acStack_148[5] = '\0';
    acStack_148[6] = '\0';
    acStack_148[7] = '\0';
    acStack_148[8] = '\0';
    acStack_148[9] = '\0';
    acStack_148[10] = '\0';
    acStack_148[0xb] = '\0';
    acStack_148[0xc] = '\0';
    acStack_148[0xd] = '\0';
    acStack_148[0xe] = '\0';
    acStack_148[0xf] = '\0';
    acStack_148[0x10] = '\0';
    acStack_148[0x11] = '\0';
    acStack_148[0x12] = '\0';
    acStack_148[0x13] = '\0';
    acStack_148[0x14] = '\0';
    acStack_148[0x15] = '\0';
    acStack_148[0x16] = '\0';
    acStack_148[0x17] = '\0';
    func_0x00010007e1e8(acStack_148,auStack_128,&lStack_f8,2);
    lVar8 = (long)(param_1 * 1000.0);
    pcVar7 = acStack_148;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110877e18);
    pcStack_130 = acStack_148;
    func_0x00010007e5dc(&pcStack_130);
    lVar9 = 0;
    puVar11 = auStack_128;
    do {
      if ((&cStack_f9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
    _objc_release(pcVar6);
    _objc_release(pcVar1);
  }
  pcVar2 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_111 < '\0') {
    __ZdlPv(auStack_128[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_190;
  pcStack_158 = FUN_10530388c;
  puStack_180 = puVar11;
  pcStack_178 = pcVar2;
  pcStack_170 = pcVar6;
  pcStack_168 = pcVar1;
  ppuStack_160 = &puStack_b0;
  _objc_retain(pcVar7);
  _objc_retain(lVar8);
  _objc_retain(param_6);
  puStack_188 = PTR_PTR_1126e7740;
  pcStack_190 = pcVar3;
  _objc_msgSendSuper2(&pcStack_190,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(pcVar7);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
    *(char **)((long)ppcVar4 + 8) = pcVar7;
    _objc_release(uVar5);
    _objc_retain(lVar8);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(long *)((long)ppcVar4 + 0x10) = lVar8;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x18);
    *(undefined8 *)((long)ppcVar4 + 0x18) = param_6;
    _objc_release(uVar5);
  }
  _objc_release(param_6);
  _objc_release(lVar8);
  _objc_release(pcVar7);
  return (char *)ppcVar4;
}



/* Entry: 10530361c; end: 10530388b;  */

char * FUN_10530361c(double param_1,long param_2,char *param_3,char *param_4,long param_5,
                    undefined8 param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *unaff_x22;
  char *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  char acStack_a8 [24];
  char *pcStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_a8[0] = '\0';
    acStack_a8[1] = '\0';
    acStack_a8[2] = '\0';
    acStack_a8[3] = '\0';
    acStack_a8[4] = '\0';
    acStack_a8[5] = '\0';
    acStack_a8[6] = '\0';
    acStack_a8[7] = '\0';
    acStack_a8[8] = '\0';
    acStack_a8[9] = '\0';
    acStack_a8[10] = '\0';
    acStack_a8[0xb] = '\0';
    acStack_a8[0xc] = '\0';
    acStack_a8[0xd] = '\0';
    acStack_a8[0xe] = '\0';
    acStack_a8[0xf] = '\0';
    acStack_a8[0x10] = '\0';
    acStack_a8[0x11] = '\0';
    acStack_a8[0x12] = '\0';
    acStack_a8[0x13] = '\0';
    acStack_a8[0x14] = '\0';
    acStack_a8[0x15] = '\0';
    acStack_a8[0x16] = '\0';
    acStack_a8[0x17] = '\0';
    func_0x00010007e1e8(acStack_a8,auStack_88,&lStack_58,2);
    param_5 = (long)(param_1 * 1000.0);
    pcVar1 = acStack_a8;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110877e18);
    pcStack_90 = acStack_a8;
    func_0x00010007e5dc(&pcStack_90);
    lVar7 = 0;
    unaff_x22 = auStack_88;
    do {
      if ((&cStack_59)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  pcVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return param_3;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_f0;
  pcStack_b8 = FUN_10530388c;
  puStack_e0 = unaff_x22;
  pcStack_d8 = pcVar2;
  pcStack_d0 = param_4;
  pcStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_e8 = PTR_PTR_1126e7740;
  pcStack_f0 = pcVar3;
  _objc_msgSendSuper2(&pcStack_f0,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    _objc_retain(pcVar1);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
    *(char **)((long)ppcVar4 + 8) = pcVar1;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x10);
    *(long *)((long)ppcVar4 + 0x10) = param_5;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = *(undefined8 *)((long)ppcVar4 + 0x18);
    *(undefined8 *)((long)ppcVar4 + 0x18) = param_6;
    _objc_release(uVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(pcVar1);
  return (char *)ppcVar4;
}



/* Entry: 10530388c; end: 105303957; -[SCDurableDeviceIDLoggerImpl initWithUserNotTrackedLogger:deviceIdentifierProvider:authenticationSessionInfoProvider:] */

undefined1 *
FUN_10530388c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e7740;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105303958; end: 10530397b; -[SCDurableDeviceIDLoggerImpl logDurableDeviceIDWithContext:] */

void FUN_105303958(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be52870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logDurableDeviceIDPostAuth_1125723b8);
    return;
  }
  if (param_3 != 1) {
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be52890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logDurableDeviceIDPreAuth_1125723c0);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be52850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logDurableDeviceIDAuth_1125723b0);
  return;
}



/* Entry: 10530397c; end: 105303a23; -[SCDurableDeviceIDLoggerImpl _logDurableDeviceIDPreAuth] */

void FUN_10530397c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b7280;
  _objc_opt_new(PTR_PTR_1126b7280);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25d160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d20(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c20bfe0(puVar1,param_2,1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2b40();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105303a24; end: 105303aff; -[SCDurableDeviceIDLoggerImpl _logDurableDeviceIDAuth] */

void FUN_105303a24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b7288;
  _objc_opt_new(PTR_PTR_1126b7288);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25d160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d20(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17caa0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105303b00; end: 105303b9b; -[SCDurableDeviceIDLoggerImpl _logDurableDeviceIDPostAuth] */

void FUN_105303b00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b7290;
  _objc_opt_new(PTR_PTR_1126b7290);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25d160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d20(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105303b9c; end: 105303bd7; -[SCDurableDeviceIDLoggerImpl .cxx_destruct] */

void FUN_105303b9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105303bd8; end: 105303cbb; -[SCDurableDeviceIDLoggerServiceProvider provide] */

void FUN_105303bd8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7298;
  _objc_alloc(PTR_PTR_1126b7298);
  func_0x00010c00e980();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105303cbc; end: 105303cfb;  */

void FUN_105303cbc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1eba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105303cfc; end: 105303df3; -[SCDurableDeviceIDLoggerServiceProvider _getDurableDeviceIDLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105303cfc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b72a0;
  _objc_alloc(PTR_PTR_1126b72a0);
  lVar2 = param_1 + _DAT_112721488;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272148c;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112721490;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c880(puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105303df4; end: 105303e43; -[SCDurableDeviceIDLoggerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105303df4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272148c);
  _objc_destroyWeak(param_1 + _DAT_112721490);
  _objc_destroyWeak(param_1 + _DAT_112721488);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721494);
  return;
}



/* Entry: 105303e44; end: 1053040ef; -[SCIdentityLoggerServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105303e44(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar1 = param_1 + _DAT_112721498;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf70800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11272149c;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127214a0;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c127ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar11 = (long)_DAT_1127214a4;
  lVar1 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c089460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_1127214a8;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar1 = lVar11;
  func_0x00010c0b42c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  param_1 = param_1 + _DAT_1127214ac;
  _objc_loadWeakRetained();
  lVar11 = param_1;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1053040f0;
  puStack_b0 = &UNK_110877f10;
  puVar7 = PTR_PTR_1126ae720;
  lStack_a8 = lVar3;
  lStack_a0 = lVar6;
  lStack_98 = lVar5;
  lStack_90 = lVar2;
  lStack_88 = lVar1;
  lStack_80 = lVar11;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_c8);
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar9;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x105304128;
  puStack_f8 = &UNK_110877f40;
  puVar8 = PTR_PTR_1126ae720;
  lStack_f0 = lVar3;
  lStack_e8 = lVar6;
  lStack_e0 = lVar5;
  lStack_d8 = lVar4;
  lStack_d0 = lVar11;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_110);
  _objc_retainAutoreleasedReturnValue();
  puStack_138 = puVar9;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x105304160;
  puStack_120 = &UNK_110877f70;
  puVar9 = PTR_PTR_1126ae720;
  lStack_118 = lVar3;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_138);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b72c0;
  _objc_alloc(PTR_PTR_1126b72c0);
  func_0x00010c0467a0();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar11);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1053040f0; end: 10530418f;  */

void FUN_1053040f0(void)

{
  _objc_alloc(PTR_PTR_1126b72a8);
  func_0x00010c018820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105304190; end: 105304203; -[SCIdentityLoggerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105304190(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127214ac);
  _objc_destroyWeak(param_1 + _DAT_1127214a8);
  _objc_destroyWeak(param_1 + _DAT_1127214a0);
  _objc_destroyWeak(param_1 + _DAT_1127214a4);
  _objc_destroyWeak(param_1 + _DAT_11272149c);
  _objc_destroyWeak(param_1 + _DAT_112721498);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127214b0);
  return;
}



/* Entry: 105304204; end: 105304283; -[SCIdentityPerformanceLogger addPathFrom:to:inGraph:] */

void FUN_105304204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010b9efc30(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efc30(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa620(param_5,param_2,param_3,param_4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105304284; end: 105304303; -[SCIdentityPerformanceLogger addPathFrom:toSCAPageType:inGraph:] */

void FUN_105304284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010b9efc30(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bc9107c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa620(param_5,param_2,param_3,param_4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105304304; end: 10530451b; -[SCIdentityPerformanceLogger initWithGrapheneRegistry:userNotTrackedLogger:lastLoginInfoRepository:authenticationSessionInfoProvider:] */

undefined1 *
FUN_105304304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126e7748;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined1 *)puVar2;
    func_0x00010bf22280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b72c8;
    _objc_alloc();
    func_0x00010c010be0();
    uVar8 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined **)((long)puVar2 + 8) = puVar4;
    _objc_release(uVar8);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar8 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined **)((long)puVar2 + 0x10) = puVar4;
    _objc_release(uVar8);
    _objc_release(puVar5);
    _objc_retain(param_3);
    uVar8 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = param_3;
    _objc_release(uVar8);
    _objc_retain(param_4);
    uVar8 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = param_4;
    _objc_release(uVar8);
    _objc_retain(param_5);
    uVar8 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined8 *)((long)puVar2 + 0x38) = param_5;
    _objc_release(uVar8);
    _objc_retain(param_6);
    uVar8 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined8 *)((long)puVar2 + 0x30) = param_6;
    _objc_release(uVar8);
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar1 = ppuVar7;
    }
    _objc_retain(ppuVar1);
    uVar8 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined ***)((long)puVar2 + 0x28) = ppuVar1;
    _objc_release(uVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 10530451c; end: 105304587; -[SCIdentityPerformanceLogger logState:triggeredBy:] */

void FUN_10530451c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010b9efc30(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b39e4(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be58fa0(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105304588; end: 10530458f; -[SCIdentityPerformanceLogger logState:] */

void FUN_105304588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b0930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logState_triggeredBy__112609c58,param_3,6);
  return;
}



/* Entry: 105304590; end: 105304637; -[SCIdentityPerformanceLogger resetTransitionVisits] */

void FUN_105304590(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105304638; end: 105304663;  */

void FUN_105304638(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be942a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105304664; end: 10530466b; -[SCIdentityPerformanceLogger _resetTransitionVisitsOnPerformer] */

void FUN_105304664(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_resetVisits_11262c180);
  return;
}



/* Entry: 10530466c; end: 1053046f3; -[SCIdentityPerformanceLogger logUserTrackedState:triggeredBy:userId:] */

void FUN_10530466c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010b9efc30(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b39e4(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5a6a0(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053046f4; end: 1053046f7; -[SCIdentityPerformanceLogger logStateFromString:triggeredBy:] */

void FUN_1053046f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logStateFromString_triggeredBy__112573d88);
  return;
}



/* Entry: 1053046f8; end: 1053046ff; -[SCIdentityPerformanceLogger logStateFromString:] */

void FUN_1053046f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logStateFromString_triggeredBy__112573d88,param_3,0);
  return;
}



/* Entry: 105304700; end: 10530471b; -[SCIdentityPerformanceLogger buildGraph] */

void FUN_105304700(void)

{
  _objc_alloc_init(PTR_PTR_1126b72d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10530471c; end: 105304727; -[SCIdentityPerformanceLogger newEvent] */

void FUN_10530471c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_new_11034d2b0)(PTR_PTR_1126b72d8);
  return;
}



/* Entry: 105304728; end: 10530472f; -[SCIdentityPerformanceLogger logTransition:] */

void FUN_105304728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be59ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logTransition_userId__112574158,param_3,0);
  return;
}



/* Entry: 105304730; end: 105304733; -[SCIdentityPerformanceLogger logUserTrackedTransition:userId:] */

void FUN_105304730(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be59ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logTransition_userId__112574158);
  return;
}



/* Entry: 105304734; end: 105304b17; -[SCIdentityPerformanceLogger _logGrapheneEvent:] */

void FUN_105304734(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be34120(param_1);
  lVar2 = param_1;
  func_0x00010c25d8c0(param_1,param_2,(uint)lVar1 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af378;
  func_0x00010c0b4380(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar5 = param_3;
  func_0x00010bf0a640(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dd15d8,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bf0a640(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd15f8,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c0b4300();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf0a640(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0b4ca0();
  func_0x00010befbfe0(uVar5,param_2,puVar4,uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126af378;
  func_0x00010c0b4380(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar11 = puVar10;
  func_0x00010c2ac460(puVar10,param_2,&PTR____CFConstantStringClassReference_110daedb8,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = param_3;
  func_0x00010bf0a640();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf0a640();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd1638);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar10 = puVar11;
  func_0x00010c2ac460(puVar11,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c0b4300();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf0a640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar8 = uVar6;
  func_0x00010c0e00e0(uVar6,param_2,&PTR____CFConstantStringClassReference_110dd1618);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c0b4ca0();
  func_0x00010befbfe0(uVar5,param_2,puVar10,uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(puVar3);
  _objc_release(puVar10);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105304b18; end: 105304c17; -[SCIdentityPerformanceLogger _logStateFromString:triggeredBy:] */

void FUN_105304b18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105304c18; end: 105304c4f;  */

void FUN_105304c18(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be055e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105304c50; end: 105304d7f; -[SCIdentityPerformanceLogger _logUserTrackedStateFromString:triggeredBy:userId:] */

void FUN_105304c50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105304d80; end: 105304db7;  */

void FUN_105304d80(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be055e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105304db8; end: 105304e3f; -[SCIdentityPerformanceLogger _doLogStateFromString:triggeredBy:userId:] */

void FUN_105304db8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  if (param_5 == 0) {
    func_0x00010c0b0920(uVar1,param_2,param_3,param_4);
  }
  else {
    func_0x00010c0b2e80();
  }
  func_0x00010be055c0(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105304e40; end: 105304f43; -[SCIdentityPerformanceLogger _doLogSingleState:triggeredBy:] */

void FUN_105304e40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af378;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0b4360(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dd15b8,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b4300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105304f44; end: 10530503b; -[SCIdentityPerformanceLogger _logTransition:userId:] */

void FUN_105304f44(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0d88a0();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) != 0) {
    func_0x00010c0f8f20(uVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd8b00();
  func_0x00010bea44e0(param_1);
  _objc_release(uVar3);
  if (param_4 != 0) {
    func_0x00010c21e4c0(uVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar3);
  func_0x00010be541e0(param_1);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10530503c; end: 105305077; -[SCIdentityPerformanceLogger stringWithBool:] */

void FUN_10530503c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105305078; end: 1053050b7; -[SCIdentityPerformanceLogger _hasLoggedInBefore] */

undefined8 FUN_105305078(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd8b00();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1053050b8; end: 105305183; -[SCIdentityPerformanceLogger _setHasLoggedInBeforeOnEvent:withValue:] */

void FUN_1053050b8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setHasLoggedInBefore__112647308);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_3;
    func_0x00010c0cca80(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSInvocation_1126b71d0;
    func_0x00010c06abc0(PTR__OBJC_CLASS___NSInvocation_1126b71d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbb60();
    func_0x00010c2121a0(puVar2);
    func_0x00010c16a2c0(puVar2);
    func_0x00010c06abe0(puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105305184; end: 10530518b; -[SCIdentityPerformanceLogger authenticationSessionInfoProvider] */

undefined8 FUN_105305184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10530518c; end: 105305193; -[SCIdentityPerformanceLogger lastLoginInfoRepository] */

undefined8 FUN_10530518c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105305194; end: 1053051ff; -[SCIdentityPerformanceLogger .cxx_destruct] */

void FUN_105305194(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105305200; end: 105305273; -[SCIdentityRequestLogger initWithGrapheneRegistry:] */

undefined1 * FUN_105305200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7750;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105305274; end: 10530532b; -[SCIdentityRequestLogger logGrpcRequest:] */

void FUN_105305274(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af590;
  _objc_retain(param_3);
  func_0x00010c0853a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c085380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10530532c; end: 1053054ff; -[SCIdentityRequestLogger logGrpcResponse:status:grpcStatus:latencyMs:] */

void FUN_10530532c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126af590;
  _objc_retain(param_3);
  func_0x00010c0853c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110daf4d8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daf518,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c085380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c085380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 105305500; end: 10530550b; -[SCIdentityRequestLogger .cxx_destruct] */

void FUN_105305500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10530550c; end: 10530550f; -[SCLoginStateTransitionLogger _resetTransitionVisits] */

void FUN_10530550c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetTransitionVisits_11262c0c0);
  return;
}



/* Entry: 105305510; end: 1053055f3; -[SCLoginStateTransitionLogger initWithGrapheneRegistry:userNotTrackedLogger:lastLoginInfoRepository:deviceInfoProvider:loginSessionService:authenticationSessionInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105305510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e7758;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithGrapheneRegistry_userNot_112528e08,param_3,param_4,
                      param_5,param_8);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127214d4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127214d8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 1053055f4; end: 10530565b; -[SCLoginStateTransitionLogger logState:triggeredBy:] */

void FUN_1053055f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (param_3 == 0x2b) {
    func_0x00010be94280(param_1);
  }
  puStack_38 = PTR_PTR_1126e7758;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_logState_triggeredBy__112609c58,param_3,param_4);
  return;
}



/* Entry: 10530565c; end: 1053056b3; -[SCLoginStateTransitionLogger newEvent] */

undefined * FUN_10530565c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b72e0;
  _objc_opt_new(PTR_PTR_1126b72e0);
  func_0x00010be204c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0960(puVar1,param_2,param_1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 1053056b4; end: 105305963; -[SCLoginStateTransitionLogger buildGraph] */

void FUN_1053056b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b72d0;
  _objc_alloc_init(PTR_PTR_1126b72d0);
  func_0x00010befa640(param_1,param_2,0x2c,0x33,puVar1);
  func_0x00010befa640(param_1,param_2,0x2c,0x65,puVar1);
  func_0x00010befa640(param_1,param_2,0x2c,0x34,puVar1);
  func_0x00010befa640(param_1,param_2,0x2c,0x35,puVar1);
  func_0x00010befa640(param_1,param_2,0x2c,0x36,puVar1);
  func_0x00010befa640(param_1,param_2,0x2b,0x2c,puVar1);
  func_0x00010befa640(param_1,param_2,0x2b,0x4a,puVar1);
  func_0x00010befa640(param_1,param_2,0x2c,0x2f,puVar1);
  func_0x00010befa640(param_1,param_2,0x2f,0x32,puVar1);
  func_0x00010befa640(param_1,param_2,0x32,0x33,puVar1);
  func_0x00010befa640(param_1,param_2,0x32,0x65,puVar1);
  func_0x00010befa640(param_1,param_2,0x32,0x34,puVar1);
  func_0x00010befa640(param_1,param_2,0x32,0x35,puVar1);
  func_0x00010befa640(param_1,param_2,0x32,0x36,puVar1);
  func_0x00010befa640(param_1,param_2,0x2b,0x30,puVar1);
  func_0x00010befa640(param_1,param_2,0x2b,0x31,puVar1);
  func_0x00010befa640(param_1,param_2,0x30,0x33,puVar1);
  func_0x00010befa640(param_1,param_2,0x37,0x38,puVar1);
  func_0x00010befa640(param_1,param_2,0x39,0x3a,puVar1);
  func_0x00010befa640(param_1,param_2,0x3b,0x3c,puVar1);
  func_0x00010befa640(param_1,param_2,0x3d,0x3e,puVar1);
  func_0x00010befa640(param_1,param_2,0x6e,0x6f,puVar1);
  func_0x00010befa640(param_1,param_2,0x70,0x71,puVar1);
  func_0x00010befa640(param_1,param_2,0x3f,0x40,puVar1);
  func_0x00010befa640(param_1,param_2,0x41,0x43,puVar1);
  func_0x00010befa640(param_1,param_2,0x42,0x43,puVar1);
  func_0x00010befa640(param_1,param_2,0x44,0x45,puVar1);
  func_0x00010befa640(param_1,param_2,0x46,0x47,puVar1);
  func_0x00010befa640(param_1,param_2,0x48,0x49,puVar1);
  func_0x00010befa640(param_1,param_2,0x66,0x67,puVar1);
  func_0x00010befa640(param_1,param_2,0x68,0x69,puVar1);
  func_0x00010befa640(param_1,param_2,0x52,0x53,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105305964; end: 105305acf; -[SCLoginStateTransitionLogger _getLoginMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105305964(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126af0e8;
  _objc_opt_new(PTR_PTR_1126af0e8);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127214d4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc74a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c08c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127214d8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc1fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010c089460(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfd8b00();
  func_0x00010c1a63a0(puVar1,param_2,lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010bf10d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ca80(puVar1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105305ad0; end: 105305b0f; -[SCLoginStateTransitionLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105305ad0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127214d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127214d4,0);
  return;
}



/* Entry: 105305b10; end: 105305ba7; -[SCSignupStateTransitionLogger initWithGrapheneRegistry:userNotTrackedLogger:lastLoginInfoRepository:registrationFlowUUIDService:authenticationSessionInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105305b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e7760;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithGrapheneRegistry_userNot_112528e08,param_3,param_4,
                      param_5,param_7);
  uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127214dc);
  *(undefined8 *)((long)puVar1 + (long)_DAT_1127214dc) = param_6;
  _objc_release(uVar2);
  return (undefined1 *)puVar1;
}



/* Entry: 105305ba8; end: 105305bff; -[SCSignupStateTransitionLogger newEvent] */

undefined * FUN_105305ba8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b72e8;
  _objc_opt_new(PTR_PTR_1126b72e8);
  func_0x00010be22080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e98c0(puVar1,param_2,param_1);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 105305c00; end: 105305eaf; -[SCSignupStateTransitionLogger buildGraph] */

void FUN_105305c00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b72d0;
  _objc_alloc_init(PTR_PTR_1126b72d0);
  func_0x00010befa660(param_1,param_2,0x20,4,puVar1);
  func_0x00010befa660(param_1,param_2,0x21,4,puVar1);
  func_0x00010befa660(param_1,param_2,0x22,4,puVar1);
  func_0x00010befa640(param_1,param_2,0,0x1f,puVar1);
  func_0x00010befa640(param_1,param_2,0,8,puVar1);
  func_0x00010befa640(param_1,param_2,0,0x1a,puVar1);
  func_0x00010befa640(param_1,param_2,0xd,0x1f,puVar1);
  func_0x00010befa640(param_1,param_2,0xd,0x1a,puVar1);
  func_0x00010befa640(param_1,param_2,0x1a,0x1f,puVar1);
  func_0x00010befa640(param_1,param_2,8,0xd,puVar1);
  func_0x00010befa640(param_1,param_2,8,0xb,puVar1);
  func_0x00010befa640(param_1,param_2,0xb,0xc,puVar1);
  func_0x00010befa640(param_1,param_2,0xc,0xd,puVar1);
  func_0x00010befa640(param_1,param_2,1,2,puVar1);
  func_0x00010befa640(param_1,param_2,0x6a,2,puVar1);
  func_0x00010befa640(param_1,param_2,1,3,puVar1);
  func_0x00010befa640(param_1,param_2,4,5,puVar1);
  func_0x00010befa640(param_1,param_2,0x10,0x11,puVar1);
  func_0x00010befa640(param_1,param_2,0x10,0x12,puVar1);
  func_0x00010befa640(param_1,param_2,0x10,99,puVar1);
  func_0x00010befa640(param_1,param_2,0x10,100,puVar1);
  func_0x00010befa640(param_1,param_2,0x11,0x12,puVar1);
  func_0x00010befa640(param_1,param_2,0x11,99,puVar1);
  func_0x00010befa640(param_1,param_2,0x12,0x13,puVar1);
  func_0x00010befa640(param_1,param_2,0x10,0x13,puVar1);
  func_0x00010befa640(param_1,param_2,0x14,0x15,puVar1);
  func_0x00010befa640(param_1,param_2,0x16,0x17,puVar1);
  func_0x00010befa640(param_1,param_2,0x18,0x19,puVar1);
  func_0x00010befa640(param_1,param_2,0x1b,0x1c,puVar1);
  func_0x00010befa640(param_1,param_2,0x1d,0x1e,puVar1);
  func_0x00010befa640(param_1,param_2,0x23,0x26,puVar1);
  func_0x00010befa640(param_1,param_2,0x23,0x29,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105305eb0; end: 105305fcb; -[SCSignupStateTransitionLogger _getRegistrationMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105305eb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b72f0;
  _objc_opt_new(PTR_PTR_1126b72f0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127214dc);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfcb960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9940(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010c089460(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bfd8b00();
  func_0x00010c1a63a0(puVar1,param_2,lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010bf10d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ca80(puVar1,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105305fcc; end: 10530600b; -[SCSignupStateTransitionLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105305fcc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127214dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127214e0,0);
  return;
}



/* Entry: 10530600c; end: 10530605b; -[SCStateTransitionGraph init] */

undefined1 * FUN_10530600c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7768;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be39360(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10530605c; end: 1053060d7; -[SCStateTransitionGraph addPath:to:] */

void FUN_10530605c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b72f8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c016720();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bdc7c80(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053060d8; end: 105306163; -[SCStateTransitionGraph visit:by:] */

void FUN_1053060d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7300;
  _objc_retain(param_3);
  func_0x00010c0d9660(puVar1,param_2,param_3,param_4);
  uVar2 = param_1;
  func_0x00010be635c0(param_1,param_2,puVar1);
  func_0x00010be5d960(param_1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010bedcdc0(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


