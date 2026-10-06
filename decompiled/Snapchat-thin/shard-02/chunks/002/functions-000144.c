/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a411b0; end: 101a4131f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a411b0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  long lVar6;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = *(long *)(unaff_x20 + _DAT_112dee530);
  lVar2 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5eea0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee70();
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    func_0x000107c53e20(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
      func_0x000107c534d4(lVar5);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(puVar4);
    }
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 101a41320; end: 101a41413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a41320(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  lVar2 = 0;
  FUN_101a41190();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112dee530) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112dee538) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112dee540) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112dee548) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112dee550) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_60,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101a41414; end: 101a41423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a41414(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  lVar6 = 0;
  FUN_101a41190();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112dee530) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112dee538) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112dee540) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112dee548) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112dee550) = uVar9;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  func_0x000107c61154(&lStack_60,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 101a41424; end: 101a41457;  */

/* WARNING: Possible PIC construction at 0x000101a41430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a41440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a41434) */
/* WARNING: Removing unreachable block (ram,0x000101a41444) */

void FUN_101a41424(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a41458; end: 101a414df;  */

void FUN_101a41458(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a414e0; end: 101a4153b; -[_TtC34SCMemPlatBackupLoggingServicesImpl12BackupLogger init] */

void FUN_101a414e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupLoggingServicesImpl.BackupLogger",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a4150c);
  (*pcVar1)();
}



/* Entry: 101a4153c; end: 101a41593; -[_TtC34SCMemPlatBackupLoggingServicesImpl12BackupLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a4153c(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112dee678);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112dee680));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dee688));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dee690));
  return;
}



/* Entry: 101a41594; end: 101a41837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a41594(double param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,long param_9,
                  undefined4 param_10,undefined4 param_11,double param_12,char param_13,
                  undefined4 param_14,undefined8 param_15,long param_16)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  double dVar6;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar2 = 0;
  uStack_88 = param_6;
  uStack_80 = param_8;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = PTR_PTR_1126d8250;
  func_0x000107c610f8(PTR_PTR_1126d8250);
  func_0x000107c453e4();
  uVar4 = 0;
  if (param_3 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    uVar4 = param_2;
  }
  func_0x000107c593e4(puVar3);
  func_0x000107c61170(uVar4);
  if (param_5 != 0) {
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c53200(puVar3);
    func_0x000107c61170(param_4);
  }
  if (param_7 != 0) {
    uVar4 = uStack_88;
    func_0x000107c5fadc(uStack_88,param_7);
    func_0x000107c56420(puVar3);
    func_0x000107c61170(uVar4);
  }
  if (param_9 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = uStack_80;
    func_0x000107c5fadc(uStack_80,param_9);
  }
  func_0x000107c545ec(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c54624(puVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dee688);
  func_0x000107c40ef8(uVar4);
  func_0x000107c61180();
  func_0x000107c5ee94(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61170(uVar4);
  func_0x000107c5ee8c();
  (**(code **)(lVar5 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  dVar6 = 0.0;
  if (param_13 != '\x01') {
    dVar6 = param_12;
  }
  dVar6 = param_1 * 1000.0 - dVar6;
  if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a41830);
    (*pcVar1)();
  }
  if (dVar6 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a41834);
    (*pcVar1)();
  }
  if (dVar6 < 9.223372036854776e+18) {
    func_0x000107c58be0(puVar3);
    if (param_16 != 0) {
      func_0x000107c5fadc(param_15,param_16);
      func_0x000107c57dd8(puVar3);
      func_0x000107c61170(param_15);
    }
    func_0x000107c55880(puVar3);
    lVar2 = *(long *)(unaff_x20 + _DAT_112dee690);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4bfb0();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a41838);
  (*pcVar1)();
}



/* Entry: 101a41838; end: 101a4193f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a41838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dee688);
  func_0x000107c40ef8(uVar1);
  func_0x000107c61180();
  func_0x000107c5ee94(param_1);
  func_0x000107c61170(uVar1);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(puVar3,param_1,lVar2);
  pcVar5 = *(code **)(lVar4 + 0x38);
  (*pcVar5)(puVar3,0,1,lVar2);
  FUN_101a421f8(param_2,param_3,puVar3);
  func_0x0001000d1dcc(puVar3);
  (*pcVar5)(param_1,0,1,lVar2);
  return;
}



/* Entry: 101a41940; end: 101a41943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a41940(double param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,long param_9,
                  undefined4 param_10,undefined4 param_11,double param_12,char param_13,
                  undefined4 param_14,undefined8 param_15,long param_16)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  double dVar6;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar2 = 0;
  uStack_88 = param_6;
  uStack_80 = param_8;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = PTR_PTR_1126d8250;
  func_0x000107c610f8(PTR_PTR_1126d8250);
  func_0x000107c453e4();
  uVar4 = 0;
  if (param_3 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    uVar4 = param_2;
  }
  func_0x000107c593e4(puVar3);
  func_0x000107c61170(uVar4);
  if (param_5 != 0) {
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c53200(puVar3);
    func_0x000107c61170(param_4);
  }
  if (param_7 != 0) {
    uVar4 = uStack_88;
    func_0x000107c5fadc(uStack_88,param_7);
    func_0x000107c56420(puVar3);
    func_0x000107c61170(uVar4);
  }
  if (param_9 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = uStack_80;
    func_0x000107c5fadc(uStack_80,param_9);
  }
  func_0x000107c545ec(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c54624(puVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dee688);
  func_0x000107c40ef8(uVar4);
  func_0x000107c61180();
  func_0x000107c5ee94(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61170(uVar4);
  func_0x000107c5ee8c();
  (**(code **)(lVar5 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  dVar6 = 0.0;
  if (param_13 != '\x01') {
    dVar6 = param_12;
  }
  dVar6 = param_1 * 1000.0 - dVar6;
  if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a41830);
    (*pcVar1)();
  }
  if (dVar6 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a41834);
    (*pcVar1)();
  }
  if (dVar6 < 9.223372036854776e+18) {
    func_0x000107c58be0(puVar3);
    if (param_16 != 0) {
      func_0x000107c5fadc(param_15,param_16);
      func_0x000107c57dd8(puVar3);
      func_0x000107c61170(param_15);
    }
    func_0x000107c55880(puVar3);
    lVar2 = *(long *)(unaff_x20 + _DAT_112dee690);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4bfb0();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a41838);
  (*pcVar1)();
}



/* Entry: 101a41944; end: 101a41a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a41944(undefined1 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 uStack_49;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  
  func_0x0001000d224c(auStack_48);
  func_0x0001000a8868(auStack_48,uStack_30);
  puVar2 = &UNK_11072c108;
  puVar1 = &uStack_49;
  uStack_49 = param_1;
  func_0x000107c5fb18(puVar1,&UNK_11072c108);
  FUN_101a42450(0,0,puVar1,puVar2);
  func_0x000107c6142c(puVar2);
  func_0x0001000834e4(auStack_48);
  return;
}



/* Entry: 101a41a4c; end: 101a41aef;  */

void FUN_101a41a4c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101a41aa8;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)param_3;
  lVar4 = *(long *)(*param_3 + 0x50);
  plVar1[7] = lVar4;
  lVar2 = 0;
  __sSqMa(0,lVar4);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar4 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101a41af0; end: 101a41d33;  */

void FUN_101a41af0(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar6 = 0xd000000000000010;
  lVar7 = *(long *)(unaff_x22 + 0x68);
  plVar2 = (long *)(unaff_x22 + 0x10);
  func_0x0001000a8868(plVar2,*(undefined8 *)(unaff_x22 + 0x28));
  if (lVar7 < 3) {
    if (lVar7 == 0) {
      pcVar5 = "save_fail_comp_async";
      uVar6 = 0xd000000000000011;
    }
    else if (lVar7 == 1) {
      pcVar5 = "completion_total";
      uVar6 = 0xd000000000000013;
    }
    else {
      if (lVar7 != 2) goto LAB_101a41bbc;
      pcVar5 = "save_fail_comp_sync";
      uVar6 = 0xd000000000000014;
    }
  }
  else if (lVar7 < 5) {
    if (lVar7 == 3) {
      pcVar5 = "post_tacoma_completion_async";
      uVar6 = 0xd000000000000017;
    }
    else {
      if (lVar7 != 4) {
LAB_101a41bbc:
        *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)
                  (&UNK_11072bec0,(undefined8 *)(unaff_x22 + 0x50),&UNK_11072bec0,
                   PTR___sSiN_11034deb0);
        return;
      }
      pcVar5 = "post_tacoma_completion_sync";
      uVar6 = 0xd00000000000001c;
    }
  }
  else if (lVar7 == 5) {
    pcVar5 = "loudSyncDataCapServiceProvider";
    uVar6 = 0xd00000000000001b;
  }
  else {
    if (lVar7 != 6) goto LAB_101a41bbc;
    pcVar5 = "added_backup_job_finish";
  }
  uVar8 = (ulong)pcVar5 | 0x8000000000000000;
  if (*(long *)(unaff_x22 + 0x70) == 0) {
    uVar9 = 0;
    uVar4 = 0;
  }
  else {
    func_0x000107c614cc(*(long *)(unaff_x22 + 0x70),unaff_x22 + 0x58,unaff_x22 + 0x38);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar4 = *(ulong *)(unaff_x22 + 0x48);
    FUN_101a41d34(uVar9);
  }
  lVar7 = *(long *)(*plVar2 + 0x10);
  if (lVar7 == 0) {
    func_0x000107c6142c(uVar8);
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c5fadc(uVar6,uVar8);
    uVar3 = 0x73736563637573;
    if (uVar4 != 0) {
      uVar3 = uVar9;
    }
    uVar1 = 0xe700000000000000;
    if (uVar4 != 0) {
      uVar1 = uVar4;
    }
    func_0x000107c61434(uVar4);
    func_0x000107c5fadc(uVar3,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x0001056554c0(uVar10,lVar7,uVar6,uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c6142c(uVar4);
    uVar4 = uVar8;
  }
  func_0x000107c6142c(uVar4);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101a41d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a41d34; end: 101a4203b;  */

undefined1  [16] FUN_101a41d34(undefined *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  undefined1 auVar9 [16];
  undefined *puStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  lVar8 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = (undefined *)((long)&puStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar8 + 0x10))(puVar6);
  puVar3 = puVar6;
  func_0x000107c605a0(puVar6,param_1,param_2);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_1;
    func_0x000107c613f8(param_1,param_2,0,0);
    (**(code **)(lVar8 + 0x20))(param_2,puVar6,param_1);
  }
  else {
    (**(code **)(lVar8 + 8))(puVar6);
    puVar6 = param_1;
  }
  puVar4 = puVar3;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar3);
  puStack_50 = (undefined *)0x0;
  uStack_48 = 0xe000000000000000;
  puVar3 = puVar4;
  func_0x000107c42210();
  func_0x000107c61180();
  puVar5 = puVar3;
  func_0x000107c5faec();
  puVar7 = puVar6;
  func_0x000107c61170(puVar3);
  func_0x000107c6142c(puVar6);
  uVar1 = (ulong)puVar5 & 0xffffffffffff;
  if (((ulong)puVar6 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)puVar6 >> 0x38 & 0xf;
  }
  puVar3 = puVar7;
  if (uVar1 != 0) {
    puVar3 = puVar4;
    func_0x000107c42210(puVar4);
    func_0x000107c61180();
    puVar6 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
    puVar3 = puVar7;
    func_0x000107c5fb78(puVar6);
    func_0x000107c6142c(puVar7);
  }
  puVar6 = puVar4;
  func_0x000107c3fcb0();
  if (0 < (long)puVar6) {
    uVar1 = (ulong)puStack_50 & 0xffffffffffff;
    if ((uStack_48 & 0x2000000000000000) != 0) {
      uVar1 = uStack_48 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c5fb78(0x5f,0xe100000000000000);
    }
    puVar3 = puVar4;
    func_0x000107c3fcb0();
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puStack_60 = puVar3;
    func_0x000107c6057c(PTR___sSiN_11034deb0);
    puVar3 = puVar6;
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
  }
  func_0x000107c61174();
  puVar6 = puVar4;
  func_0x000107c417f0();
  func_0x000107c61180();
  puVar5 = puVar6;
  func_0x000107c5faec();
  puVar7 = puVar3;
  func_0x000107c61170(puVar6);
  func_0x000107c6142c(puVar3);
  uVar1 = (ulong)puVar5 & 0xffffffffffff;
  if (((ulong)puVar3 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)puVar3 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x000107c61170(puVar4);
  }
  else {
    uVar1 = (ulong)puStack_50 & 0xffffffffffff;
    if ((uStack_48 & 0x2000000000000000) != 0) {
      uVar1 = uStack_48 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puVar7 = (undefined *)0xe100000000000000;
      func_0x000107c5fb78(0x5f,0xe100000000000000);
    }
    puVar3 = puVar4;
    func_0x000107c417f0(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar6 = puVar3;
    func_0x000107c5faec(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c5fb78(puVar6,puVar7);
    func_0x000107c6142c(puVar7);
  }
  uVar2 = uStack_48;
  puVar3 = puStack_50;
  uVar1 = (ulong)puStack_50 & 0xffffffffffff;
  if ((uStack_48 & 0x2000000000000000) != 0) {
    uVar1 = uStack_48 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    puStack_60 = (undefined *)0x0;
    uStack_58 = 0xe000000000000000;
    func_0x000107c605a8();
    func_0x000107c6142c(uVar2);
    func_0x000107c61170(puVar4);
  }
  else {
    func_0x000107c61170(puVar4);
    puStack_60 = puVar3;
    uStack_58 = uVar2;
  }
  auVar9._8_8_ = uStack_58;
  auVar9._0_8_ = puStack_60;
  return auVar9;
}



/* Entry: 101a4203c; end: 101a4212f; -[_TtC34SCMemPlatBackupLoggingServicesImpl12BackupLogger logSaveCompletionDiscrepancyLatency:checkpoint:error:] */

/* WARNING: Possible PIC construction at 0x000101a4210c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a42110) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a4203c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_112dee680);
  puVar1 = &UNK_11042fdd0;
  func_0x000107c613fc(&UNK_11042fdd0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(uVar2);
  uVar2 = 0x81;
  func_0x0001001ca524(0x81,0,0x48,0,0,0,&UNK_10d9bb9d0,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 101a42130; end: 101a421ab;  */

void FUN_101a42130(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long *plVar6;
  long unaff_x22;
  long lVar7;
  
  plVar6 = *(long **)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101a421ac;
  plVar2[0xd] = lVar3;
  plVar2[0xe] = lVar5;
  plVar2[0xc] = lVar7;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  plVar2[0xf] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x101a41aa8;
  plVar1[5] = (long)(plVar2 + 2);
  plVar1[6] = (long)plVar6;
  lVar5 = *(long *)(*plVar6 + 0x50);
  plVar1[7] = lVar5;
  lVar3 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar4;
  lVar3 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101a421ac; end: 101a421e7;  */

void FUN_101a421ac(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a421e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a421e8; end: 101a421f7;  */

void FUN_101a421e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a421f8; end: 101a4240b;  */

void FUN_101a421f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_70 - extraout_x8;
  func_0x0001009f0578(param_3,lVar5);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar3 + -8);
  uVar4 = 1;
  lVar6 = lVar5;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar3);
  if ((int)lVar6 == 1) {
    func_0x0001000d1dcc(lVar5);
    uVar4 = 0xea00000000002965;
    lVar6 = 0x746164206c696e28;
  }
  else {
    func_0x000107c5ee5c();
    (**(code **)(lVar7 + 8))(lVar5,lVar3);
  }
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x1d);
  func_0x000107c6142c(uStack_58);
  uStack_60 = 0x2064657472617453;
  uStack_58 = 0xeb00000000207461;
  func_0x000107c5fb78(lVar6,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x746e6520726f6620,0xee00204449207972);
  func_0x000107c5fb78(param_1,param_2);
  uVar2 = uStack_58;
  uVar1 = uStack_60;
  uStack_60 = 0xd000000000000017;
  uStack_58 = 0x800000010efc9fc0;
  uStack_70 = 0x5b;
  uStack_68 = 0xe100000000000000;
  func_0x000107c5fb78(0x646f63736e617274,0xe900000000000065);
  func_0x000107c5fb78(0x5d,0xe100000000000000);
  uVar4 = uStack_68;
  func_0x000107c5fb78(uStack_70,uStack_68);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x203a,0xe200000000000000);
  func_0x000107c5fb78(uVar1,uVar2);
  uVar4 = uStack_58;
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 101a4240c; end: 101a4244f;  */

