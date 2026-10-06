/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10893780c; end: 1089378db; +[TCV3VideoCodecStats VideoCodecStatsWithCodecName:codecType:videoMediaType:sourceId:startTimeMs:durationMs:activeDurationMs:initAttemptCount:initAttemptFailureCount:inputFrameCount:outputFrameCount:submitFrameCount:submitFailureCount:processFailureCount:avgFrameProcessTimeUs:androidCodecDetails:] */

void FUN_10893780c(undefined8 param_1)

{
  undefined8 in_x5;
  undefined4 in_stack_00000018;
  
  _objc_retain(in_x5);
  func_0x0001089379a0();
  _objc_alloc(param_1);
  func_0x00010bfff540();
  func_0x00010893798c();
  func_0x000108937998();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_stack_00000018);
  return;
}



/* Entry: 1089378dc; end: 1089378e3; -[TCV3VideoCodecStats codecName] */

undefined8 FUN_1089378dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1089378e4; end: 1089378eb; -[TCV3VideoCodecStats codecType] */

undefined8 FUN_1089378e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1089378ec; end: 1089378f3; -[TCV3VideoCodecStats videoMediaType] */

undefined8 FUN_1089378ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1089378f4; end: 1089378fb; -[TCV3VideoCodecStats sourceId] */

undefined8 FUN_1089378f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1089378fc; end: 108937903; -[TCV3VideoCodecStats startTimeMs] */

undefined8 FUN_1089378fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108937904; end: 10893790b; -[TCV3VideoCodecStats durationMs] */

undefined4 FUN_108937904(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10893790c; end: 108937913; -[TCV3VideoCodecStats activeDurationMs] */

undefined4 FUN_10893790c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108937914; end: 10893791b; -[TCV3VideoCodecStats initAttemptCount] */

undefined4 FUN_108937914(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10893791c; end: 108937923; -[TCV3VideoCodecStats initAttemptFailureCount] */

undefined4 FUN_10893791c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 108937924; end: 10893792b; -[TCV3VideoCodecStats inputFrameCount] */

undefined4 FUN_108937924(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 10893792c; end: 108937933; -[TCV3VideoCodecStats outputFrameCount] */

undefined4 FUN_10893792c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 108937934; end: 10893793b; -[TCV3VideoCodecStats submitFrameCount] */

undefined4 FUN_108937934(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 10893793c; end: 108937943; -[TCV3VideoCodecStats submitFailureCount] */

undefined4 FUN_10893793c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



/* Entry: 108937944; end: 10893794b; -[TCV3VideoCodecStats processFailureCount] */

undefined4 FUN_108937944(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Entry: 10893794c; end: 108937953; -[TCV3VideoCodecStats avgFrameProcessTimeUs] */

undefined8 FUN_10893794c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108937954; end: 10893795b; -[TCV3VideoCodecStats androidCodecDetails] */

undefined8 FUN_108937954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10893795c; end: 10893798b; -[TCV3VideoCodecStats .cxx_destruct] */

void FUN_10893795c(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x48,0);
  return;
}



/* Entry: 10893798c; end: 1089379a7;  */

void FUN_10893798c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1089379a8; end: 108937b53;  */

undefined8 *
FUN_1089379a8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  undefined8 uVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a9aa70;
  lVar2 = param_2[1];
  uVar3 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_108939a9c();
    } while (extraout_w10 != 0);
  }
  lVar2 = param_3[1];
  uVar3 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_108939a9c();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = param_4[1];
  uVar3 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_108939a9c();
    } while (extraout_w10_01 != 0);
  }
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  lVar2 = param_5[1];
  uVar3 = *param_5;
  param_1[0xe] = param_5[1];
  param_1[0xd] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_108939a9c();
    } while (extraout_w10_02 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 0xf,param_6);
  lVar2 = param_7[1];
  uVar3 = *param_7;
  param_1[0x13] = param_7[1];
  param_1[0x12] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_108939a9c();
    } while (extraout_w10_03 != 0);
  }
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_DAT_110a9aaf8;
  lVar2 = param_8[1];
  uVar3 = *param_8;
  puVar1[2] = param_8[1];
  puVar1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_108939a9c();
    } while (extraout_w10_04 != 0);
  }
  param_1[0x14] = puVar1;
  return param_1;
}



/* Entry: 108937b54; end: 108937bdb;  */

undefined8 * FUN_108937b54(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a9aa70;
  plVar1 = (long *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x000108938244(param_1 + 0x12);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf);
  func_0x0001089383a4(param_1 + 0xd);
  func_0x000108938380(param_1 + 0xb);
  func_0x00010893835c(param_1 + 9);
  func_0x000108938338(param_1 + 7);
  func_0x000108937570(param_1 + 5);
  func_0x000108938314(param_1 + 3);
  func_0x00010893804c(param_1 + 1);
  return param_1;
}



/* Entry: 108937bdc; end: 108937bdf;  */

undefined8 * FUN_108937bdc(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a9aa70;
  plVar1 = (long *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x000108938244(param_1 + 0x12);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf);
  func_0x0001089383a4(param_1 + 0xd);
  func_0x000108938380(param_1 + 0xb);
  func_0x00010893835c(param_1 + 9);
  func_0x000108938338(param_1 + 7);
  func_0x000108937570(param_1 + 5);
  func_0x000108938314(param_1 + 3);
  func_0x00010893804c(param_1 + 1);
  return param_1;
}



/* Entry: 108937be0; end: 108937bf3;  */

void FUN_108937be0(void)

