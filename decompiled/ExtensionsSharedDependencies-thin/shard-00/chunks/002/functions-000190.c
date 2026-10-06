/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0045e554; end: 0045e567;  */

void FUN_0045e554(void)

{
  func_0x0045e570();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045e568; end: 0045e57b;  */

void FUN_0045e568(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045e8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0045e57c; end: 0045e59f;  */

void FUN_0045e57c(long param_1)

{
  func_0x0045e910();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 0045e5a0; end: 0045e5a3;  */

void FUN_0045e5a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e5600;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045e5a4; end: 0045e5b7;  */

void FUN_0045e5a4(void)

{
  func_0x0045e5d0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045e5b8; end: 0045e5db;  */

void FUN_0045e5b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045e8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0045e5dc; end: 0045e5ff;  */

void FUN_0045e5dc(long param_1)

{
  func_0x0045e910();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 0045e600; end: 0045e673;  */

undefined1 * FUN_0045e600(undefined8 param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x0045e8f8();
  uVar3 = 1;
  FUN_0045e674();
  *puStack_30 = &PTR_FUN_009e57e8;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_009e5838;
  *(undefined1 *)(puStack_30 + 4) = *param_2;
  func_0x0045e8e0();
  func_0x0045e708();
  func_0x0045e8cc(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_0045e69c();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 0045e674; end: 0045e69b;  */

long FUN_0045e674(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_0045e69c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 0045e69c; end: 0045e6c7;  */

void FUN_0045e69c(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0x28);
    return;
  }
  FUN_0040cee8();
  *param_1 = &PTR_FUN_009e57e8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045e6c8; end: 0045e6cb;  */

void FUN_0045e6c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e57e8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045e6cc; end: 0045e6df;  */

void FUN_0045e6cc(void)

{
  func_0x0045e6f8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045e6e0; end: 0045e717;  */

void FUN_0045e6e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045e8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0045e718; end: 0045e7ef;  */

void FUN_0045e718(long param_1)

{
  func_0x0045e910();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 0045e7f0; end: 0045e7f3;  */

void FUN_0045e7f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e56a8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045e7f4; end: 0045e807;  */

void FUN_0045e7f4(void)

{
  FUN_0045e878();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045e808; end: 0045e853;  */

void FUN_0045e808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045e8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0045e854; end: 0045e877;  */

void FUN_0045e854(long param_1)

{
  func_0x0045e910();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 0045e878; end: 0045e883;  */

void FUN_0045e878(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e56a8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045e884; end: 0045e8a7;  */

void FUN_0045e884(long param_1)

{
  func_0x0045e910();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 0045e8a8; end: 0045e973;  */

void FUN_0045e8a8(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 0045e974; end: 0045e9c3;  */

void FUN_0045e974(undefined8 *param_1,long *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  if (*param_2 == 0) {
    func_0x0045e9e8(auStack_30);
    func_0x0045edcc();
    FUN_0045ed30();
  }
  else {
    FUN_0045e9c4(auStack_30);
    func_0x0045edcc();
    FUN_0045ebd8();
  }
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  return;
}



/* Entry: 0045e9c4; end: 0045ea07;  */

void FUN_0045e9c4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_0045ea08(&uStack_11,param_1);
  return;
}



/* Entry: 0045ea08; end: 0045ea6f;  */

long FUN_0045ea08(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x0045ed6c();
  FUN_0045ea70(auStack_40,1);
  FUN_0045eac4();
  func_0x0045ed9c();
  func_0x0045ebc8();
  func_0x0045ed84();
  if ((bool)in_ZR) {
    return lStack_30;
  }
  lVar1 = lStack_30;
  ___stack_chk_fail();
  func_0x0045ebc8(auStack_40);
  __Unwind_Resume();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  FUN_0045ea98();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 0045ea70; end: 0045ea97;  */

long FUN_0045ea70(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_0045ea98();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 0045ea98; end: 0045eac3;  */

undefined8 * FUN_0045ea98(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x555555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(puVar1);
    return puVar1;
  }
  FUN_0040cee8();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e5888;
  param_1[1] = 0;
  FUN_0045eb24(param_1 + 3);
  return param_1;
}



/* Entry: 0045eac4; end: 0045eb03;  */

undefined8 * FUN_0045eac4(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e5888;
  param_1[1] = 0;
  FUN_0045eb24(param_1 + 3);
  return param_1;
}



/* Entry: 0045eb04; end: 0045eb07;  */

void FUN_0045eb04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e5888;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045eb08; end: 0045eb1b;  */

void FUN_0045eb08(void)

{
  FUN_0045ebb4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045eb1c; end: 0045eb23;  */

void FUN_0045eb1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045edbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0045eb24; end: 0045ebb3;  */

undefined8 * FUN_0045eb24(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = &PTR_FUN_009e7ba0;
  param_1[2] = uVar5;
  param_1[1] = uVar4;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0045eb8c(&uStack_30);
  return param_1;
}



/* Entry: 0045ebb4; end: 0045ebd7;  */

void FUN_0045ebb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e5888;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045ebd8; end: 0045ebff;  */

long FUN_0045ebd8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0045ec00; end: 0045ec5f;  */

long FUN_0045ec00(void)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x0045ed6c();
  uVar3 = 1;
  FUN_0045ec60(auStack_40);
  FUN_0045ecb4();
  func_0x0045ed9c();
  func_0x0045ed20();
  func_0x0045ed84();
  if ((bool)in_ZR) {
    return lStack_30;
  }
  lVar1 = lStack_30;
  ___stack_chk_fail();
  func_0x0045ed20(auStack_40);
  __Unwind_Resume();
  *(undefined8 *)(lVar1 + 8) = uVar3;
  lVar2 = lVar1;
  FUN_0045ec88();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 0045ec60; end: 0045ec87;  */

long FUN_0045ec60(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_0045ec88();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 0045ec88; end: 0045ecb3;  */

undefined8 * FUN_0045ec88(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x666666666666667) {
    puVar1 = (undefined8 *)(param_2 * 0x28);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(puVar1);
    return puVar1;
  }
  FUN_0040cee8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e58d8;
  FUN_00476ae8(param_1 + 3);
  return param_1;
}



/* Entry: 0045ecb4; end: 0045ecef;  */

undefined8 * FUN_0045ecb4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e58d8;
  FUN_00476ae8(param_1 + 3);
  return param_1;
}



/* Entry: 0045ecf0; end: 0045ecf3;  */

void FUN_0045ecf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e58d8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045ecf4; end: 0045ed07;  */

void FUN_0045ecf4(void)

{
  func_0x0045ed10();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045ed08; end: 0045ed2f;  */

void FUN_0045ed08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045edbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0045ed30; end: 0045ed57;  */

long FUN_0045ed30(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0045ed58; end: 0045eddf;  */

void FUN_0045ed58(void)

{
  return;
}



/* Entry: 0045ede0; end: 0045f077;  */

void FUN_0045ede0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  qword qVar5;
  undefined8 uVar6;
  section *psVar7;
  char *pcVar8;
  char *pcVar9;
  qword *pqVar10;
  char *pcStack_108;
  section *psStack_100;
  qword *pqStack_f8;
  char *pcStack_f0;
  qword *pqStack_e8;
  char *pcStack_e0;
  char *pcStack_d0;
  section *psStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  qword qStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  long lStack_98;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  section *psStack_58;
  
  FUN_006ad024(auStack_88,"scn_notifications::NotificationHandlerLite::create");
  FUN_0045e9c4(&pcStack_a0,param_5);
  FUN_00425cb4(&pqStack_e8,"scn_notification_handler_lite");
  psStack_58 = (section *)lStack_98;
  pcStack_60 = pcStack_a0;
  if (lStack_98 != 0) {
    plVar1 = (long *)(lStack_98 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0045d56c(&pcStack_d0,param_2 + 0x18,param_2 + 0x30,param_2 + 0x60,param_3,param_4,&pqStack_e8,
               &pcStack_60,param_6);
  func_0x0045a054(&pcStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pqStack_e8);
  pcVar8 = segment_command_00000020.segname + 8;
  __Znwm();
  uVar6 = uStack_a8;
  qVar5 = qStack_b0;
  *(qword *)(pcVar8 + 8) = 0;
  *(qword *)(pcVar8 + 0x10) = 0;
  *(undefined ***)pcVar8 = &PTR_FUN_009e5980;
  pqVar10 = (qword *)(pcVar8 + 0x18);
  *pqVar10 = (qword)&PTR_DAT_009e5928;
  qStack_b0 = 0;
  uStack_a8 = 0;
  *(undefined8 *)(pcVar8 + 0x28) = uVar6;
  *(qword *)(pcVar8 + 0x20) = qVar5;
  pqStack_e8 = (qword *)0x0;
  pcStack_e0 = (char *)0x0;
  FUN_0045e884(&pqStack_e8);
  psVar7 = &section_00000068;
  pqStack_f8 = pqVar10;
  pcStack_f0 = pcVar8;
  __Znwm();
  psStack_58 = psStack_c8;
  pcStack_60 = pcStack_d0;
  pcVar9 = psVar7->sectname + 8;
  pcVar9[0] = '\0';
  pcVar9[1] = '\0';
  pcVar9[2] = '\0';
  pcVar9[3] = '\0';
  pcVar9[4] = '\0';
  pcVar9[5] = '\0';
  pcVar9[6] = '\0';
  pcVar9[7] = '\0';
  psVar7->segname[0] = '\0';
  psVar7->segname[1] = '\0';
  psVar7->segname[2] = '\0';
  psVar7->segname[3] = '\0';
  psVar7->segname[4] = '\0';
  psVar7->segname[5] = '\0';
  psVar7->segname[6] = '\0';
  psVar7->segname[7] = '\0';
  *(undefined ***)psVar7->sectname = &PTR_FUN_009e59d0;
  pcVar2 = psVar7->segname + 8;
  pqStack_f8 = (qword *)0x0;
  pcStack_f0 = (char *)0x0;
  pcStack_d0 = (char *)0x0;
  psStack_c8 = (section *)0x0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  pqStack_e8 = pqVar10;
  pcStack_e0 = pcVar8;
  func_0x00458960(pcVar2,&pqStack_e8,&pcStack_60,&uStack_70);
  func_0x0045a054(&uStack_70);
  func_0x0045a078(&pcStack_60);
  func_0x0045a09c(&pqStack_e8);
  pcVar8 = (char *)psVar7->size;
  if ((pcVar8 == (char *)0x0) || (*(qword *)(pcVar8 + 8) == 0xffffffffffffffff)) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
      if (bVar4) {
        *(long *)pcVar9 = *(long *)pcVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pcVar9 = psVar7->segname;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
      if (bVar4) {
        *(long *)pcVar9 = *(long *)pcVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pqStack_e8 = (qword *)psVar7->addr;
    psVar7->addr = (qword)pcVar2;
    psVar7->size = (qword)psVar7;
    pcStack_108 = pcVar2;
    psStack_100 = psVar7;
    pcStack_e0 = pcVar8;
    pcStack_60 = pcVar2;
    psStack_58 = psVar7;
    func_0x0045a0c0(&pqStack_e8);
    func_0x00459188(&pcStack_60);
  }
  *param_1 = (long)pcVar2;
  param_1[1] = (long)psVar7;
  pcStack_108 = (char *)0x0;
  psStack_100 = (section *)0x0;
  func_0x00459188(&pcStack_108);
  FUN_0045f1e0(&pqStack_f8);
  FUN_0045f150(&pcStack_d0);
  FUN_0045ebd8(&pcStack_a0);
  FUN_006ad0cc(auStack_88);
  return;
}



/* Entry: 0045f078; end: 0045f07f;  */

void FUN_0045f078(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_0045e884(&uStack_20);
  return;
}



/* Entry: 0045f080; end: 0045f0ab;  */

void FUN_0045f080(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0045e884(&uStack_20);
  return;
}



/* Entry: 0045f0ac; end: 0045f107;  */

void FUN_0045f0ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    uStack_30 = 0;
    uStack_28 = 0;
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,&uStack_30,param_3);
    func_0x0045b7b4(&uStack_30);
  }
  return;
}



/* Entry: 0045f108; end: 0045f13b;  */

void FUN_0045f108(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0045f118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    return;
  }
  return;
}



/* Entry: 0045f13c; end: 0045f14f;  */

void FUN_0045f13c(void)

{
  func_0x0045f180();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045f150; end: 0045f1af;  */

undefined8 FUN_0045f150(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_0045e884(param_1 + 0x20);
  func_0x0045a054(param_1 + 0x10);
  func_0x0045addc();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 0045f1b0; end: 0045f1b3;  */

void FUN_0045f1b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e5980;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045f1b4; end: 0045f1c7;  */

void FUN_0045f1b4(void)

{
  func_0x0045f1d0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045f1c8; end: 0045f1df;  */

void FUN_0045f1c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045f250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0045f1e0; end: 0045f20b;  */

long FUN_0045f1e0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0045f20c; end: 0045f20f;  */

void FUN_0045f20c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e59d0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045f210; end: 0045f223;  */

void FUN_0045f210(void)

{
  func_0x0045f22c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045f224; end: 0045f253;  */

void FUN_0045f224(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045f250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0045f254; end: 0045f3d7;  */

void FUN_0045f254(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  
  FUN_006ad024(auStack_58,"scn_notifications::NotificationHandlerLoggedOut::create");
  FUN_0045e974(auStack_68,param_5);
  FUN_00425cb4(auStack_b0,"scn_notification_handler_logged_out");
  uStack_c0 = 0;
  uStack_b8 = 0;
  FUN_0045d56c(auStack_98,param_2,param_2 + 0x18,param_2 + 0x48,param_3,param_4,auStack_b0,
               auStack_68,&uStack_c0);
  func_0x0045f4d0(&uStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  FUN_0045f3d8(auStack_b0,auStack_78);
  func_0x0045f3fc(&uStack_c0,auStack_b0,auStack_98,auStack_88);
  param_1[1] = uStack_b8;
  *param_1 = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  FUN_0045b790(&uStack_c0);
  FUN_0045f694(auStack_b0);
  FUN_0045f150(auStack_98);
  func_0x0045a054(auStack_68);
  FUN_006ad0cc(auStack_58);
  return;
}



/* Entry: 0045f3d8; end: 0045f427;  */

void FUN_0045f3d8(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_0045f4f8(&uStack_11,param_1);
  return;
}



/* Entry: 0045f428; end: 0045f48f;  */

void FUN_0045f428(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_0045e884(&uStack_20);
  return;
}



/* Entry: 0045f490; end: 0045f4a3;  */

void FUN_0045f490(void)

{
  FUN_0045f4a4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045f4a4; end: 0045f4f7;  */

undefined8 * FUN_0045f4a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_009e5a20;
  FUN_0045e884(param_1 + 1);
  return param_1;
}



/* Entry: 0045f4f8; end: 0045f577;  */

undefined1 * FUN_0045f4f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long *unaff_x19;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  puVar2 = auStack_40;
  func_0x0045f94c();
  FUN_0045f578(auStack_40,1);
  FUN_0045f5d0(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *unaff_x19 = lVar1 + 0x18;
  unaff_x19[1] = lVar1;
  func_0x0045f684();
  func_0x0045f964();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0045f684(auStack_40);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = param_2;
  puVar3 = puVar2;
  FUN_0045f5a0();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 0045f578; end: 0045f59f;  */

long FUN_0045f578(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_0045f5a0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 0045f5a0; end: 0045f5cf;  */

undefined8 * FUN_0045f5a0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x492492492492493) {
    puVar1 = (undefined8 *)(param_2 * 0x38);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(puVar1);
    return puVar1;
  }
  FUN_0040cee8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e5a80;
  FUN_0045f620(param_1 + 3);
  return param_1;
}



/* Entry: 0045f5d0; end: 0045f5ff;  */

undefined8 * FUN_0045f5d0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e5a80;
  FUN_0045f620(param_1 + 3);
  return param_1;
}



/* Entry: 0045f600; end: 0045f603;  */

void FUN_0045f600(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e5a80;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045f604; end: 0045f617;  */

void FUN_0045f604(void)

{
  FUN_0045f674();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045f618; end: 0045f61f;  */

void FUN_0045f618(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045f990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0045f620; end: 0045f673;  */

undefined8 * FUN_0045f620(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = &PTR_DAT_009e5a20;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined4 *)(param_1 + 3) = 1;
  FUN_0045e884(&uStack_30);
  return param_1;
}



/* Entry: 0045f674; end: 0045f693;  */

void FUN_0045f674(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e5a80;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045f694; end: 0045f6bb;  */

long FUN_0045f694(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0045f6bc; end: 0045f757;  */

void FUN_0045f6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined1 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  puVar5 = auStack_50;
  func_0x0045f94c();
  FUN_0045f774(auStack_50,1);
  FUN_0045f7cc(lStack_40,param_2,param_3,param_4);
  lVar6 = lStack_40;
  lStack_40 = 0;
  FUN_0045f758(lVar6 + 0x18);
  func_0x0045f934();
  func_0x0045f964();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0045f934(auStack_50);
  __Unwind_Resume();
  *extraout_x8 = puVar5;
  extraout_x8[1] = lVar6;
  puVar2 = (undefined8 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = (undefined8 *)(puVar5 + 8);
  }
  if ((puVar2 != (undefined8 *)0x0) && ((puVar2[1] == 0 || (*(long *)(puVar2[1] + 8) == -1)))) {
    pcStack_58 = FUN_0045f758;
    lStack_78 = extraout_x8[1];
    if (lStack_78 != 0) {
      plVar1 = (long *)(lStack_78 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = (long *)(lStack_78 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_68 = puVar2[1];
    uStack_70 = *puVar2;
    *puVar2 = puVar5;
    puVar2[1] = lStack_78;
    puStack_80 = puVar5;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x0045b848(&uStack_70);
    func_0x0045b790(&puStack_80);
    return;
  }
  return;
}



/* Entry: 0045f758; end: 0045f773;  */

void FUN_0045f758(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar2 = (long *)0x0;
  if (param_2 != 0) {
    plVar2 = (long *)(param_2 + 8);
  }
  if ((plVar2 != (long *)0x0) && ((plVar2[1] == 0 || (*(long *)(plVar2[1] + 8) == -1)))) {
    lStack_28 = param_1[1];
    if (lStack_28 != 0) {
      plVar1 = (long *)(lStack_28 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = (long *)(lStack_28 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_18 = plVar2[1];
    lStack_20 = *plVar2;
    *plVar2 = param_2;
    plVar2[1] = lStack_28;
    lStack_30 = param_2;
    func_0x0045b848(&lStack_20);
    func_0x0045b790(&lStack_30);
    return;
  }
  return;
}



/* Entry: 0045f774; end: 0045f79b;  */

long FUN_0045f774(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_0045f79c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 0045f79c; end: 0045f7cb;  */

undefined8 * FUN_0045f79c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x276276276276277) {
    puVar1 = (undefined8 *)(param_2 * 0x68);
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(puVar1);
    return puVar1;
  }
  FUN_0040cee8();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e5ad0;
  FUN_0045f830(param_1 + 3);
  return param_1;
}



/* Entry: 0045f7cc; end: 0045f80f;  */

undefined8 * FUN_0045f7cc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009e5ad0;
  FUN_0045f830(param_1 + 3);
  return param_1;
}



/* Entry: 0045f810; end: 0045f813;  */

void FUN_0045f810(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e5ad0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045f814; end: 0045f827;  */

void FUN_0045f814(void)

{
  FUN_0045f8a0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0045f828; end: 0045f82f;  */

void FUN_0045f828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0045f990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0045f830; end: 0045f89f;  */

undefined8
FUN_0045f830(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  func_0x0045ae5c(param_1,&uStack_30,&uStack_40,&uStack_50);
  func_0x0045a054(&uStack_50);
  func_0x0045a078(&uStack_40);
  func_0x0045b824(&uStack_30);
  return param_1;
}



/* Entry: 0045f8a0; end: 0045f8af;  */

void FUN_0045f8a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e5ad0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 0045f8b0; end: 0045f933;  */

void FUN_0045f8b0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lStack_28 = *(long *)(param_1 + 8);
    if (lStack_28 != 0) {
      plVar1 = (long *)(lStack_28 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = (long *)(lStack_28 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = lStack_28;
    uStack_30 = param_3;
    func_0x0045b848(&uStack_20);
    func_0x0045b790(&uStack_30);
    return;
  }
  return;
}



/* Entry: 0045f934; end: 0045f993;  */

void FUN_0045f934(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0045f994; end: 0045fa2b;  */

undefined8 *
FUN_0045f994(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
            undefined8 *param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_009e5b20;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  param_1[6] = param_4[1];
  param_1[5] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  uVar1 = *param_5;
  param_1[8] = param_5[1];
  param_1[7] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  uVar1 = *param_6;
  param_1[10] = param_6[1];
  param_1[9] = uVar1;
  *param_6 = 0;
  param_6[1] = 0;
  uVar1 = *param_7;
  param_1[0xc] = param_7[1];
  param_1[0xb] = uVar1;
  *param_7 = 0;
  param_7[1] = 0;
  uVar1 = *param_8;
  param_1[0xe] = param_8[1];
  param_1[0xd] = uVar1;
  *param_8 = 0;
  param_8[1] = 0;
  uVar1 = *param_9;
  param_1[0x10] = param_9[1];
  param_1[0xf] = uVar1;
  *param_9 = 0;
  param_9[1] = 0;
  func_0x0045e810(param_1 + 0x11,param_10);
  return param_1;
}



/* Entry: 0045fa2c; end: 00460137;  */

void FUN_0045fa2c(long param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  ulong *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [160];
  long lStack_430;
  undefined1 auStack_3a0 [56];
  char cStack_368;
  undefined1 auStack_360 [56];
  char cStack_328;
  undefined8 uStack_308;
  ulong uStack_300;
  undefined8 uStack_2f8;
  char cStack_2f0;
  undefined1 auStack_2e8 [4];
  undefined1 uStack_2e4;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 uStack_2c8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b8;
  uint uStack_2b0;
  undefined1 uStack_2ac;
  undefined1 auStack_2a8 [24];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined1 uStack_248;
  undefined8 uStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined1 uStack_1f4;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined1 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined1 uStack_1b8;
  undefined1 uStack_1b0;
  undefined1 uStack_198;
  undefined1 uStack_190;
  long lStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  FUN_006ad024(auStack_2a8,"scn_notifications::NotificationProcessorImpl::notificationReceived");
  auStack_2e8[0] = 0;
  uStack_2e4 = 0;
  puStack_b0 = auStack_2e8;
  uStack_2c0 = 0;
  uStack_2e0 = 0;
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_2c8 = 0;
  uStack_2b8 = 0x1000300000002;
  uStack_2b0 = uStack_2b0 & 0xffffff00;
  uStack_2ac = 0;
  pcStack_c8 = FUN_00460e74;
  ppuStack_c0 = &PTR_DAT_009e5b78;
  auStack_360[0] = 0;
  cStack_2f0 = '\0';
  uStack_f8 = 0x460e90;
  ppuStack_f0 = &PTR_DAT_009e5b90;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  lStack_e8 = param_1;
  puStack_e0 = auStack_360;
  lStack_b8 = param_1;
  func_0x00460f7c();
  (*extraout_x8)();
  uStack_190 = (undefined1)*(undefined8 *)(param_1 + 0xb8);
  func_0x00460f7c();
  (*extraout_x8_00)();
  uStack_248 = 0;
  uStack_230 = uStack_230 & 0xffffffffffffff00;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_250 = 0;
  uStack_200 = 0;
  uStack_208 = 0;
  uStack_1f8 = 0;
  uStack_220 = 1;
  uStack_210 = 1;
  uStack_228 = uVar2;
  uStack_218 = uVar2;
  FUN_0047afa0(auStack_4d0,&uStack_290,param_2);
  func_0x00457764(&uStack_290);
  FUN_00477abc(auStack_2e8,auStack_4d0);
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_00463348(&uStack_290,auStack_4d0,*(undefined4 *)(param_2 + 0x50),param_4,uVar2);
    uStack_80 = 0;
    lStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    pcStack_98 = FUN_00460f20;
    ppuStack_90 = &PTR_FUN_009e3508;
    func_0x00460f7c(*(undefined8 *)(param_1 + 0x78));
    (*extraout_x8_01)();
    func_0x00460fc0();
    FUN_00460acc(&uStack_290);
  }
  pcStack_98 = FUN_00460ec4;
  ppuStack_90 = &PTR_FUN_009e5ba8;
  uStack_80 = CONCAT44(uStack_80._4_4_,(int)param_4);
  puVar7 = (ulong *)(param_1 + 8);
  puVar9 = (undefined8 *)*puVar7;
  lStack_88 = param_1;
  FUN_00425cb4(auStack_4e8,"notificationReceived");
  FUN_00461390(&uStack_290,puVar9,auStack_4e8);
  func_0x00460ff8();
  uVar3 = *puVar7;
  FUN_004614ec(uVar3,auStack_4d0);
  iVar8 = 0;
  if (lStack_430 == 0) {
    iVar8 = (int)uVar3;
  }
  uVar1 = iVar8 == 1;
  if ((bool)uVar1) {
    puVar6 = auStack_4d0;
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
              (*(long **)(param_1 + 0x18),puVar6,param_2,0,param_3);
    uStack_2b8 = CONCAT44(uStack_2b8._4_4_,1);
    func_0x00461038();
  }
  else {
    if (((uVar3 & 1) == 0) &&
       ((*(uint *)(param_2 + 0x50) < 7 && *(uint *)(param_2 + 0x50) != 1 || ((int)param_4 != 0)))) {
      func_0x00461420(*puVar7,auStack_4d0);
    }
    FUN_006495bc(&uStack_290);
    func_0x00461038();
    FUN_0047ad94(&uStack_290,param_2,auStack_4d0);
    if (cStack_2f0 == '\x01') {
      puVar9 = &uStack_290;
      FUN_00460888(auStack_360,&uStack_290);
      func_0x00461060();
      FUN_004575b8(&uStack_308,&uStack_238);
    }
    else {
      auStack_360[0] = 0;
      cStack_328 = '\0';
      if ((char)uStack_258 == '\x01') {
        func_0x0046095c(auStack_360,&uStack_290);
      }
      func_0x00461060();
      uStack_300 = uStack_230;
      uStack_308 = uStack_238;
      uStack_2f8 = uStack_228;
      uStack_230 = 0;
      uStack_238 = 0;
      uStack_228 = 0;
      cStack_2f0 = '\x01';
    }
    func_0x004609c4(&uStack_290);
    if (cStack_368 == cStack_328) {
      if (cStack_368 != '\0') {
        FUN_004879f8(auStack_3a0,auStack_360);
      }
    }
    else if (cStack_368 == '\0') {
      FUN_0048748c(auStack_3a0,0,auStack_360);
      cStack_368 = '\x01';
    }
    else {
      FUN_00460938(auStack_3a0);
    }
    (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
              (&uStack_290,*(long **)(param_1 + 0x68),auStack_4d0);
    func_0x00460f7c(*(undefined8 *)(param_1 + 0x18));
    puVar6 = param_2;
    (*extraout_x8_02)();
    uStack_2b8 = uStack_2b8 & 0xffffffff00000000;
    uVar3 = *(ulong *)(param_1 + 0x48);
    func_0x00460f7c();
    (*extraout_x8_03)();
    uVar4 = *(ulong *)(param_1 + 0x98);
    func_0x00460f7c();
    (*extraout_x8_04)();
    uVar1 = uVar3 - uVar4 == 0;
    if (uVar4 <= uVar3) {
      uStack_100 = 0x7fffffffffffffff;
      puVar6 = (undefined1 *)(param_1 + 0x58);
      lStack_110 = uVar3 - uVar4;
      uStack_108 = uVar3;
      FUN_0047894c(puVar7,puVar6,&lStack_110);
    }
    FUN_0045cb60(&uStack_290);
  }
  FUN_00460a0c(&pcStack_98);
  FUN_00460a5c(auStack_4d0);
  while( true ) {
    FUN_00460a0c(&uStack_f8);
    func_0x00460aac(auStack_360);
    FUN_00460a0c(&pcStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2e0);
    puVar5 = auStack_2a8;
    FUN_006ad0cc();
    func_0x0046104c(uStack_68);
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar6 != 0) break;
    do {
      __Unwind_Resume(puVar5);
      func_0x0046100c();
      iVar8 = (int)puVar9;
    } while (iVar8 == 0);
    if (iVar8 == 4) {
      ___cxa_begin_catch();
      uVar1 = *(uint *)(puVar5 + 8) == 0x813;
      if ((bool)uVar1) {
        uStack_2b8 = CONCAT44(uStack_2b8._4_4_,1);
      }
      else {
        uStack_2b0 = *(uint *)(puVar5 + 8) & 0xff;
        uStack_2b8 = CONCAT44(0x10004,(undefined4)uStack_2b8);
        uStack_2ac = 1;
      }
      func_0x00460fa0();
      puVar6 = param_2;
      (*extraout_x8_06)();
      ___cxa_end_catch();
    }
    else {
      uVar1 = iVar8 == 3;
      if ((bool)uVar1) {
        ___cxa_begin_catch();
        uStack_2b8 = CONCAT44(0x10005,(undefined4)uStack_2b8);
        func_0x00460fa0();
        puVar6 = param_2;
        (*extraout_x8_05)();
        ___cxa_end_catch();
      }
      else {
        ___cxa_begin_catch();
        uVar1 = iVar8 == 2;
        if ((bool)uVar1) {
          uStack_2b8 = CONCAT44(0x10006,(undefined4)uStack_2b8);
          func_0x00460fa0();
          func_0x00460fe8();
          ___cxa_end_catch();
        }
        else {
          uStack_2b8 = CONCAT44(0x10007,(undefined4)uStack_2b8);
          func_0x00460fa0();
          func_0x00460fe8();
          ___cxa_end_catch();
        }
      }
    }
  }
  func_0x0040cf10(puVar5);
  FUN_0046017c();
  func_0x00460fd0();
  return;
}



/* Entry: 00460138; end: 0046017b;  */

void FUN_00460138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [40];
  undefined1 uStack_28;
  
  auStack_50[0] = 0;
  uStack_28 = 0;
  FUN_0046017c(param_1,param_2,2,0,param_3,auStack_50);
  func_0x00460fd0();
  return;
}



/* Entry: 0046017c; end: 004606e3;  */

void FUN_0046017c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined8 uVar5;
  int iVar6;
  undefined4 extraout_w8;
  undefined4 uVar7;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 auStack_4a0 [60];
  int iStack_464;
  undefined4 uStack_460;
  undefined4 uStack_408;
  undefined1 uStack_404;
  byte bStack_3a0;
  int iStack_398;
  undefined1 uStack_394;
  undefined1 uStack_390;
  undefined1 auStack_388 [24];
  undefined8 uStack_370;
  undefined1 uStack_368;
  undefined1 uStack_364;
  undefined1 auStack_360 [184];
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  char cStack_270;
  code *pcStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  int *piStack_c0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  iVar6 = (int)param_3;
  uStack_394 = 0;
  uStack_390 = 0;
  iStack_398 = iVar6;
  FUN_00425cb4(auStack_388,"");
  uStack_370 = 0x3000c0002000b;
  uStack_368 = 0;
  uStack_364 = 0;
  uStack_d8 = 0x460f30;
  ppuStack_d0 = &PTR_DAT_009e5bc0;
  lStack_c8 = param_1;
  piStack_c0 = &iStack_398;
  FUN_004615b4(auStack_4a0,*(undefined8 *)(param_1 + 8),param_2);
  if ((bStack_3a0 & 1) == 0) {
    func_0x00461074();
    uStack_370 = CONCAT44(extraout_w8,(undefined4)uStack_370);
  }
  else {
    in_ZR = iStack_464 == iVar6;
    if ((bool)in_ZR) {
      uVar7 = 0x20009;
    }
    else if (iStack_464 == 2) {
      uVar7 = 0x2000a;
      in_ZR = 1;
    }
    else {
      FUN_0046169c(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
      uStack_408 = (undefined4)param_4;
      uStack_404 = (undefined1)(param_4 >> 0x20);
      iStack_464 = iVar6;
      if (iVar6 == 3) {
        in_ZR = 0;
        if (*(char *)(param_1 + 200) == '\x01') {
          in_ZR = 0;
          if (*(char *)(param_1 + 0xca) == '\x01') {
            cVar2 = *(char *)(param_6 + 10);
            uVar7 = *param_6;
            uVar5 = *(undefined8 *)(param_1 + 0x48);
            func_0x00460f7c(uVar5);
            (*extraout_x8_00)();
            if (cVar2 == '\0') {
              uVar7 = 0;
            }
            FUN_00463348(auStack_360,auStack_4a0,uStack_460,uVar7,uVar5);
            if ((param_4 >> 0x20 & 1) != 0) {
              if (cStack_270 == '\x01') {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                          (auStack_288,"OsPermissionsDisabled");
              }
              else {
                FUN_00425cb4(auStack_288,"OsPermissionsDisabled");
                cStack_270 = '\x01';
              }
            }
            in_ZR = *(char *)(param_6 + 10) == '\x01';
            if (((bool)in_ZR) && ((*(byte *)(param_6 + 8) & 1) != 0)) {
              FUN_0046083c(auStack_288,param_6 + 2);
            }
            uStack_1d0 = 0;
            uStack_1d8 = 0;
            uStack_1c0 = 0;
            uStack_1c8 = 0;
            pcStack_1e8 = FUN_00460f20;
            ppuStack_1e0 = &PTR_FUN_009e3508;
            (**(code **)(**(long **)(param_1 + 0x78) + 0x20))
                      (*(long **)(param_1 + 0x78),auStack_360,&pcStack_1e8);
            func_0x00460f5c(ppuStack_1e0);
            func_0x00460fe0();
          }
        }
      }
      else {
        in_ZR = 0;
        if (iVar6 == 2) {
          if ((bStack_3a0 & 1) == 0) goto LAB_0046050c;
          uStack_4a8 = *(undefined8 *)(param_1 + 0xb0);
          uStack_4b0 = *(undefined8 *)(param_1 + 0xa8);
          if (*(long *)(param_1 + 0xb0) != 0) {
            plVar1 = (long *)(*(long *)(param_1 + 0xb0) + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          FUN_00477324(&pcStack_1e8,auStack_4a0,&uStack_4b0);
          func_0x0045e73c(&uStack_4b0);
          FUN_00477460(&pcStack_1e8,param_1 + 0x58);
          in_ZR = 0;
          if (*(char *)(param_1 + 200) == '\x01') {
            in_ZR = 0;
            if (*(char *)(param_1 + 0xc9) == '\x01') {
              cVar2 = *(char *)(param_5 + 0xe);
              uVar7 = *param_5;
              uVar5 = *(undefined8 *)(param_1 + 0x48);
              func_0x00460f7c(uVar5);
              (*extraout_x8)();
              if (cVar2 == '\0') {
                uVar7 = 0;
              }
              FUN_00463348(auStack_360,auStack_4a0,uStack_460,uVar7,uVar5);
              in_ZR = 0;
              if (*(char *)(param_5 + 0xe) == '\x01') {
                uStack_2a8 = *(undefined8 *)(param_5 + 2);
                in_ZR = *(char *)(param_5 + 4) == '\0';
                if ((bool)in_ZR) {
                  uStack_2a8 = 0;
                }
                FUN_0046081c(&pcStack_a8,param_5 + 6,"");
                FUN_004575b8(auStack_2a0,&pcStack_a8);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_a8);
              }
              uStack_90 = 0;
              uStack_98 = 0;
              uStack_80 = 0;
              uStack_88 = 0;
              pcStack_a8 = FUN_00460f20;
              ppuStack_a0 = &PTR_FUN_009e3508;
              (**(code **)(**(long **)(param_1 + 0x78) + 0x18))
                        (*(long **)(param_1 + 0x78),auStack_360,&pcStack_a8);
              func_0x00460f5c(ppuStack_a0);
              func_0x00460fe0();
            }
          }
          FUN_00460dd8(&pcStack_1e8);
        }
      }
      FUN_00477f40(&iStack_398,auStack_4a0);
      uVar7 = 0x20008;
    }
    uStack_370 = CONCAT44(uStack_370._4_4_,uVar7);
  }
  FUN_0045779c(auStack_4a0);
  FUN_00460a0c(&uStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_388);
  func_0x0046104c(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_0046050c:
  FUN_00460da4();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x460514);
  (*pcVar4)();
}



/* Entry: 004606e4; end: 00460737;  */

void FUN_004606e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [56];
  undefined1 uStack_28;
  
  auStack_60[0] = 0;
  uStack_28 = 0;
  FUN_0046017c(param_1,param_2,3,param_3,auStack_60,param_4);
  func_0x00459f20(auStack_60);
  return;
}



/* Entry: 00460738; end: 0046079b;  */

void FUN_00460738(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_90 [40];
  undefined1 uStack_68;
  undefined1 auStack_60 [56];
  undefined1 uStack_28;
  
  auStack_60[0] = 0;
  uStack_28 = 0;
  auStack_90[0] = 0;
  uStack_68 = 0;
  FUN_0046017c(param_1,param_2,5,0,auStack_60,auStack_90);
  func_0x00460fd0();
  func_0x00459f20(auStack_60);
  return;
}



/* Entry: 0046079c; end: 0046081b;  */

void FUN_0046079c(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined ***pppuVar3;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  ppuStack_48 = &PTR_FUN_009e5290;
  uStack_40 = 0;
  uStack_28 = 0x2f;
  uVar2 = 0x9001c;
  if (param_2 == 1) {
    uVar2 = 0x9001d;
  }
  uVar1 = 0x9001e;
  if (param_2 != 2) {
    uVar1 = uVar2;
  }
  pppuVar3 = &ppuStack_48;
  FUN_00460b34(pppuVar3,uVar1);
  FUN_00460bd4(param_1,pppuVar3);
  FUN_004590f8(&ppuStack_48);
  return;
}



/* Entry: 0046081c; end: 0046083b;  */

ulong * FUN_0046081c(ulong *param_1,long param_2,ulong *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00779c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__00998a18)
              (param_1,param_2);
    return param_1;
  }
  puVar5 = param_3;
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < puVar5) {
    FUN_0040d740();
    plVar8 = (long *)puVar5[1];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return puVar5;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar5) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar5 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)puVar5 | 7);
    }
    puVar6 = (ulong *)((long)pdVar4 + 1);
    __Znwm();
    param_1[1] = (ulong)puVar5;
    param_1[2] = (ulong)((long)pdVar4 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar6;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)puVar5;
    puVar6 = param_1;
    if (puVar5 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar6,param_3,puVar5);
LAB_00425d3c:
  *(undefined1 *)((long)puVar6 + (long)puVar5) = 0;
  return param_1;
}



/* Entry: 0046083c; end: 0046086f;  */

long FUN_0046083c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  }
  else {
    FUN_00459e48();
  }
  return param_1;
}



/* Entry: 00460870; end: 00460873;  */

undefined8 * FUN_00460870(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e5b20;
  FUN_0045dc74(param_1 + 0x11);
  func_0x0045e7cc(param_1 + 0xf);
  func_0x0045e784(param_1 + 0xd);
  func_0x0045a054(param_1 + 0xb);
  func_0x0045e760(param_1 + 9);
  func_0x0045a078(param_1 + 7);
  FUN_0045e854(param_1 + 5);
  func_0x0045cc14(param_1 + 3);
  func_0x0045dd5c(param_1 + 1);
  return param_1;
}



/* Entry: 00460874; end: 00460887;  */

void FUN_00460874(void)

{
  func_0x00460e00();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00460888; end: 004608ab;  */

undefined8 FUN_00460888(undefined8 param_1)

{
  FUN_004608ac();
  return param_1;
}



/* Entry: 004608ac; end: 004608d3;  */

long FUN_004608ac(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 != *(char *)(param_2 + 0x38)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x38) == '\x01') {
        FUN_00487550();
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
      return param_1;
    }
    FUN_00460978();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    if (param_1 != param_2) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      uVar3 = *(ulong *)(param_2 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      if (uVar2 == uVar3) {
        FUN_00487a2c(param_1);
      }
      else {
        FUN_004879f8(param_1);
      }
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 004608d4; end: 00460937;  */

long FUN_004608d4(long param_1,long param_2)

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
      FUN_00487a2c(param_1);
    }
    else {
      FUN_004879f8(param_1);
    }
  }
  return param_1;
}



/* Entry: 00460938; end: 00460977;  */

void FUN_00460938(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_00487550();
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 00460978; end: 00460983;  */

undefined8 * FUN_00460978(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_009e8808;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  FUN_004608d4(param_1,param_2);
  return param_1;
}



/* Entry: 00460984; end: 004609eb;  */

undefined8 * FUN_00460984(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_009e8808;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  FUN_004608d4(param_1,param_3);
  return param_1;
}