void FUN_101a4240c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a42450; end: 101a42517;  */

/* WARNING: Possible PIC construction at 0x000101a424e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a424ec) */

void FUN_101a42450(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (lVar4 != 0) {
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = param_1;
    }
    lVar1 = -0x2000000000000000;
    if (param_2 != 0) {
      lVar1 = param_2;
    }
    func_0x000107c61434(param_2);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
    uVar3 = 0;
    if (param_4 != 0) {
      uVar3 = param_3;
    }
    lVar1 = -0x2000000000000000;
    if (param_4 != 0) {
      lVar1 = param_4;
    }
    func_0x000107c61434(param_4);
    func_0x000107c5fadc(uVar3,lVar1);
    func_0x000107c6142c(lVar1);
    func_0x000105655730(lVar4,uVar2,uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 101a42518; end: 101a425c3;  */

void FUN_101a42518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 101a425c4; end: 101a42637;  */

void FUN_101a425c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c6157c();
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_5);
  FUN_101a42700(param_2,param_3,param_4,param_5);
  *param_1 = param_2;
  return;
}



/* Entry: 101a42638; end: 101a42663;  */

void FUN_101a42638(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c6157c();
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar3);
  FUN_101a42700(uVar4,uVar1,uVar2,uVar3);
  *param_1 = uVar4;
  return;
}