{
  FUN_108937b54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108937bf4; end: 108937ee3;  */

long * FUN_108937bf4(long param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 *param_5
                    )

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lStack_138;
  long *plStack_130;
  long lStack_128;
  long lStack_120;
  long *plStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  long *plStack_90;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_108939f84(&lStack_b0,param_3);
  FUN_10893a2f4(&uStack_c0);
  func_0x000108939bf4();
  plVar11 = param_5 + 1;
  *plVar11 = 0;
  param_5[2] = 0;
  *param_5 = &PTR_FUN_110a9ab48;
  puVar13 = param_5 + 3;
  *puVar13 = &PTR_DAT_110a9af50;
  param_5[4] = &PTR_DAT_110a9afc0;
  param_5[5] = &PTR_DAT_110a9b000;
  param_5[6] = &PTR_DAT_110a9b028;
  param_5[8] = lStack_b8;
  param_5[7] = uStack_c0;
  if (lStack_b8 != 0) {
    do {
      func_0x000108939a9c();
    } while (extraout_w10 != 0);
  }
  lVar12 = *(long *)(param_1 + 0x98);
  uVar14 = *(undefined8 *)(param_1 + 0x90);
  param_5[10] = *(undefined8 *)(param_1 + 0x98);
  param_5[9] = uVar14;
  if (lVar12 != 0) {
    do {
      func_0x000108939a9c();
    } while (extraout_w10_00 != 0);
  }
  puStack_d0 = puVar13;
  puStack_c8 = param_5;
  FUN_10893c0b4(puVar13);
  func_0x000108939b58();
  (*extraout_x8)();
  plVar9 = *(long **)(param_1 + 0x10);
  plVar3 = *(long **)(param_1 + 0x18);
  lVar12 = *(long *)(param_1 + 8);
  lStack_138 = lVar12;
  lStack_128 = param_1;
  if ((plVar9 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar10 = plVar9, plStack_130 = plVar9,
     lStack_120 = lVar12, plStack_118 = plVar9, plVar9 == (long *)0x0)) {
    func_0x00010527822c();
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x108937e80);
    (*pcVar8)();
  }
  do {
    func_0x000108939a9c();
  } while (extraout_w10_01 != 0);
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar7) {
      *plVar11 = *plVar11 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar1 = *param_4;
  lVar4 = param_4[1];
  puStack_110 = puVar13;
  puStack_108 = param_5;
  lStack_100 = lVar1;
  lStack_f8 = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x000108939a9c();
    } while (extraout_w10_02 != 0);
  }
  lVar2 = *param_2;
  lVar5 = param_2[1];
  lStack_f0 = lVar2;
  lStack_e8 = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x000108939a9c();
    } while (extraout_w10_03 != 0);
  }
  lStack_e0 = lStack_b0;
  lStack_d8 = lStack_a8;
  if (lStack_a8 != 0) {
    do {
      func_0x000108939a9c();
    } while (extraout_w10_04 != 0);
  }
  pcStack_a0 = FUN_108938460;
  ppuStack_98 = &PTR_FUN_110a9ace0;
  func_0x000108939bf4();
  *plVar10 = param_1;
  plVar10[1] = lVar12;
  lStack_120 = 0;
  plStack_118 = (long *)0x0;
  plVar10[2] = (long)plVar9;
  plVar10[3] = (long)puVar13;
  puStack_110 = (undefined8 *)0x0;
  puStack_108 = (undefined8 *)0x0;
  plVar10[4] = (long)param_5;
  plVar10[5] = lVar1;
  plVar10[6] = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x000108939a9c();
    } while (extraout_w10_05 != 0);
  }
  plVar10[7] = lVar2;
  plVar10[8] = lVar5;
  if (lVar5 != 0) {
    plVar11 = (long *)(lVar5 + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = *plVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar10[9] = lStack_b0;
  plVar10[10] = lStack_a8;
  lStack_e0 = 0;
  lStack_d8 = 0;
  plStack_90 = plVar10;
  (**(code **)(*plVar3 + 8))(plVar3,&pcStack_a0);
  func_0x000108939b6c();
  FUN_108937ee4(&lStack_128);
  func_0x00010893843c(&lStack_138);
  func_0x000108938418(&puStack_d0);
  func_0x000108938220(&uStack_c0);
  plVar11 = &lStack_b0;
  func_0x0001089383c8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x000108939b6c();
    FUN_108937ee4(&lStack_128);
    func_0x00010893843c(&lStack_138);
    func_0x000108938418(&puStack_d0);
    func_0x000108938220(&uStack_c0);
    plVar11 = &lStack_b0;
    func_0x0001089383c8(plVar11);
    func_0x000108939be0();
    func_0x0001089383c8(plVar11 + 9);
    FUN_108938004(plVar11 + 7);
    func_0x000108938028(plVar11 + 5);
    func_0x000108938418(plVar11 + 3);
    func_0x00010893804c(plVar11 + 1);
    return plVar11;
  }
  return plVar11;
}



/* Entry: 108937ee4; end: 108937f27;  */

long FUN_108937ee4(long param_1)

{
  func_0x0001089383c8(param_1 + 0x48);
  FUN_108938004(param_1 + 0x38);
  func_0x000108938028(param_1 + 0x28);
  FUN_108938418(param_1 + 0x18);
  func_0x00010893804c(param_1 + 8);
  return param_1;
}



/* Entry: 108937f28; end: 108937f2f;  */

void FUN_108937f28(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_28;
  
  func_0x000107c2ba38(param_1,param_2,&uStack_28,10);
  *param_3 = uStack_28;
  return;
}



/* Entry: 108937f30; end: 108937fdb;  */

void FUN_108937f30(undefined8 param_1,long *param_2,undefined8 param_3)

{
  (**(code **)(*param_2 + 0x18))(param_2,param_3);
  return;
}



/* Entry: 108937fdc; end: 108938003;  */