/* Entry: 101a42664; end: 101a42687;  */

/* WARNING: Possible PIC construction at 0x000101a42670: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a42674) */

void FUN_101a42664(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a42688; end: 101a426ff;  */

void FUN_101a42688(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a42700; end: 101a42833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101a42700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar5;
  long alStack_b0 [5];
  long lStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  lVar1 = 0;
  func_0x000100787370();
  ppuStack_58 = &PTR_DAT_11042fdf0;
  lVar2 = 0;
  auStack_78[0] = param_1;
  lStack_60 = lVar1;
  func_0x000100787744();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_78,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = (undefined8 *)((long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar5);
  alStack_b0[2] = *puVar5;
  ppuStack_80 = &PTR_DAT_11042fdf0;
  lStack_88 = lVar1;
  FUN_101a42834(alStack_b0 + 2,lVar3 + _DAT_112dee678);
  *(undefined8 *)(lVar3 + _DAT_112dee680) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112dee688) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112dee690) = param_4;
  plVar4 = alStack_b0;
  alStack_b0[0] = lVar3;
  alStack_b0[1] = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x0001000834e4(alStack_b0 + 2);
  func_0x0001000834e4(auStack_78);
  return plVar4;
}



/* Entry: 101a42834; end: 101a42877;  */

long FUN_101a42834(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101a42878; end: 101a428d7; -[_TtC30MemoriesExperimentServicesImpl22AppStartConfigProvider init] */

void FUN_101a42878(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesExperimentServicesImpl.AppStartConfigProvider",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a428a4);
  (*pcVar1)();
}



/* Entry: 101a428d8; end: 101a428e7; -[_TtC30MemoriesExperimentServicesImpl22AppStartConfigProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a428d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dee900));
  return;
}



/* Entry: 101a428e8; end: 101a428f7; -[_TtC30MemoriesExperimentServicesImpl22AppStartConfigProvider intValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a428e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dee900),
             PTR_s_intValueForConfigKeySync_default_1125f79d0);
  return;
}



/* Entry: 101a428f8; end: 101a42907; -[_TtC30MemoriesExperimentServicesImpl22AppStartConfigProvider longValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a428f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b5030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dee900),
             PTR_s_longValueForConfigKeySync_defaul_11260ae20);
  return;
}



/* Entry: 101a42908; end: 101a42917; -[_TtC30MemoriesExperimentServicesImpl22AppStartConfigProvider floatValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a42908(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112dee900),
             PTR_s_floatValueForConfigKeySync_defau_1125ca4d8);
  return;
}



/* Entry: 101a42918; end: 101a4296f; -[_TtC30MemoriesExperimentServicesImpl22AppStartConfigProvider stringValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_101a42918(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000029,0x800000010efca0c0,
                      "MemoriesExperimentServicesImpl/AppStartExperimentReaderProtocol+SCConfigProvider.swift"
                      ,0x56,2,0x44,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a42970);
  (*pcVar1)();
}



/* Entry: 101a42970; end: 101a429c7; -[_TtC30MemoriesExperimentServicesImpl22AppStartConfigProvider protoValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_101a42970(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000029,0x800000010efca0c0,
                      "MemoriesExperimentServicesImpl/AppStartExperimentReaderProtocol+SCConfigProvider.swift"
                      ,0x56,2,0x4c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a429c8);
  (*pcVar1)();
}



/* Entry: 101a429c8; end: 101a42a1f; -[_TtC30MemoriesExperimentServicesImpl22AppStartConfigProvider stringArrayValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

void FUN_101a429c8(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000029,0x800000010efca0c0,
                      "MemoriesExperimentServicesImpl/AppStartExperimentReaderProtocol+SCConfigProvider.swift"
                      ,0x56,2,0x54,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a42a20);
  (*pcVar1)();
}



/* Entry: 101a42a20; end: 101a42a77; -[_TtC30MemoriesExperimentServicesImpl22AppStartConfigProvider manualExposureValueForConfigKeySync:featureProvidedSignals:] */

void FUN_101a42a20(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000026,0x800000010efca090,
                      "MemoriesExperimentServicesImpl/AppStartExperimentReaderProtocol+SCConfigProvider.swift"
                      ,0x56,2,0x58,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a42a78);
  (*pcVar1)();
}



/* Entry: 101a42a78; end: 101a42be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a42a78(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&uStack_58);
  if (uStack_58 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x000107c615f0(uStack_58);
    func_0x000107c5eea0(puVar7);
    uVar3 = 0xd000000000000032;
    func_0x000107c5fadc(0xd000000000000032,0x800000010efca330);
    uVar6 = uStack_58;
    func_0x000107c4980c();
    func_0x000107c61170(uVar3);
    uVar4 = uStack_58;
    func_0x00010085883c(uStack_58);
    func_0x0001000d224c(auStack_80);
    puVar5 = auStack_80;
    func_0x0001000a8868(puVar5,uStack_68);
    func_0x0001008599bc(uVar4,1,puVar7,uStack_68,uStack_60,puVar5);
    func_0x000107c615ec(uStack_58,2);
    (**(code **)(lVar8 + 8))(puVar7,lVar2);
    func_0x0001000834e4(auStack_80);
    if ((int)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a42be8);
      (*pcVar1)();
    }
    uVar6 = uVar6 & 0xffffffff;
  }
  return uVar6;
}



/* Entry: 101a42be8; end: 101a42c1b; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl backupTranscodeMaxResolution] */

undefined8 FUN_101a42be8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a42a78();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a42c1c; end: 101a42d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a42c1c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&uStack_58);
  if (uStack_58 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x000107c615f0(uStack_58);
    func_0x000107c5eea0(puVar7);
    uVar3 = 0xd000000000000031;
    func_0x000107c5fadc(0xd000000000000031,0x800000010efca2f0);
    uVar6 = uStack_58;
    func_0x000107c4980c();
    func_0x000107c61170(uVar3);
    uVar4 = uStack_58;
    func_0x00010085883c(uStack_58);
    func_0x0001000d224c(auStack_80);
    puVar5 = auStack_80;
    func_0x0001000a8868(puVar5,uStack_68);
    func_0x0001008599bc(uVar4,1,puVar7,uStack_68,uStack_60,puVar5);
    func_0x000107c615ec(uStack_58,2);
    (**(code **)(lVar8 + 8))(puVar7,lVar2);
    func_0x0001000834e4(auStack_80);
    if ((int)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a42d8c);
      (*pcVar1)();
    }
    uVar6 = uVar6 & 0xffffffff;
  }
  return uVar6;
}



/* Entry: 101a42d8c; end: 101a42dbf; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl backupTranscodeMinResolution] */

undefined8 FUN_101a42d8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a42c1c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a42dc0; end: 101a42f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a42dc0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&uStack_58);
  if (uStack_58 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x000107c615f0(uStack_58);
    func_0x000107c5eea0(puVar7);
    uVar3 = 0xd000000000000035;
    func_0x000107c5fadc(0xd000000000000035,0x800000010efca2b0);
    uVar6 = uStack_58;
    func_0x000107c4980c();
    func_0x000107c61170(uVar3);
    uVar4 = uStack_58;
    func_0x00010085883c(uStack_58);
    func_0x0001000d224c(auStack_80);
    puVar5 = auStack_80;
    func_0x0001000a8868(puVar5,uStack_68);
    func_0x0001008599bc(uVar4,1,puVar7,uStack_68,uStack_60,puVar5);
    func_0x000107c615ec(uStack_58,2);
    (**(code **)(lVar8 + 8))(puVar7,lVar2);
    func_0x0001000834e4(auStack_80);
    if ((int)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a42f30);
      (*pcVar1)();
    }
    uVar6 = uVar6 & 0xffffffff;
  }
  return uVar6;
}



/* Entry: 101a42f30; end: 101a42f63; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl backupTranscodeMaxResolutionOverrideForHD] */

undefined8 FUN_101a42f30(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a42dc0();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a42f64; end: 101a430cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a42f64(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(ulong *)(unaff_x20 + _DAT_112deec88);
  if (uVar7 != 0) {
    func_0x000107c615f0(uVar7);
    func_0x000107c5eea0(puVar6);
    uVar2 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010efca270);
    uVar3 = uVar7;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    uVar4 = uVar7;
    func_0x00010085883c(uVar7);
    func_0x0001000d224c(auStack_78);
    puVar5 = auStack_78;
    func_0x0001000a8868(puVar5,uStack_60);
    func_0x0001008599bc(uVar4,1,puVar6,uStack_60,uStack_58,puVar5);
    func_0x000107c615e8(uVar7);
    (**(code **)(lVar8 + 8))(puVar6,lVar1);
    func_0x0001000834e4(auStack_78);
    if (0xff58273e < (int)uVar3 - 0xb71b01U) {
      return uVar3 & 0xffffffff;
    }
  }
  return 6000000;
}



/* Entry: 101a430d0; end: 101a43103; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl backupTranscodeHevcTargetBitrate] */

undefined8 FUN_101a430d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a42f64();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a43104; end: 101a43267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101a43104(void)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(unaff_x20 + _DAT_112deec88);
  if (lVar8 == 0) {
    bVar1 = false;
  }
  else {
    func_0x000107c615f0(lVar8);
    func_0x000107c5eea0(puVar7);
    uVar3 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010efca270);
    lVar4 = lVar8;
    func_0x000107c4980c(lVar8);
    func_0x000107c61170(uVar3);
    lVar5 = lVar8;
    func_0x00010085883c(lVar8);
    func_0x0001000d224c(auStack_78);
    puVar6 = auStack_78;
    func_0x0001000a8868(puVar6,uStack_60);
    func_0x0001008599bc(lVar5,1,puVar7,uStack_60,uStack_58,puVar6);
    func_0x000107c615e8(lVar8);
    (**(code **)(lVar9 + 8))(puVar7,lVar2);
    func_0x0001000834e4(auStack_78);
    bVar1 = (int)lVar4 - 1000000U < 0xa7d8c1;
  }
  return bVar1;
}



/* Entry: 101a43268; end: 101a4329b; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isBackupTranscodingForCUPSEnabled] */

uint FUN_101a43268(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a43104();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a4329c; end: 101a433f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a4329c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(ulong *)(unaff_x20 + _DAT_112deec88);
  if (uVar8 == 0) {
    uVar6 = 0xf;
  }
  else {
    func_0x000107c615f0(uVar8);
    func_0x000107c5eea0(puVar7);
    uVar3 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010efca240);
    uVar6 = uVar8;
    func_0x000107c4980c();
    func_0x000107c61170(uVar3);
    uVar4 = uVar8;
    func_0x00010085883c(uVar8);
    func_0x0001000d224c(auStack_78);
    puVar5 = auStack_78;
    func_0x0001000a8868(puVar5,uStack_60);
    func_0x0001008599bc(uVar4,1,puVar7,uStack_60,uStack_58,puVar5);
    func_0x000107c615e8(uVar8);
    (**(code **)(lVar9 + 8))(puVar7,lVar2);
    func_0x0001000834e4(auStack_78);
    if ((int)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a433f4);
      (*pcVar1)();
    }
    uVar6 = uVar6 & 0xffffffff;
  }
  return uVar6;
}



/* Entry: 101a433f4; end: 101a43427; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl backupTranscodingGOPSize] */