void FUN_108937fdc(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  param_1[1] = *(undefined8 *)(param_2 + 0x30);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_108939a9c(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 108938004; end: 10893806f;  */

void FUN_108938004(long param_1)

{
  func_0x000108939b1c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108938070; end: 1089380fb;  */

void FUN_108938070(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar5 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar5 + (param_2[1] - (long)puVar2));
  puVar6 = puVar1;
  for (; puVar5 != puVar2; puVar5 = puVar5 + 4) {
    *puVar6 = *puVar5;
    uVar7 = puVar5[1];
    puVar6[2] = puVar5[2];
    puVar6[1] = uVar7;
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(puVar5 + 3);
    uVar3 = *(undefined2 *)((long)puVar5 + 0x1c);
    *(undefined1 *)((long)puVar6 + 0x1e) = *(undefined1 *)((long)puVar5 + 0x1e);
    *(undefined2 *)((long)puVar6 + 0x1c) = uVar3;
    puVar6 = puVar6 + 4;
  }
  param_2[1] = puVar1;
  lVar4 = *param_1;
  *param_1 = (long)puVar1;
  param_1[1] = lVar4;
  param_2[1] = lVar4;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1089380fc; end: 1089381a7;  */

long * FUN_1089380fc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000104c04880();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 1089381a8; end: 1089381bf;  */

void FUN_1089381a8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1089381c0; end: 1089382a3;  */

long FUN_1089381c0(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  return param_1;
}



/* Entry: 1089382a4; end: 1089382ef;  */

void FUN_1089382a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  func_0x000108973a34(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001089382ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3,param_4);
  return;
}



/* Entry: 1089382f0; end: 1089383eb;  */

void FUN_1089382f0(long param_1)

{
  func_0x000108939b1c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 1089383ec; end: 1089383ef;  */

void FUN_1089383ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9ab48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1089383f0; end: 108938403;  */

void FUN_1089383f0(void)

{
  func_0x00010893840c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108938404; end: 108938417;  */

void FUN_108938404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108939b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108938418; end: 10893845f;  */

void FUN_108938418(long param_1)

{
  func_0x000108939b1c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108938460; end: 10893914b;  */

void FUN_108938460(long param_1,long param_2)

{
  undefined2 uVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined ***pppuVar10;
  undefined8 *puVar11;
  undefined8 ****ppppuVar12;
  undefined8 *puVar13;
  code *extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  undefined4 *extraout_x8_05;
  undefined4 *puVar14;
  long extraout_x8_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  long *plVar18;
  char *pcVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined **ppuStack_598;
  uint uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  char cStack_570;
  undefined8 *puStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  char *pcStack_548;
  char *pcStack_540;
  ulong uStack_538;
  undefined8 uStack_530;
  undefined4 *puStack_528;
  char *pcStack_520;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  char *pcStack_4e0;
  char *pcStack_4d8;
  char *pcStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [24];
  undefined2 uStack_460;
  undefined8 uStack_45c;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  undefined1 auStack_410 [160];
  ulong uStack_370;
  undefined8 uStack_368;
  undefined4 *puStack_360;
  char *pcStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  char *pcStack_318;
  char *pcStack_310;
  char *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  byte bStack_2d0;
  undefined ***pppuStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [104];
  byte bStack_220;
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  int *piStack_1d0;
  int *piStack_1c8;
  undefined1 auStack_1b8 [8];
  ulong uStack_1b0;
  byte bStack_1a1;
  int iStack_1a0;
  byte bStack_148;
  byte bStack_147;
  undefined1 auStack_140 [24];
  int iStack_128;
  undefined1 auStack_120 [8];
  ulong uStack_118;
  byte bStack_109;
  undefined8 ***pppuStack_108;
  ulong uStack_100;
  byte bStack_f1;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  long lStack_e0;
  long lStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  
  plVar18 = *(long **)(param_2 + 0x10);
  ppuStack_598 = (undefined **)((ulong)ppuStack_598 & 0xffffffffffffff00);
  cStack_570 = *(char *)(param_1 + 0x28) == '\x01';
  if ((bool)cStack_570) {
    ppuStack_598 = &PTR_FUN_110ab4390;
    uStack_590 = *(uint *)(param_1 + 8);
    uStack_580 = *(undefined8 *)(param_1 + 0x18);
    uStack_588 = *(undefined8 *)(param_1 + 0x10);
    uStack_578 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  lVar17 = *plVar18;
  lStack_e0 = 0;
  lStack_d8 = 0;
  lVar8 = plVar18[2];
  if (((lVar8 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lStack_d8 = lVar8, lVar8 == 0)) ||
     (lStack_e0 = plVar18[1], lStack_e0 == 0)) goto LAB_108938938;
  plVar9 = (long *)plVar18[3];
  func_0x000108939b58();
  (*extraout_x8)();
  if (cStack_570 == '\x01') {
    pppuVar10 = &ppuStack_598;
    (*(code *)ppuStack_598[2])();
    uStack_2b0 = (ulong)uStack_590;
    uStack_2b8 = 0;
    uStack_2a8 = 0;
    pppuStack_2c0 = pppuVar10;
    func_0x000107c2793c(&UNK_10f4ecf9a);
    func_0x000107c3173c(&uStack_538);
    (**(code **)(*plVar9 + 0x18))(plVar9,2,uStack_590);
    func_0x000108939b58(*(undefined8 *)(lVar17 + 0x90));
    (*extraout_x8_00)();
    func_0x000108939bd4();
    func_0x000108939b7c();
    goto LAB_108938938;
  }
  (**(code **)(*plVar9 + 0x18))(plVar9,2,0);
  if (*(long *)(lVar17 + 0x38) != 0) {
    if (*(long *)(lVar17 + 0x48) == 0) {
      puVar11 = (undefined8 *)0xa8;
      __Znwm();
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar13 = puVar11 + 3;
      *puVar11 = &PTR_FUN_110a9ab98;
      puVar11[0xe] = 0;
      puVar11[0xd] = 0;
      puVar11[0x10] = 0;
      puVar11[0xf] = 0;
      puVar11[0x12] = 0;
      puVar11[0x11] = 0;
      puVar11[0x14] = 0;
      puVar11[0x13] = 0;
      func_0x00010893916c();
      uStack_538 = 0;
      uStack_530 = 0;
      uStack_2b8 = *(undefined8 *)(lVar17 + 0x50);
      pppuStack_2c0 = *(undefined ****)(lVar17 + 0x48);
      *(undefined8 **)(lVar17 + 0x48) = puVar13;
      *(undefined8 **)(lVar17 + 0x50) = puVar11;
      func_0x00010893835c(&pppuStack_2c0);
      func_0x00010893835c(&uStack_538);
      func_0x000108939b94(*(undefined8 *)(lVar17 + 0x50),*(undefined8 *)(lVar17 + 0x38));
      if (extraout_x8_01 != 0) {
        do {
          func_0x000108939a9c();
        } while (extraout_w10 != 0);
      }
      func_0x000108939b58();
      (*extraout_x8_02)();
      func_0x000108939bbc();
      FUN_1089a4ab0(*(long *)(lVar17 + 0x48) + 0x78,(long *)(lVar17 + 0x38));
    }
    if (*(long *)(lVar17 + 0x58) == 0) {
      puVar11 = (undefined8 *)0xa8;
      __Znwm();
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar13 = puVar11 + 3;
      *puVar11 = &PTR_FUN_110a9abe8;
      puVar11[0xe] = 0;
      puVar11[0xd] = 0;
      puVar11[0x10] = 0;
      puVar11[0xf] = 0;
      puVar11[0x12] = 0;
      puVar11[0x11] = 0;
      puVar11[0x14] = 0;
      puVar11[0x13] = 0;
      func_0x00010893916c();
      puVar11[3] = &PTR_DAT_110aa5078;
      puVar11[4] = &PTR_DAT_110aa50c0;
      uStack_538 = 0;
      uStack_530 = 0;
      uStack_2b8 = *(undefined8 *)(lVar17 + 0x60);
      pppuStack_2c0 = *(undefined ****)(lVar17 + 0x58);
      *(undefined8 **)(lVar17 + 0x58) = puVar13;
      *(undefined8 **)(lVar17 + 0x60) = puVar11;
      func_0x000108938380(&pppuStack_2c0);
      func_0x000108938380(&uStack_538);
      func_0x000108939b94(*(undefined8 *)(lVar17 + 0x60),*(undefined8 *)(lVar17 + 0x38));
      if (extraout_x8_03 != 0) {
        do {
          func_0x000108939a9c();
        } while (extraout_w10_00 != 0);
      }
      func_0x000108939b58();
      (*extraout_x8_04)();
      func_0x000108939bbc();
    }
  }
  (**(code **)(*(long *)plVar18[7] + 0x10))(&pppuStack_2c0);
  if (-1 < (char)bStack_109) {
    uStack_118 = (ulong)bStack_109;
  }
  if (uStack_118 == 0) {
LAB_1089388e0:
    uStack_370 = uStack_370 & 0xffffffffffffff00;
    bStack_2d0 = 0;
LAB_1089388e8:
    plVar9 = *(long **)(lVar17 + 0x90);
    func_0x000107c278b8(&uStack_538,&UNK_10f4ecfd4);
    (**(code **)(*plVar9 + 0x10))(plVar9,0x4bc,&uStack_538);
    func_0x000108939b7c();
    FUN_108937f30(lVar17,plVar18[5],1);
  }
  else {
    ppppuVar12 = (undefined8 ****)pppuStack_108;
    if (-1 < (char)bStack_f1) {
      uStack_100 = (ulong)bStack_f1;
      ppppuVar12 = &pppuStack_108;
    }
    FUN_108937f28(ppppuVar12,uStack_100,&pcStack_548);
    if ((int)ppppuVar12 == 0) goto LAB_1089388e0;
    if (-1 < (char)bStack_1a1) {
      uStack_1b0 = (ulong)bStack_1a1;
    }
    if (uStack_1b0 == 0) goto LAB_1089388e0;
    puStack_a0 = (undefined8 *)0x0;
    puStack_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    func_0x00010bd43810(&puStack_558,auStack_200,&puStack_a0);
    if ((((uStack_90 & 1) != 0) && ((uStack_90 != 1 || ((int)puStack_a0 != 0)))) ||
       ((func_0x00010bd43824(&uStack_b8,auStack_1e8,&puStack_a0), uVar5 = uStack_a8,
        (uStack_90 & 1) != 0 && ((uStack_90 != 1 || ((int)puStack_a0 != 0)))))) goto LAB_1089388e0;
    pcVar19 = (char *)0x0;
    pcStack_d0 = (char *)0x0;
    pcStack_c8 = (char *)0x0;
    pcStack_c0 = (char *)0x0;
    uVar4 = puStack_558._0_4_;
    for (piVar20 = piStack_1d0; piVar20 != piStack_1c8; piVar20 = piVar20 + 2) {
      if (*piVar20 - 1U < 0xffff) {
        uVar1 = (undefined2)*piVar20;
        if (piVar20[1] == 1) {
          if (pcVar19 < pcStack_c0) {
            pcVar19[0] = '\0';
            pcVar19[1] = '\0';
            pcVar19[2] = '\0';
            pcVar19[3] = '\0';
            *(undefined4 *)(pcVar19 + 4) = uVar4;
            pcVar19[8] = '\0';
            pcVar19[9] = '\0';
            pcVar19[10] = '\0';
            pcVar19[0xb] = '\0';
            pcVar19[0xc] = '\0';
            pcVar19[0xd] = '\0';
            pcVar19[0xe] = '\0';
            pcVar19[0xf] = '\0';
            pcVar19[0x10] = '\0';
            pcVar19[0x11] = '\0';
            pcVar19[0x12] = '\0';
            pcVar19[0x13] = '\0';
            pcVar19[0x14] = '\0';
            pcVar19[0x15] = '\0';
            pcVar19[0x16] = '\0';
            pcVar19[0x17] = '\0';
            pcVar19[0x18] = '\0';
            pcVar19[0x19] = '\0';
            pcVar19[0x1a] = '\0';
            pcVar19[0x1b] = '\0';
            goto LAB_10893885c;
          }
          func_0x000108939b04((long)pcVar19 - (long)pcStack_d0 >> 5);
          func_0x000108939b40();
          func_0x000108939b10();
          *puStack_528 = 0;
          puStack_528[1] = uVar4;
          *(undefined8 *)(puStack_528 + 2) = 0;
          *(undefined8 *)(puStack_528 + 4) = 0;
          puStack_528[6] = 0;
          puVar14 = puStack_528;
LAB_1089388c0:
          *(undefined2 *)(puVar14 + 7) = uVar1;
          *(undefined1 *)((long)puVar14 + 0x1e) = 0;
          func_0x000108939ab4();
          pcVar19 = pcStack_c8;
          func_0x000108939bcc();
          pcStack_c8 = pcVar19;
        }
        else if (piVar20[1] == 2) {
          if (pcStack_c0 <= pcVar19) {
            func_0x000108939b04((long)pcVar19 - (long)pcStack_d0 >> 5);
            func_0x000108939b40();
            func_0x000108939b10();
            func_0x000108939c08();
            extraout_x8_05[6] = uVar5;
            puVar14 = extraout_x8_05;
            goto LAB_1089388c0;
          }
          pcVar19[0] = '\x01';
          pcVar19[1] = '\0';
          pcVar19[2] = '\0';
          pcVar19[3] = '\0';
          pcVar19[4] = '\0';
          pcVar19[5] = '\0';
          pcVar19[6] = '\0';
          pcVar19[7] = '\0';
          *(undefined8 *)(pcVar19 + 0x10) = uStack_b0;
          *(undefined8 *)(pcVar19 + 8) = uStack_b8;
          *(undefined4 *)(pcVar19 + 0x18) = uVar5;
LAB_10893885c:
          *(undefined2 *)(pcVar19 + 0x1c) = uVar1;
          pcVar19[0x1e] = '\0';
          pcVar19 = pcVar19 + 0x20;
          pcStack_c8 = pcVar19;
        }
      }
    }
    if (pcStack_d0 == pcVar19) {
      uStack_370 = uStack_370 & 0xffffffffffffff00;
      bStack_2d0 = 0;
    }
    else {
      if (iStack_1a0 - 1U < 0xffff) {
        uVar1 = (undefined2)iStack_1a0;
        if (pcVar19 < pcStack_c0) {
          pcVar19[0] = '\x01';
          pcVar19[1] = '\0';
          pcVar19[2] = '\0';
          pcVar19[3] = '\0';
          pcVar19[4] = '\0';
          pcVar19[5] = '\0';
          pcVar19[6] = '\0';
          pcVar19[7] = '\0';
          *(undefined8 *)(pcVar19 + 0x10) = uStack_b0;
          *(undefined8 *)(pcVar19 + 8) = uStack_b8;
          *(undefined4 *)(pcVar19 + 0x18) = uStack_a8;
          *(undefined2 *)(pcVar19 + 0x1c) = uVar1;
          pcVar19[0x1e] = '\x01';
          pcVar19 = pcVar19 + 0x20;
        }
        else {
          func_0x000108939b04((long)pcVar19 - (long)pcStack_d0 >> 5);
          func_0x000108939b40();
          func_0x000108939b10();
          func_0x000108939c08();
          *(undefined4 *)(extraout_x8_06 + 0x18) = uStack_a8;
          *(undefined2 *)(extraout_x8_06 + 0x1c) = uVar1;
          *(undefined1 *)(extraout_x8_06 + 0x1e) = 1;
          func_0x000108939ab4();
          pcVar19 = pcStack_c8;
          func_0x000108939bcc();
        }
        uVar5 = puStack_558._0_4_;
        if (pcVar19 < pcStack_c0) {
          pcVar19[0] = '\0';
          pcVar19[1] = '\0';
          pcVar19[2] = '\0';
          pcVar19[3] = '\0';
          *(undefined4 *)(pcVar19 + 4) = puStack_558._0_4_;
          pcVar19[8] = '\0';
          pcVar19[9] = '\0';
          pcVar19[10] = '\0';
          pcVar19[0xb] = '\0';
          pcVar19[0xc] = '\0';
          pcVar19[0xd] = '\0';
          pcVar19[0xe] = '\0';
          pcVar19[0xf] = '\0';
          pcVar19[0x10] = '\0';
          pcVar19[0x11] = '\0';
          pcVar19[0x12] = '\0';
          pcVar19[0x13] = '\0';
          pcVar19[0x14] = '\0';
          pcVar19[0x15] = '\0';
          pcVar19[0x16] = '\0';
          pcVar19[0x17] = '\0';
          pcVar19[0x18] = '\0';
          pcVar19[0x19] = '\0';
          pcVar19[0x1a] = '\0';
          pcVar19[0x1b] = '\0';
          *(undefined2 *)(pcVar19 + 0x1c) = uVar1;
          pcVar19[0x1e] = '\x01';
          pcStack_c8 = pcVar19 + 0x20;
        }
        else {
          pcStack_c8 = pcVar19;
          func_0x000108939b04((long)pcVar19 - (long)pcStack_d0 >> 5);
          func_0x000108939b40();
          func_0x000108939b10();
          *puStack_528 = 0;
          puStack_528[1] = uVar5;
          *(undefined8 *)(puStack_528 + 2) = 0;
          *(undefined8 *)(puStack_528 + 4) = 0;
          puStack_528[6] = 0;
          *(undefined2 *)(puStack_528 + 7) = uVar1;
          *(undefined1 *)((long)puStack_528 + 0x1e) = 1;
          func_0x000108939ab4();
          pcVar19 = pcStack_c8;
          func_0x000108939bcc();
          pcStack_c8 = pcVar19;
        }
      }
      iVar7 = 0xf4ecf7c;
      func_0x000107c30180(&UNK_10f4ecf7c,0x1d,0);
      pcVar19 = pcStack_c8;
      pcVar16 = pcStack_d0;
      if (iVar7 != 0) {
        for (; pcVar19 = pcStack_c8, pcVar16 != pcStack_c8; pcVar16 = pcVar16 + 0x20) {
          pcVar19 = pcVar16;
          if (pcVar16[0x1e] != '\x01') {
            do {
              pcVar16 = pcVar16 + 0x3e;
              do {
                pcVar15 = pcVar16;
                if (pcVar15 + -0x1e == pcStack_c8) {
                  if (pcVar19 != pcStack_c8) {
                    pcStack_c8 = pcVar19;
                  }
                  goto LAB_108938b34;
                }
                pcVar16 = pcVar15 + 0x20;
              } while (*pcVar15 != '\x01');
              pcVar16 = pcVar15 + -0x1e;
              *(undefined8 *)pcVar19 = *(undefined8 *)pcVar16;
              uVar21 = *(undefined8 *)(pcVar15 + -0x16);
              *(undefined8 *)(pcVar19 + 0x10) = *(undefined8 *)(pcVar15 + -0xe);
              *(undefined8 *)(pcVar19 + 8) = uVar21;
              *(undefined4 *)(pcVar19 + 0x18) = *(undefined4 *)(pcVar15 + -6);
              uVar1 = *(undefined2 *)(pcVar15 + -2);
              pcVar19[0x1e] = *pcVar15;
              *(undefined2 *)(pcVar19 + 0x1c) = uVar1;
              pcVar19 = pcVar19 + 0x20;
            } while( true );
          }
        }
      }
LAB_108938b34:
      if (pcStack_d0 == pcVar19) {
        uStack_370 = uStack_370 & 0xffffffffffffff00;
        bStack_2d0 = 0;
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&uStack_538,auStack_1b8);
        lStack_518 = (long)iStack_128;
        pcStack_520 = pcStack_548;
        func_0x000107c278b8(&uStack_510,"");
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&uStack_4f8,auStack_120);
        pcStack_4d8 = pcStack_c8;
        pcStack_4e0 = pcStack_d0;
        pcStack_4d0 = pcStack_c0;
        pcStack_c8 = (char *)0x0;
        pcStack_c0 = (char *)0x0;
        pcStack_d0 = (char *)0x0;
        uStack_4c0 = 0xa8c;
        uStack_4c8 = 1000;
        uStack_4b8 = 0x46;
        func_0x000107c27994(&uStack_4b0,auStack_140);
        puStack_360 = puStack_528;
        uStack_338 = uStack_500;
        uStack_368 = uStack_530;
        uStack_370 = uStack_538;
        uStack_530 = 0;
        puStack_528 = (undefined4 *)0x0;
        uStack_538 = 0;
        lStack_350 = lStack_518;
        pcStack_358 = pcStack_520;
        uStack_340 = uStack_508;
        uStack_348 = uStack_510;
        uStack_510 = 0;
        uStack_508 = 0;
        uStack_500 = 0;
        uStack_328 = uStack_4f0;
        uStack_330 = uStack_4f8;
        uStack_4f8 = 0;
        uStack_4f0 = 0;
        pcStack_310 = pcStack_4d8;
        pcStack_318 = pcStack_4e0;
        uStack_320 = uStack_4e8;
        pcStack_308 = pcStack_4d0;
        uStack_4e8 = 0;
        pcStack_4e0 = (char *)0x0;
        pcStack_4d8 = (char *)0x0;
        pcStack_4d0 = (char *)0x0;
        uStack_2f8 = uStack_4c0;
        uStack_300 = uStack_4c8;
        uStack_2e0 = uStack_4a8;
        uStack_2e8 = uStack_4b0;
        uStack_2f0 = uStack_4b8;
        uStack_2d8 = uStack_4a0;
        uStack_4b0 = 0;
        uStack_4a8 = 0;
        uStack_4a0 = 0;
        bStack_2d0 = 1;
        func_0x0001089381ec(&uStack_538);
      }
    }
    func_0x000108938184(&pcStack_d0);
    if ((bStack_2d0 & 1) == 0) goto LAB_1089388e8;
    bRam00000001138286f0 = bStack_147 & bStack_148;
    uStack_538 = 0x201;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&uStack_530,&uStack_2b8);
    lStack_518 = CONCAT44(lStack_518._4_4_,uStack_f0);
    FUN_10893b5e4(&uStack_510,auStack_288);
    FUN_1089402fc(&uStack_4b0,auStack_218);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_490,lVar17 + 0x78);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_478,auStack_2a0);
    uStack_460 = pppuStack_2c0._0_2_;
    uStack_45c = uStack_ec;
    uStack_448 = *(undefined8 *)(lVar17 + 0x50);
    uStack_450 = *(undefined8 *)(lVar17 + 0x48);
    if (*(long *)(lVar17 + 0x50) != 0) {
      do {
        func_0x000108939a9c();
      } while (extraout_w10_01 != 0);
    }
    uStack_438 = *(undefined8 *)(lVar17 + 0x60);
    uStack_440 = *(undefined8 *)(lVar17 + 0x58);
    if (*(long *)(lVar17 + 0x60) != 0) {
      do {
        func_0x000108939a9c();
      } while (extraout_w10_02 != 0);
    }
    uStack_430 = *(undefined8 *)(lVar17 + 0x68);
    lStack_428 = *(long *)(lVar17 + 0x70);
    if (lStack_428 != 0) {
      do {
        func_0x000108939a9c();
      } while (extraout_w10_03 != 0);
    }
    lStack_420 = plVar18[3];
    lStack_418 = plVar18[4];
    if (lStack_418 != 0) {
      do {
        func_0x000108939a9c();
      } while (extraout_w10_04 != 0);
    }
    if ((bStack_2d0 & 1) == 0) {
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x108938f14);
      (*pcVar6)();
    }
    FUN_108939218(auStack_410,&uStack_370);
    pcVar16 = (char *)0x50;
    __Znwm();
    plVar9 = (long *)(pcVar16 + 8);
    *plVar9 = 0;
    pcVar16[0x10] = '\0';
    pcVar16[0x11] = '\0';
    pcVar16[0x12] = '\0';
    pcVar16[0x13] = '\0';
    pcVar16[0x14] = '\0';
    pcVar16[0x15] = '\0';
    pcVar16[0x16] = '\0';
    pcVar16[0x17] = '\0';
    *(undefined ***)pcVar16 = &PTR_FUN_110a9ac50;
    pcVar19 = pcVar16 + 0x18;
    FUN_10893dabc(pcVar19,plVar18 + 9,lVar17 + 0x90);
    puVar11 = *(undefined8 **)(lVar17 + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pcStack_548 = pcVar19;
    pcStack_540 = pcVar16;
    pcStack_d0 = pcVar19;
    pcStack_c8 = pcVar16;
    (**(code **)*puVar11)(&uStack_b8,puVar11,&uStack_538,&pcStack_548);
    func_0x000104c0534c(&pcStack_548);
    lVar8 = plVar18[4];
    plVar9 = (long *)plVar18[5];
    puVar23 = (undefined8 *)plVar18[4];
    puVar22 = (undefined8 *)plVar18[3];
    puVar13 = (undefined8 *)0x70;
    __Znwm();
    plVar18 = puVar13 + 1;
    *plVar18 = 0;
    puVar13[2] = 0;
    *puVar13 = &PTR_FUN_110a9aca0;
    puVar11 = puVar13 + 3;
    puStack_a0 = puVar22;
    puStack_98 = puVar23;
    if (lVar8 != 0) {
      do {
        func_0x000108939a9c();
      } while (extraout_w10_05 != 0);
    }
    FUN_10893d1fc(puVar11,(undefined8 *)(lVar17 + 0x18),&uStack_b8,bStack_220 & 1,&puStack_a0);
    func_0x000104c05304(&puStack_a0);
    if ((puVar13[6] == 0) || (*(long *)(puVar13[6] + 8) == -1)) {
      puStack_a0 = puVar13 + 4;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar3) {
          *plVar18 = *plVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puStack_568 = puVar11;
      puStack_560 = puVar13;
      puStack_98 = puVar13;
      func_0x000107c278e4(puVar13 + 5,&puStack_a0);
      func_0x000107c278ec(&puStack_a0);
    }
    puStack_568 = (undefined8 *)0x0;
    puStack_560 = (undefined8 *)0x0;
    puStack_558 = puVar11;
    puStack_550 = puVar13;
    (**(code **)(*plVar9 + 0x10))(plVar9,&puStack_558);
    FUN_108939580(&puStack_558);
    func_0x0001089395a4(&puStack_568);
    func_0x000104c053c4(&uStack_b8);
    func_0x0001089395c8(&pcStack_d0);
    func_0x0001089395ec(&uStack_538);
  }
  FUN_108939654(&uStack_370);
  FUN_108939674(&pppuStack_2c0);
LAB_108938938:
  func_0x00010893843c(&lStack_e0);
  func_0x000104c05024(&ppuStack_598);
  return;
}



/* Entry: 10893914c; end: 10893914f;  */

void FUN_10893914c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9ab98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108939150; end: 108939163;  */

void FUN_108939150(void)

{
  func_0x0001089391bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108939164; end: 1089391c7;  */

void FUN_108939164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108939b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1089391c8; end: 1089391eb;  */

void FUN_1089391c8(long param_1)

{
  func_0x000108939b1c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 1089391ec; end: 1089391ef;  */

void FUN_1089391ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9abe8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1089391f0; end: 108939203;  */

void FUN_1089391f0(void)

{
  func_0x00010893920c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108939204; end: 108939217;  */

void FUN_108939204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108939b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108939218; end: 10893929f;  */

long FUN_108939218(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  FUN_1089392a0(lVar1 + 0x18,param_2 + 0x18);
  FUN_1089392e8(param_1 + 0x58,param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  func_0x000107c27994(param_1 + 0x88,param_2 + 0x88);
  return param_1;
}



/* Entry: 1089392a0; end: 1089392e7;  */

undefined8 * FUN_1089392a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 5,param_2 + 5);
  return param_1;
}



/* Entry: 1089392e8; end: 10893931f;  */

undefined8 * FUN_1089392e8(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_108939320(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 5);
  return param_1;
}



/* Entry: 108939320; end: 10893939f;  */

void FUN_108939320(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x000104c0476c(param_1,param_4);
    func_0x000104c04738(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  FUN_1089393a0(&uStack_40);
  return;
}



/* Entry: 1089393a0; end: 1089393cb;  */

long FUN_1089393a0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1089381a8(param_1);
  }
  return param_1;
}



/* Entry: 1089393cc; end: 1089393ff;  */

long FUN_1089393cc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_108939400(param_1);
    func_0x000108939be8();
  }
  return param_1;
}