undefined8 FUN_101a433f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a4329c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a43428; end: 101a43577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a43428(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(unaff_x20 + _DAT_112deec88);
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    func_0x000107c615f0(lVar6);
    func_0x000107c5eea0(puVar5);
    uVar2 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010efca1b0);
    lVar7 = lVar6;
    func_0x000107c3ebd4(lVar6);
    func_0x000107c61170(uVar2);
    lVar3 = lVar6;
    func_0x00010085883c(lVar6);
    func_0x0001000d224c(auStack_78);
    puVar4 = auStack_78;
    func_0x0001000a8868(puVar4,uStack_60);
    func_0x0001008599bc(lVar3,0,puVar5,uStack_60,uStack_58,puVar4);
    func_0x000107c615e8(lVar6);
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    func_0x0001000834e4(auStack_78);
  }
  return lVar7;
}



/* Entry: 101a43578; end: 101a435ab; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl backupTranscodingSkippable] */

uint FUN_101a43578(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a43428();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a435ac; end: 101a436ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a435ac(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(unaff_x20 + _DAT_112deec88);
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    func_0x000107c615f0(lVar6);
    func_0x000107c5eea0(puVar5);
    uVar2 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010efca210);
    lVar7 = lVar6;
    func_0x000107c4980c(lVar6);
    func_0x000107c61170(uVar2);
    lVar7 = (long)(int)lVar7;
    lVar3 = lVar6;
    func_0x00010085883c(lVar6);
    func_0x0001000d224c(auStack_78);
    puVar4 = auStack_78;
    func_0x0001000a8868(puVar4,uStack_60);
    func_0x0001008599bc(lVar3,1,puVar5,uStack_60,uStack_58,puVar4);
    func_0x000107c615e8(lVar6);
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    func_0x0001000834e4(auStack_78);
  }
  return lVar7;
}



/* Entry: 101a43700; end: 101a43733; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl backupTranscodingQualityLevel] */

undefined8 FUN_101a43700(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a435ac();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a43734; end: 101a43887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a43734(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(unaff_x20 + _DAT_112deec88);
  if (lVar6 == 0) {
    lVar7 = 500;
  }
  else {
    func_0x000107c615f0(lVar6);
    func_0x000107c5eea0(puVar5);
    uVar2 = 0xd00000000000002e;
    func_0x000107c5fadc(0xd00000000000002e,0x800000010efca1e0);
    lVar7 = lVar6;
    func_0x000107c4980c(lVar6);
    func_0x000107c61170(uVar2);
    lVar7 = (long)(int)lVar7;
    lVar3 = lVar6;
    func_0x00010085883c(lVar6);
    func_0x0001000d224c(auStack_78);
    puVar4 = auStack_78;
    func_0x0001000a8868(puVar4,uStack_60);
    func_0x0001008599bc(lVar3,1,puVar5,uStack_60,uStack_58,puVar4);
    func_0x000107c615e8(lVar6);
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    func_0x0001000834e4(auStack_78);
  }
  return lVar7;
}



/* Entry: 101a43888; end: 101a438bb; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl subscriptionBackupTranscodingQualityLevel] */

undefined8 FUN_101a43888(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a43734();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a438bc; end: 101a43a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a438bc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(unaff_x20 + _DAT_112deec88);
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    func_0x000107c615f0(lVar6);
    func_0x000107c5eea0(puVar5);
    uVar2 = 0xd00000000000003b;
    func_0x000107c5fadc(0xd00000000000003b,0x800000010efca170);
    lVar7 = lVar6;
    func_0x000107c3ebd4(lVar6);
    func_0x000107c61170(uVar2);
    lVar3 = lVar6;
    func_0x00010085883c(lVar6);
    func_0x0001000d224c(auStack_78);
    puVar4 = auStack_78;
    func_0x0001000a8868(puVar4,uStack_60);
    func_0x0001008599bc(lVar3,0,puVar5,uStack_60,uStack_58,puVar4);
    func_0x000107c615e8(lVar6);
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    func_0x0001000834e4(auStack_78);
  }
  return lVar7;
}



/* Entry: 101a43a0c; end: 101a43a3f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl enableSubscriptionBackupTranscodingQualityImprovement] */

uint FUN_101a43a0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a438bc();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a43a40; end: 101a43b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a43a40(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(unaff_x20 + _DAT_112deec88);
  if (lVar6 == 0) {
    uVar8 = 0;
  }
  else {
    func_0x000107c615f0(lVar6);
    func_0x000107c5eea0(puVar5);
    uVar2 = 0xd00000000000003c;
    func_0x000107c5fadc(0xd00000000000003c,0x800000010efca130);
    lVar3 = lVar6;
    func_0x000107c4980c(lVar6);
    func_0x000107c61170(uVar2);
    uVar8 = (ulong)(int)lVar3;
    lVar3 = lVar6;
    func_0x00010085883c(lVar6);
    func_0x0001000d224c(auStack_78);
    puVar4 = auStack_78;
    func_0x0001000a8868(puVar4,uStack_60);
    func_0x0001008599bc(lVar3,1,puVar5,uStack_60,uStack_58,puVar4);
    func_0x000107c615e8(lVar6);
    (**(code **)(lVar7 + 8))(puVar5,lVar1);
    func_0x0001000834e4(auStack_78);
  }
  return uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
}



/* Entry: 101a43b94; end: 101a43bc7; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl backupTranscodingThrottledMaxRetryAttempts] */

undefined8 FUN_101a43b94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a43a40();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a43bc8; end: 101a43bdf;  */

void FUN_101a43bc8(void)

{
  uRam0000000113803a28 = 0x404e000000000000;
  return;
}



/* Entry: 101a43be0; end: 101a43c4f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isCloudSyncBackgroundUploadedOperationPrioritizationDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a43be0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec80);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd000000000000038,0x800000010efca410,0,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a43c50; end: 101a43cbf; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isMarkAllDuplicatedSnapsAsClaimedEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a43c50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec80);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd000000000000034,0x800000010efca3d0,0,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a43cc0; end: 101a43d2f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isBackgroundUploadDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a43cc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec80);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd000000000000027,0x800000010efca3a0,0,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a43d30; end: 101a43dd3; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl cloudSyncClientSideDatabaseTimeoutInSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101a43d30(undefined8 param_1,undefined8 param_2)

{
  long lStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 == 0) {
    param_1 = uRam0000000113803a28;
    if (lRam0000000112dee930 != -1) {
      func_0x000107c61568(0x112dee930,FUN_101a43bc8);
      param_1 = uRam0000000113803a28;
    }
  }
  else {
    func_0x000108ec01e4(lStack_38);
    func_0x000107c615e8(lStack_38);
  }
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 101a43dd4; end: 101a43e43; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldBlockUploadOperationsWithMissingBaseMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a43dd4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec80);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd00000000000002d,0x800000010efca370,0,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a43e44; end: 101a440d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101a43e44(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112deec90);
  func_0x000107c615f0(uVar6);
  func_0x000107c5eea0(puVar5);
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efca5b0);
  uVar3 = uVar6;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  uVar2 = uVar6;
  func_0x00010085883c(uVar6);
  func_0x0001000d224c(auStack_78);
  puVar4 = auStack_78;
  func_0x0001000a8868(puVar4,uStack_60);
  func_0x0001008599bc(uVar2,0,puVar5,uStack_60,uStack_58,puVar4);
  func_0x000107c615e8(uVar6);
  (**(code **)(lVar7 + 8))(puVar5,lVar1);
  func_0x0001000834e4(auStack_78);
  uVar2 = 0;
  if ((int)uVar3 == 0) {
    uVar2 = 0x13;
  }
  return uVar2;
}



/* Entry: 101a440d4; end: 101a44107; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl tacomaVersionNumber] */

undefined8 FUN_101a440d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a43e44();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a44108; end: 101a44177; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isTacomaTranscodingOptional] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a44108(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec80);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd00000000000002f,0x800000010efca700,0,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a44178; end: 101a442cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a44178(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(unaff_x20 + _DAT_112deec88);
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    func_0x000107c615f0(lVar6);
    func_0x000107c5eea0(puVar5);
    uVar2 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010efca6d0);
    lVar7 = lVar6;
    func_0x000107c4980c(lVar6);
    func_0x000107c61170(uVar2);
    lVar7 = (long)(int)lVar7;
    lVar3 = lVar6;
    func_0x00010085883c(lVar6);
    func_0x0001000d224c(auStack_78);
    puVar4 = auStack_78;
    func_0x0001000a8868(puVar4,uStack_60);
    func_0x0001008599bc(lVar3,1,puVar5,uStack_60,uStack_58,puVar4);
    func_0x000107c615e8(lVar6);
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    func_0x0001000834e4(auStack_78);
  }
  return lVar7;
}



/* Entry: 101a442cc; end: 101a442ff; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl cloudSyncCellularDailyBackupDataCapInBytes] */

undefined8 FUN_101a442cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a44178();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a44300; end: 101a4446b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_101a44300(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  double dVar8;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 == 0) {
    dVar8 = 0.0;
  }
  else {
    func_0x000107c615f0(lStack_58);
    func_0x000107c5eea0(puVar6);
    uVar2 = 0xd00000000000003b;
    func_0x000107c5fadc(0xd00000000000003b,0x800000010efca690);
    lVar3 = lStack_58;
    func_0x000107c4980c(lStack_58);
    func_0x000107c61170(uVar2);
    lVar4 = lStack_58;
    func_0x00010085883c(lStack_58);
    func_0x0001000d224c(auStack_80);
    puVar5 = auStack_80;
    func_0x0001000a8868(puVar5,uStack_68);
    func_0x0001008599bc(lVar4,1,puVar6,uStack_68,uStack_60,puVar5);
    func_0x000107c615ec(lStack_58,2);
    (**(code **)(lVar7 + 8))(puVar6,lVar1);
    func_0x0001000834e4(auStack_80);
    dVar8 = (double)((uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU));
  }
  return dVar8;
}



/* Entry: 101a4446c; end: 101a444ab; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldTacomaUpdateEntriesStepWaitForDownwardSync] */

bool FUN_101a4446c(double param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_101a44300();
  func_0x000107c61170(param_2);
  return 0.0 < param_1;
}



/* Entry: 101a444ac; end: 101a444e7; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl tacomaUpdateEntriesStepWaitTimeoutForDownwardSync] */

undefined8 FUN_101a444ac(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_101a44300();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 101a444e8; end: 101a4464f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a444e8(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c615f0(lStack_58);
    func_0x000107c5eea0(puVar7);
    uVar3 = 0xd00000000000003a;
    func_0x000107c5fadc(0xd00000000000003a,0x800000010efca650);
    lVar4 = lStack_58;
    func_0x000107c4980c(lStack_58);
    func_0x000107c61170(uVar3);
    lVar5 = lStack_58;
    func_0x00010085883c(lStack_58);
    func_0x0001000d224c(auStack_80);
    puVar6 = auStack_80;
    func_0x0001000a8868(puVar6,uStack_68);
    func_0x0001008599bc(lVar5,1,puVar7,uStack_68,uStack_60,puVar6);
    func_0x000107c615ec(lStack_58,2);
    (**(code **)(lVar8 + 8))(puVar7,lVar2);
    func_0x0001000834e4(auStack_80);
    uVar1 = (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU);
  }
  return uVar1;
}



/* Entry: 101a44650; end: 101a44683; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl tacomaUpdateEntriesRetryLimitForWritingSuccessToDB] */

undefined8 FUN_101a44650(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a444e8();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a44684; end: 101a446f3; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldTacomaAvoidReuploadForEdit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a44684(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec80);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd00000000000002e,0x800000010efca620,1,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a446f4; end: 101a4486b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_101a446f4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  int iVar7;
  long lVar8;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 == 0) {
    iVar7 = 2;
  }
  else {
    func_0x000107c615f0(lStack_68);
    func_0x000107c5eea0(puVar6);
    uVar2 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010efca5e0);
    lVar3 = lStack_68;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    lVar4 = lStack_68;
    func_0x00010085883c(lStack_68);
    func_0x0001000d224c(auStack_90);
    puVar5 = auStack_90;
    func_0x0001000a8868(puVar5,uStack_78);
    func_0x0001008599bc(lVar4,1,puVar6,uStack_78,uStack_70,puVar5);
    func_0x000107c615ec(lStack_68,2);
    (**(code **)(lVar8 + 8))(puVar6,lVar1);
    func_0x0001000834e4(auStack_90);
    iVar7 = (int)lVar3;
    if (iVar7 < 1) {
      iVar7 = 2;
    }
  }
  return iVar7;
}



/* Entry: 101a4486c; end: 101a4489f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldAddOperationToTacomaCheckTimeoutInSeconds] */

undefined8 FUN_101a4486c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a446f4();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a448a0; end: 101a448d3; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl tacomaEmergencyShutoff] */

uint FUN_101a448a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101a43f90();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a448d4; end: 101a4492b; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldDisableExistingThumbnailURLReuse] */

uint FUN_101a448d4(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 1;
  func_0x000100858660(1,0xd00000000000003f,0x800000010efca570,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a4492c; end: 101a44983; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldDisableExistingOverlayURLReuse] */

uint FUN_101a4492c(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 1;
  func_0x000100858660(1,0xd00000000000003d,0x800000010efca530,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a44984; end: 101a449db; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldDisableLegacyBackup] */

uint FUN_101a44984(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 1;
  func_0x000100858660(1,0xd00000000000001e,0x800000010efca510,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a449dc; end: 101a44a33; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldIntegrateTacomaSuccessIntoSaveCompletion] */

uint FUN_101a449dc(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000037,0x800000010efca4d0,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a44a34; end: 101a44c7b;  */

/* WARNING: Removing unreachable block (ram,0x000101a44afc) */
/* WARNING: Removing unreachable block (ram,0x000101a44c64) */

undefined * FUN_101a44a34(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 unaff_x20;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 ***pppuStack_90;
  ulong uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_101a44c7c();
  uStack_70 = 0x2c;
  uStack_68 = 0xe100000000000000;
  puStack_80 = &uStack_70;
  lVar3 = 0x7fffffffffffffff;
  func_0x0001014784b8(0x7fffffffffffffff,1,FUN_101a452cc,&pppuStack_90,unaff_x20,param_2);
  uVar14 = *(ulong *)(lVar3 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar14 == 0) {
LAB_101a44c24:
    func_0x000107c6142c(lVar3);
    return puVar9;
  }
  uVar11 = 0;
LAB_101a44ab4:
  puVar12 = (ulong *)(lVar3 + 0x38 + uVar11 * 0x20);
  uVar13 = uVar11;
  do {
    if (*(ulong *)(lVar3 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a44c54);
      (*pcVar2)();
    }
    ppppuVar5 = (undefined8 ****)puVar12[-3];
    uVar11 = puVar12[-2];
    if ((uVar11 ^ (ulong)ppppuVar5) >> 0xe != 0) {
      ppppuVar6 = (undefined8 ****)puVar12[-1];
      uVar1 = *puVar12;
      if ((uVar1 >> 0x3c & 1) == 0) {
        if ((uVar1 >> 0x3d & 1) == 0) {
          if (((ulong)ppppuVar6 >> 0x3c & 1) == 0) {
            func_0x000107c60358(ppppuVar6,uVar1);
          }
          else {
            ppppuVar6 = (undefined8 ****)((uVar1 & 0xfffffffffffffff) + 0x20);
          }
          uVar10 = (uint)ppppuVar5;
          FUN_101a452e8();
          ppppuVar5 = ppppuVar6;
        }
        else {
          uStack_88 = uVar1 & 0xffffffffffffff;
          ppppuVar4 = &pppuStack_90;
          pppuStack_90 = ppppuVar6;
          FUN_101a452e8();
          uVar10 = (uint)ppppuVar5;
          ppppuVar5 = ppppuVar4;
        }
      }
      else {
        func_0x000107c61434(uVar1);
        FUN_101a44f44(ppppuVar5,uVar11,ppppuVar6,uVar1,10);
        func_0x000107c6142c(uVar1);
        uVar10 = (uint)uVar11;
      }
      if ((uVar10 & 0xff) != 1) break;
    }
    uVar13 = uVar13 + 1;
    puVar12 = puVar12 + 4;
    if (uVar14 == uVar13) goto LAB_101a44c24;
  } while( true );
  puVar7 = puVar9;
  func_0x000107c61558();
  puVar8 = puVar9;
  if (((ulong)puVar7 & 1) == 0) {
    puVar8 = (undefined *)0x0;
    func_0x000101755b54(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
  }
  uVar1 = *(ulong *)(puVar8 + 0x10);
  puVar9 = puVar8;
  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
    func_0x000101755b54(puVar9,uVar1 + 1,1,puVar8);
  }
  uVar11 = uVar13 + 1;
  *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
  *(undefined8 *****)(puVar9 + uVar1 * 8 + 0x20) = ppppuVar5;
  if (uVar14 - 1 == uVar13) goto LAB_101a44c24;
  goto LAB_101a44ab4;
}



/* Entry: 101a44c7c; end: 101a44d53;  */

/* WARNING: Removing unreachable block (ram,0x000101a4af40) */
/* WARNING: Removing unreachable block (ram,0x000101a4af9c) */
/* WARNING: Removing unreachable block (ram,0x000101a4af70) */
/* WARNING: Removing unreachable block (ram,0x000101a4af48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101a44c7c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long extraout_x8;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_90 [8];
  long alStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c30908();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a44d50);
    (*pcVar1)();
  }
  uVar2 = param_1;
  func_0x000107c5faec();
  uVar8 = param_2;
  func_0x000107c61170(param_1);
  uVar3 = param_2;
  func_0x000107c6142c();
  uVar2 = uVar2 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    uVar9 = 0xd000000000000032;
    uVar10 = 0xe000000000000000;
    lVar11 = 0;
    lVar4 = 0;
    func_0x000107c5eea4();
    lVar13 = *(long *)(lVar4 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
    puVar12 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    func_0x0001000d224c(alStack_88);
    if (alStack_88[0] == 0) {
      func_0x000107c61434(0xe000000000000000);
    }
    else {
      func_0x000107c615f0(alStack_88[0]);
      func_0x000107c5eea0(puVar12);
      func_0x000107c5fadc(0xd000000000000032,0x800000010efca490);
      uVar5 = 0;
      uVar10 = 0xe000000000000000;
      func_0x000107c5fadc(0,0xe000000000000000);
      lVar6 = alStack_88[0];
      func_0x000107c5c1dc(alStack_88[0]);
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar5);
      lVar11 = lVar6;
      func_0x000107c5faec(lVar6);
      func_0x000107c61170(lVar6);
      lVar6 = alStack_88[0];
      func_0x00010085883c(alStack_88[0]);
      func_0x0001000d224c(alStack_88);
      plVar7 = alStack_88;
      func_0x0001000a8868(plVar7,uStack_70);
      func_0x0001008599bc(lVar6,4,puVar12,uStack_70,uStack_68,plVar7);
      func_0x000107c615ec(alStack_88[0],2);
      (**(code **)(lVar13 + 8))(puVar12,lVar4);
      func_0x0001000834e4(alStack_88);
    }
    auVar15._8_8_ = uVar10;
    auVar15._0_8_ = lVar11;
    return auVar15;
  }
  func_0x000107c30908();
  func_0x000107c61180();
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a44d54);
    (*pcVar1)();
  }
  uVar2 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  auVar14._8_8_ = uVar8;
  auVar14._0_8_ = uVar2;
  return auVar14;
}



/* Entry: 101a44d54; end: 101a44da3; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl backupOperationTypesToUseMemoriesNavScheduling] */

void FUN_101a44d54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a44a34();
  func_0x000107c61170(param_1);
  uVar2 = uVar1;
  func_0x000107c5fc48(uVar1,PTR___sSiN_11034deb0);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101a44da4; end: 101a44f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a44da4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  long alStack_78 [3];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(alStack_78);
  if (alStack_78[0] == 0) {
    lVar6 = 0;
  }
  else {
    func_0x000107c615f0(alStack_78[0]);
    func_0x000107c5eea0(puVar5);
    uVar2 = 0xd000000000000030;
    func_0x000107c5fadc(0xd000000000000030,0x800000010efca450);
    lVar6 = alStack_78[0];
    func_0x000107c4980c(alStack_78[0]);
    func_0x000107c61170(uVar2);
    lVar6 = (long)(int)lVar6;
    lVar3 = alStack_78[0];
    func_0x00010085883c(alStack_78[0]);
    func_0x0001000d224c(alStack_78);
    plVar4 = alStack_78;
    func_0x0001000a8868(plVar4,uStack_60);
    func_0x0001008599bc(lVar3,1,puVar5,uStack_60,uStack_58,plVar4);
    func_0x000107c615ec(alStack_78[0],2);
    (**(code **)(lVar7 + 8))(puVar5,lVar1);
    func_0x0001000834e4(alStack_78);
  }
  return lVar6;
}



/* Entry: 101a44f10; end: 101a44f43; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl delayAfterDeleteOperationInSec] */

undefined8 FUN_101a44f10(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a44da4();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a44f44; end: 101a4504f;  */

/* WARNING: Removing unreachable block (ram,0x000101a45044) */

undefined1  [16]
FUN_101a44f44(undefined8 ***param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuStack_50 = param_1;
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000100edab88();
  func_0x000107c61434(param_4);
  pppuVar1 = &ppuStack_50;
  puVar3 = PTR___sSsN_11034e1d8;
  func_0x000107c5fbd4(pppuVar1,PTR___sSsN_11034e1d8,
                      PTR___sSss25LosslessStringConvertiblesWP_11034e1f0,param_1);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    func_0x000100edbde8();
    func_0x000107c6142c(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      func_0x000107c60358();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    FUN_101a45050(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_48 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_50;
    ppuStack_50 = pppuVar1;
    FUN_101a45050(pppuVar2,puVar4,param_5);
  }
  func_0x000107c6142c(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}



/* Entry: 101a45050; end: 101a452cb;  */

undefined1  [16] FUN_101a45050(byte *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  char cVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  iVar8 = (int)param_3;
  uVar7 = param_2;
  if (*param_1 == 0x2b) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101a452cc);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) goto LAB_101a452bc;
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_101a452bc;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 + (ulong)(byte)(bVar3 + cVar12),
         SCARRY8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_101a452a0;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  else {
    if (*param_1 != 0x2d) {
      if (param_2 != 0) {
        uVar1 = iVar8 + 0x30;
        uVar2 = 0x61;
        if (10 < param_3) {
          uVar2 = iVar8 + 0x57;
        }
        uVar5 = 0x41;
        if (10 < param_3) {
          uVar1 = 0x3a;
          uVar5 = iVar8 + 0x37;
        }
        if (param_1 == (byte *)0x0) {
          return ZEXT816(0);
        }
        uVar9 = 0;
        do {
          bVar3 = *param_1;
          if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
            uVar10 = (uint)bVar3;
            if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
              uVar7 = 1;
              if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_101a452bc;
              cVar12 = -0x57;
            }
            else {
              cVar12 = -0x37;
            }
          }
          else {
            cVar12 = -0x30;
          }
          lVar11 = uVar9 * param_3;
          if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar11 >> 0x3f) ||
             (uVar9 = lVar11 + (ulong)(byte)(bVar3 + cVar12),
             SCARRY8(lVar11,(ulong)(byte)(bVar3 + cVar12)))) break;
          param_1 = param_1 + 1;
          param_2 = param_2 - 1;
          if (param_2 == 0) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar9;
            return auVar15;
          }
        } while( true );
      }
LAB_101a452a0:
      return ZEXT816(1) << 0x40;
    }
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101a452c8);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) {
LAB_101a452bc:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar7;
      return auVar4 << 0x40;
    }
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_101a452bc;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 - (ulong)(byte)(bVar3 + cVar12),
         SBORROW8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_101a452a0;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar9;
  return auVar14;
}