/* Entry: 108939400; end: 10893946b;  */

void FUN_108939400(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1] + 8;
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x20;
  }
  return;
}



/* Entry: 10893946c; end: 1089394bf;  */

void FUN_10893946c(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110a9ac28)[*(uint *)(param_1 + 0x20)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}



/* Entry: 1089394c0; end: 1089394cf;  */

void FUN_1089394c0(void)

{
  return;
}



/* Entry: 1089394d0; end: 1089394f7;  */

long FUN_1089394d0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000108939be8();
  }
  return param_1;
}



/* Entry: 1089394f8; end: 1089394fb;  */

void FUN_1089394f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9ac50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1089394fc; end: 10893950f;  */

void FUN_1089394fc(void)

{
  func_0x00010893951c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108939510; end: 108939527;  */

long FUN_108939510(long param_1)

{
  func_0x000108938244(param_1 + 0x40);
  func_0x0001089383c8(param_1 + 0x30);
  return param_1 + 0x18;
}



/* Entry: 108939528; end: 108939553;  */

long FUN_108939528(long param_1)

{
  func_0x000108938244(param_1 + 0x28);
  func_0x0001089383c8(param_1 + 0x18);
  return param_1;
}



/* Entry: 108939554; end: 108939557;  */

void FUN_108939554(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9aca0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108939558; end: 10893956b;  */

void FUN_108939558(void)

{
  func_0x000108939574();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10893956c; end: 10893957f;  */

void FUN_10893956c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108939b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108939580; end: 108939653;  */

void FUN_108939580(long param_1)

{
  func_0x000108939b1c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108939654; end: 108939673;  */

void FUN_108939654(long param_1)

{
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    func_0x0001089381ec();
  }
  return;
}



/* Entry: 108939674; end: 108939727;  */

long FUN_108939674(long param_1)

{
  func_0x0001089396bc(param_1 + 0x198);
  func_0x0001089396e4(param_1 + 0xc0);
  FUN_1089397b0(param_1 + 0xa8);
  FUN_108939864(param_1 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  func_0x000108939bb4();
  return param_1;
}



/* Entry: 108939728; end: 108939747;  */

void FUN_108939728(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_108939748();
  }
  return;
}



/* Entry: 108939748; end: 108939797;  */

void FUN_108939748(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 108939798; end: 1089397af;  */

void FUN_108939798(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1089397b0; end: 10893980f;  */

void FUN_1089397b0(void)

{
  func_0x000108939b84();
  func_0x0001089397d4();
  return;
}



/* Entry: 108939810; end: 108939817;  */

void FUN_108939810(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x20) {
    func_0x000107c27914(lVar2 + -0x18);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 108939818; end: 108939863;  */

void FUN_108939818(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x20) {
    func_0x000107c27914(lVar1 + -0x18);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 108939864; end: 10893988f;  */

long FUN_108939864(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
  FUN_108939890(param_1 + 0x10);
  return param_1;
}



/* Entry: 108939890; end: 1089398af;  */

void FUN_108939890(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1089398b0();
  }
  return;
}



/* Entry: 1089398b0; end: 108939933;  */

long FUN_1089398b0(long param_1)

{
  func_0x0001089398d8(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_108939934(param_1,0);
  return param_1;
}



/* Entry: 108939934; end: 10893996f;  */

void FUN_108939934(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108939970; end: 10893998f;  */

void FUN_108939970(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108937ee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108939990; end: 1089399a7;  */

void FUN_108939990(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1089399a8; end: 108939a9b;  */

void FUN_1089399a8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 8);
  *param_1 = &PTR_FUN_110a9ace0;
  puVar1 = param_1;
  func_0x000108939bf4();
  uVar4 = *puVar3;
  puVar1[1] = puVar3[1];
  *puVar1 = uVar4;
  lVar2 = puVar3[2];
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000108939a9c();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar3[4];
  uVar4 = puVar3[3];
  puVar1[4] = puVar3[4];
  puVar1[3] = uVar4;
  if (lVar2 != 0) {
    do {
      func_0x000108939a9c();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = puVar3[6];
  uVar4 = puVar3[5];
  puVar1[6] = puVar3[6];
  puVar1[5] = uVar4;
  if (lVar2 != 0) {
    do {
      func_0x000108939a9c();
    } while (extraout_w10_01 != 0);
  }
  lVar2 = puVar3[8];
  uVar4 = puVar3[7];
  puVar1[8] = puVar3[8];
  puVar1[7] = uVar4;
  if (lVar2 != 0) {
    do {
      func_0x000108939a9c();
    } while (extraout_w10_02 != 0);
  }
  lVar2 = puVar3[10];
  uVar4 = puVar3[9];
  puVar1[10] = puVar3[10];
  puVar1[9] = uVar4;
  if (lVar2 != 0) {
    do {
      func_0x000108939a9c();
    } while (extraout_w10_03 != 0);
  }
  param_1[1] = puVar1;
  return;
}



/* Entry: 108939a9c; end: 108939c1b;  */

void FUN_108939a9c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108939c1c; end: 108939cab;  */

void FUN_108939c1c(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  long alStack_30 [2];
  
  (**(code **)(*plRam0000000113828058 + 0x10))(alStack_30);
  FUN_108939cac(&uStack_40,alStack_30[0],alStack_30[0] + 0x10,alStack_30[0] + 0x20,
                alStack_30[0] + 0x30,alStack_30[0] + 0x40,alStack_30[0] + 0x58,alStack_30[0] + 0x68)
  ;
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010893843c(&uStack_40);
  FUN_108939ce8(alStack_30);
  return;
}



/* Entry: 108939cac; end: 108939ce7;  */

void FUN_108939cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uStack_11;
  
  FUN_108939d10(&uStack_11,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 108939ce8; end: 108939d0f;  */

long FUN_108939ce8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108939d10; end: 108939dfb;  */

void FUN_108939d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined1 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  long lStack_58;
  
  puVar5 = auStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_108939e18(auStack_70,1);
  FUN_108939e6c(lStack_60,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  lVar6 = lStack_60;
  lStack_60 = 0;
  FUN_108939dfc(param_1,lVar6 + 0x18);
  FUN_108939f6c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_108939f6c(auStack_70);
  __Unwind_Resume();
  *extraout_x8 = puVar5;
  extraout_x8[1] = lVar6;
  puVar2 = (undefined8 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = (undefined8 *)(puVar5 + 8);
  }
  if ((puVar2 != (undefined8 *)0x0) && ((puVar2[1] == 0 || (*(long *)(puVar2[1] + 8) == -1)))) {
    pcStack_78 = FUN_108939dfc;
    lStack_98 = extraout_x8[1];
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
      plVar1 = (long *)(lStack_98 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_88 = puVar2[1];
    uStack_90 = *puVar2;
    *puVar2 = puVar5;
    puVar2[1] = lStack_98;
    puStack_a0 = puVar5;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x00010893804c(&uStack_90);
    func_0x00010893843c(&puStack_a0);
    return;
  }
  return;
}



/* Entry: 108939dfc; end: 108939e17;  */

void FUN_108939dfc(long *param_1,long param_2,long param_3)

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
    func_0x00010893804c(&lStack_20);
    func_0x00010893843c(&lStack_30);
    return;
  }
  return;
}



/* Entry: 108939e18; end: 108939e3f;  */

long FUN_108939e18(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_108939e40();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 108939e40; end: 108939e6b;  */

undefined8 * FUN_108939e40(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x155555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a9ad10;
  FUN_1089379a8(param_1 + 3);
  return param_1;
}



/* Entry: 108939e6c; end: 108939eaf;  */

undefined8 * FUN_108939e6c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a9ad10;
  FUN_1089379a8(param_1 + 3);
  return param_1;
}



/* Entry: 108939eb0; end: 108939eb3;  */

void FUN_108939eb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9ad10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108939eb4; end: 108939ec7;  */

void FUN_108939eb4(void)

{
  func_0x000108939ed8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108939ec8; end: 108939ee7;  */

void FUN_108939ec8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108939ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108939ee8; end: 108939f6b;  */

void FUN_108939ee8(long param_1,undefined8 *param_2,undefined8 param_3)

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
    func_0x00010893804c(&uStack_20);
    func_0x00010893843c(&uStack_30);
    return;
  }
  return;
}



/* Entry: 108939f6c; end: 108939f83;  */

void FUN_108939f6c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108939f84; end: 10893a1e3;  */

long * FUN_108939f84(undefined8 param_1,undefined8 param_2,long *param_3,undefined **param_4,
                    long param_5)

{
  undefined **ppuVar1;
  undefined1 in_ZR;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar6;
  undefined8 *unaff_x22;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined8 in_register_00005028;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined8 *puStack_1a0;
  ulong uStack_198;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 *puStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_48;
  
  func_0x00010893b574();
  func_0x00010893b43c();
  lVar2 = *param_3;
  uVar6 = unaff_x20[1];
  uStack_48 = extraout_x8;
  if (lVar2 != 0) {
    param_4 = &PTR_DAT_110a9ad50;
    func_0x00010893b4bc();
    if (lVar2 != 0) {
      lStack_118 = lVar2;
      uStack_110 = uVar6;
      if (uVar6 != 0) {
        do {
          func_0x00010893b458();
        } while (extraout_w10 != 0);
      }
      uVar6 = *(ulong *)(lVar2 + 8);
      if ((uVar6 != 0) && (*(long *)(uVar6 + 0x10) != 0)) {
        do {
          func_0x00010893b458();
        } while (extraout_w10_00 != 0);
      }
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      puStack_68 = &uStack_130;
      puStack_88 = &uStack_140;
      puStack_a8 = &uStack_150;
      puStack_c8 = &uStack_160;
      puStack_f0 = &UNK_10f4bcb53;
      uStack_d8 = (ulong)&uStack_170 | 8;
      puStack_e0 = &DAT_10f6846a0;
      puStack_d0 = &UNK_10f4ecff0;
      puStack_b8 = &uStack_158;
      puStack_c0 = &UNK_10f4ed00a;
      puStack_b0 = &UNK_10f4ed02a;
      puStack_98 = &uStack_148;
      puStack_a0 = &UNK_10f4ed044;
      puStack_90 = &UNK_10f4ed067;
      puStack_78 = &uStack_138;
      puStack_80 = &UNK_10f4ed080;
      puStack_70 = &UNK_10f4ed091;
      puStack_58 = &uStack_128;
      puStack_60 = &UNK_10f4ed0b0;
      param_4 = &puStack_f0;
      param_5 = 10;
      uVar3 = uVar6;
      uStack_120 = uVar6;
      puStack_e8 = (undefined1 *)&uStack_170;
      FUN_10893a1e4();
      if ((uVar3 & 1) == 0) {
        func_0x00010893b5cc();
        unaff_x19[1] = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(
                                                  uVar18,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))
                                               ));
        *unaff_x19 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10
                                                  ,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
        if (extraout_x8_01 != 0) {
          do {
            func_0x00010893b458();
          } while (extraout_w10_03 != 0);
        }
      }
      else {
        unaff_x22 = (undefined8 *)0x88;
        __Znwm();
        unaff_x22[1] = 0;
        unaff_x22[2] = 0;
        *unaff_x22 = &PTR_FUN_110a9ad70;
        func_0x00010893b5cc();
        if (extraout_x8_00 != 0) {
          do {
            func_0x00010893b458();
          } while (extraout_w10_01 != 0);
        }
        uStack_120 = 0;
        func_0x00010893b4ec(&PTR_FUN_110a9adc0);
        uStack_f8 = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
        uStack_100 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10
                                                  ,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
        puStack_e8 = (undefined1 *)
                     CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18
                                                  ,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
        puStack_f0 = (undefined *)
                     CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10
                                                  ,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
        unaff_x22[6] = uVar6;
        uStack_108 = 0;
        uStack_168 = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18
                                                  ,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
        uStack_170 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10
                                                  ,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
        uStack_158 = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18
                                                  ,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
        uStack_160 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10
                                                  ,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
        uStack_d8 = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
        puStack_e0 = (undefined *)
                     CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10
                                                  ,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
        puStack_c8 = (undefined8 *)
                     CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18
                                                  ,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
        puStack_d0 = (undefined *)
                     CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10
                                                  ,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
        uStack_148 = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18
                                                  ,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
        uStack_150 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10
                                                  ,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
        uStack_138 = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18
                                                  ,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
        uStack_140 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10
                                                  ,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
        unaff_x22[0xe] = in_register_00005028;
        unaff_x22[0xd] = param_2;
        puStack_b8 = (undefined8 *)
                     CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18
                                                  ,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
        puStack_c0 = (undefined *)
                     CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10
                                                  ,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
        puStack_a8 = (undefined8 *)
                     CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18
                                                  ,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
        puStack_b0 = (undefined *)
                     CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10
                                                  ,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
        unaff_x22[0x10] = uStack_128;
        unaff_x22[0xf] = uStack_130;
        uStack_130 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10
                                                  ,CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
        uStack_128 = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18
                                                  ,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
        FUN_10893a28c(&puStack_f0);
        func_0x000104be7e54(&uStack_108);
        func_0x0001089383c8(&uStack_100);
        *unaff_x19 = unaff_x20;
        unaff_x19[1] = unaff_x22;
      }
      FUN_10893a28c(&uStack_170);
      func_0x000104be7e54(&uStack_120);
      goto LAB_10893a190;
    }
  }
  lStack_118 = 0;
  uStack_110 = 0;
  *unaff_x19 = *unaff_x20;
  unaff_x19[1] = uVar6;
  if (uVar6 != 0) {
    do {
      func_0x00010893b458();
    } while (extraout_w10_02 != 0);
  }
LAB_10893a190:
  plVar4 = &lStack_118;
  func_0x000104bec70c();
  func_0x00010893b3f4(uStack_48);
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  FUN_10893a28c(&uStack_170);
  func_0x000104be7e54(&uStack_120);
  plVar4 = &lStack_118;
  func_0x000104bec70c();
  func_0x00010893b4a0();
  lVar2 = param_5 << 4;
  puStack_1a0 = unaff_x22;
  uStack_198 = uVar6;
  do {
    lVar5 = lVar2;
    if (lVar5 == 0) break;
    lVar2 = plVar4[4];
    func_0x000107c31088(auStack_1b0,*param_4);
    func_0x00010b9acb68(lVar2,auStack_1b0);
    func_0x00010b9a9710(auStack_1a8);
    func_0x000104be7934(param_4[1],auStack_1a8);
    func_0x000104bda388(auStack_1a8);
    func_0x000107c278f4(auStack_1b0);
    ppuVar1 = param_4 + 1;
    param_4 = param_4 + 2;
    lVar2 = lVar5 + -0x10;
  } while (*(long *)*ppuVar1 != 0);
  return (long *)(ulong)(lVar5 == 0);
}



/* Entry: 10893a1e4; end: 10893a28b;  */

bool FUN_10893a1e4(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar2 = param_3 << 4;
  do {
    lVar3 = lVar2;
    if (lVar3 == 0) break;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c31088(auStack_40,*param_2);
    func_0x00010b9acb68(uVar4,auStack_40);
    func_0x00010b9a9710(auStack_38);
    func_0x000104be7934(param_2[1],auStack_38);
    func_0x000104bda388(auStack_38);
    func_0x000107c278f4(auStack_40);
    puVar1 = param_2 + 1;
    param_2 = param_2 + 2;
    lVar2 = lVar3 + -0x10;
  } while (*(long *)*puVar1 != 0);
  return lVar3 == 0;
}



/* Entry: 10893a28c; end: 10893a2f3;  */

/* WARNING: Possible PIC construction at 0x00010893a2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010893a2b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010893a2c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010893a2d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010893a2e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010893a2d4) */
/* WARNING: Removing unreachable block (ram,0x00010893a2c4) */
/* WARNING: Removing unreachable block (ram,0x00010893a2b4) */
/* WARNING: Removing unreachable block (ram,0x00010893a2a4) */
/* WARNING: Removing unreachable block (ram,0x00010893a2e4) */

long FUN_10893a28c(long param_1)

{
  func_0x0001003adc0c(param_1 + 0x48);
  func_0x000104bda3ac();
  return param_1;
}



/* Entry: 10893a2f4; end: 10893a523;  */

/* WARNING: Possible PIC construction at 0x00010893a538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010893a548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010893a558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010893a568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010893a55c) */
/* WARNING: Removing unreachable block (ram,0x00010893a54c) */
/* WARNING: Removing unreachable block (ram,0x00010893a53c) */
/* WARNING: Removing unreachable block (ram,0x00010893a56c) */

long * FUN_10893a2f4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined8 in_register_00005028;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_48;
  
  func_0x00010893b574();
  func_0x00010893b43c();
  lVar1 = *param_3;
  lVar5 = unaff_x20[1];
  uStack_48 = extraout_x8;
  if ((lVar1 == 0) || (func_0x00010893b4bc(lVar1,&PTR_DAT_110a9af00), lVar1 == 0)) {
    lStack_f8 = 0;
    lStack_f0 = 0;
    *unaff_x19 = *unaff_x20;
    unaff_x19[1] = lVar5;
    if (lVar5 != 0) {
      do {
        func_0x00010893b458();
      } while (extraout_w10_02 != 0);
    }
  }
  else {
    lStack_f8 = lVar1;
    lStack_f0 = lVar5;
    if (lVar5 != 0) {
      do {
        func_0x00010893b458();
      } while (extraout_w10 != 0);
    }
    uVar6 = *(ulong *)(lVar1 + 8);
    if ((uVar6 != 0) && (*(long *)(uVar6 + 0x10) != 0)) {
      do {
        func_0x00010893b458();
      } while (extraout_w10_00 != 0);
    }
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    puStack_68 = &uStack_110;
    puStack_88 = &uStack_120;
    puStack_a8 = &uStack_130;
    puStack_d0 = &UNK_10f4ed0c2;
    uStack_b8 = (ulong)&uStack_140 | 8;
    puStack_c0 = &UNK_10f4ed0d7;
    puStack_b0 = &UNK_10f4ed0ea;
    puStack_98 = &uStack_128;
    puStack_a0 = &UNK_10f4ed0f8;
    puStack_90 = &UNK_10f4ed109;
    puStack_78 = &uStack_118;
    puStack_80 = &UNK_10f4ed11a;
    puStack_70 = &UNK_10f4ed136;
    puStack_58 = &uStack_108;
    puStack_60 = &UNK_10f4ed145;
    uVar2 = uVar6;
    uStack_100 = uVar6;
    puStack_c8 = (undefined1 *)&uStack_140;
    FUN_10893a1e4(uVar6,&puStack_d0,8);
    if ((uVar2 & 1) == 0) {
      func_0x00010893b5cc();
      unaff_x19[1] = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18
                                                  ,CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
      *unaff_x19 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10,
                                                  CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
      if (extraout_x8_01 != 0) {
        do {
          func_0x00010893b458();
        } while (extraout_w10_03 != 0);
      }
    }
    else {
      puVar3 = (undefined8 *)0x78;
      __Znwm();
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_110a9ae48;
      func_0x00010893b5cc();
      if (extraout_x8_00 != 0) {
        do {
          func_0x00010893b458();
        } while (extraout_w10_01 != 0);
      }
      uStack_100 = 0;
      func_0x00010893b4ec(&PTR_FUN_110a9ae98);
      uStack_d8 = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
      uStack_e0 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10,
                                                  CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
      puStack_c8 = (undefined1 *)
                   CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
      puStack_d0 = (undefined *)
                   CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10,
                                                  CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
      puVar3[6] = uVar6;
      uStack_e8 = 0;
      uStack_138 = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
      uStack_140 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10,
                                                  CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
      uStack_128 = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
      uStack_130 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10,
                                                  CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
      uStack_b8 = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
      puStack_c0 = (undefined *)
                   CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10,
                                                  CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
      puStack_a8 = (undefined8 *)
                   CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
      puStack_b0 = (undefined *)
                   CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10,
                                                  CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
      uStack_118 = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
      uStack_120 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10,
                                                  CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
      uStack_108 = CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
      uStack_110 = CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10,
                                                  CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
      puVar3[0xe] = in_register_00005028;
      puVar3[0xd] = param_2;
      puStack_98 = (undefined8 *)
                   CONCAT17(uVar22,CONCAT16(uVar21,CONCAT15(uVar20,CONCAT14(uVar19,CONCAT13(uVar18,
                                                  CONCAT12(uVar17,CONCAT11(uVar16,uVar15)))))));
      puStack_a0 = (undefined *)
                   CONCAT17(uVar14,CONCAT16(uVar13,CONCAT15(uVar12,CONCAT14(uVar11,CONCAT13(uVar10,
                                                  CONCAT12(uVar9,CONCAT11(uVar8,uVar7)))))));
      FUN_10893a524(&puStack_d0);
      func_0x000104be7e54(&uStack_e8);
      func_0x000108938220(&uStack_e0);
      *unaff_x19 = unaff_x20;
      unaff_x19[1] = puVar3;
    }
    FUN_10893a524(&uStack_140);
    func_0x000104be7e54(&uStack_100);
  }
  plVar4 = &lStack_f8;
  func_0x000104bec70c();
  func_0x00010893b3f4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10893a524(&uStack_140);
    func_0x000104be7e54(&uStack_100);
    plVar4 = &lStack_f8;
    func_0x000104bec70c();
    func_0x00010893b4a0();
    func_0x0001003adc0c(plVar4 + 7);
    func_0x000104bda3ac();
    return plVar4;
  }
  return plVar4;
}



/* Entry: 10893a524; end: 10893a57b;  */

/* WARNING: Possible PIC construction at 0x00010893a538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010893a548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010893a558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010893a568: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010893a55c) */
/* WARNING: Removing unreachable block (ram,0x00010893a54c) */
/* WARNING: Removing unreachable block (ram,0x00010893a53c) */
/* WARNING: Removing unreachable block (ram,0x00010893a56c) */

long FUN_10893a524(long param_1)

{
  func_0x0001003adc0c(param_1 + 0x38);
  func_0x000104bda3ac();
  return param_1;
}



/* Entry: 10893a57c; end: 10893a58b;  */

void FUN_10893a57c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9ad70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