/* Entry: 101a452cc; end: 101a452e7;  */

uint FUN_101a452cc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101a4b0c8(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 101a452e8; end: 101a45603;  */

undefined1  [16] FUN_101a452e8(long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  uVar5 = (uint)(param_4 >> 0x3b) & 1;
  if ((param_5 & 0x1000000000000000) == 0) {
    uVar5 = 1;
  }
  uVar10 = 4L << uVar5;
  uVar2 = param_2;
  if ((param_2 & 0xc) == uVar10) {
    func_0x000100e36e7c(param_2,param_4,param_5);
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_101a45390;
LAB_101a45330:
    uVar9 = uVar2 >> 0x10;
  }
  else {
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_101a45330;
LAB_101a45390:
    uVar9 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar9 = param_5 >> 0x38 & 0xf;
    }
    if (uVar9 < uVar2 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a45604);
      (*pcVar1)();
    }
    uVar9 = 0xf;
    func_0x000107c5fb98(0xf,uVar2,param_4,param_5);
  }
  if ((param_2 & 0xc) == uVar10) {
    func_0x000100e36e7c(param_2,param_4,param_5);
  }
  if ((param_3 & 0xc) == uVar10) {
    func_0x000100e36e7c(param_3,param_4,param_5);
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_101a45448;
LAB_101a4534c:
    param_2 = (param_3 >> 0x10) - (param_2 >> 0x10);
  }
  else {
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_101a4534c;
LAB_101a45448:
    uVar2 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar2 = param_5 >> 0x38 & 0xf;
    }
    if (uVar2 < param_2 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a455f4);
      (*pcVar1)();
    }
    if (uVar2 < param_3 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a455f8);
      (*pcVar1)();
    }
    func_0x000107c5fb98(param_2,param_3,param_4,param_5);
  }
  uVar2 = uVar9 + param_2;
  if (SCARRY8(uVar9,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a455ec);
    (*pcVar1)();
  }
  if ((long)uVar2 < (long)uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a455f0);
    (*pcVar1)();
  }
  pbVar7 = (byte *)0x0;
  if (param_1 != 0) {
    pbVar7 = (byte *)(uVar9 + param_1);
  }
  if (*pbVar7 == 0x2b) {
    if (uVar2 == uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a45600);
      (*pcVar1)();
    }
    if (uVar2 - uVar9 != 1) {
      lVar3 = 0;
      lVar6 = param_2 - 1;
      do {
        pbVar7 = pbVar7 + 1;
        if (((9 < *pbVar7 - 0x30) ||
            (lVar8 = lVar3 * 10, SUB168(SEXT816(lVar3) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
           (uVar2 = (ulong)(byte)(*pbVar7 - 0x30), lVar3 = lVar8 + uVar2, SCARRY8(lVar8,uVar2)))
        goto LAB_101a455c0;
        uVar4 = 0;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      goto LAB_101a455c8;
    }
  }
  else if (*pbVar7 == 0x2d) {
    if (uVar2 == uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a455fc);
      (*pcVar1)();
    }
    if (uVar2 - uVar9 != 1) {
      lVar3 = 0;
      lVar6 = param_2 - 1;
      do {
        pbVar7 = pbVar7 + 1;
        if (((9 < *pbVar7 - 0x30) ||
            (lVar8 = lVar3 * 10, SUB168(SEXT816(lVar3) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
           (uVar2 = (ulong)(byte)(*pbVar7 - 0x30), lVar3 = lVar8 - uVar2, SBORROW8(lVar8,uVar2)))
        goto LAB_101a455c0;
        uVar4 = 0;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      goto LAB_101a455c8;
    }
  }
  else if (uVar2 != uVar9) {
    lVar3 = 0;
    if (pbVar7 == (byte *)0x0) {
      uVar4 = 0;
    }
    else {
      do {
        if (((9 < *pbVar7 - 0x30) ||
            (lVar6 = lVar3 * 10, SUB168(SEXT816(lVar3) * SEXT816(10),8) != lVar6 >> 0x3f)) ||
           (uVar2 = (ulong)(byte)(*pbVar7 - 0x30), lVar3 = lVar6 + uVar2, SCARRY8(lVar6,uVar2)))
        goto LAB_101a455c0;
        uVar4 = 0;
        param_2 = param_2 - 1;
        pbVar7 = pbVar7 + 1;
      } while (param_2 != 0);
    }
    goto LAB_101a455c8;
  }
LAB_101a455c0:
  lVar3 = 0;
  uVar4 = 1;
LAB_101a455c8:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = lVar3;
  return auVar11;
}



/* Entry: 101a45604; end: 101a45607; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isTacomaBackupEnabledForCreateOrAddToStoryOperations] */

uint FUN_101a45604(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100c0ba78();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a45608; end: 101a4560b; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isTacomaBackupEnabledForDeleteEntryOperations] */

uint FUN_101a45608(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100c0ba78();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a4560c; end: 101a4560f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isTacomaBackupEnabledForReplaceSnapOperations] */

uint FUN_101a4560c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100c0ba78();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a45610; end: 101a45613; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isTacomaBackupEnabledForRenameEntryOperations] */

uint FUN_101a45610(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100c0ba78();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a45614; end: 101a45617; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isTacomaBackupEnabledForStoryReorderSnapOperations] */

uint FUN_101a45614(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100c0ba78();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a45618; end: 101a4561b; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isTacomaBackupEnabledForEntrySnapRemoveOperations] */

uint FUN_101a45618(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100c0ba78();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a4561c; end: 101a4561f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isTacomaBackupEnabledForSnapHighlightOperations] */

uint FUN_101a4561c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100c0ba78();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a45620; end: 101a45623; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isTacomaBackupEnabledForUpdateMeoEntryOperations] */

uint FUN_101a45620(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100c0ba78();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}


