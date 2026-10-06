/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100450040; end: 1004501af;  */

void FUN_100450040(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_39;
  
  do {
    bVar4 = bRam0000000113847228;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x113847228,0x10);
    if (bVar3) {
      bRam0000000113847228 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while ((cVar2 != '\0') || ((bVar4 & 1) != 0));
  *param_1 = 0;
  param_1[1] = 0;
  if (plRam0000000113847220 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = plRam0000000113847220;
    func_0x000107c60d6c();
    param_1[1] = (long)plVar8;
    lVar7 = (long)puRam0000000113847218;
    if ((plVar8 != (long *)0x0) && (*param_1 = (long)puRam0000000113847218, lVar7 != 0)) {
      bRam0000000113847228 = 0;
      return;
    }
  }
  uStack_39 = 0x14;
  uStack_40 = 0x78696e65;
  uStack_48 = 0x6f68702d64657261;
  uStack_50 = 0x68732d72656d6974;
  uStack_3c = 0;
  puVar5 = (undefined8 *)0x88;
  func_0x000107c60e20();
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar6 = puVar5 + 3;
  *puVar5 = &PTR_DAT_110d9ab28;
  FUN_1004501b0(puVar6,&uStack_50);
  *param_1 = (long)puVar6;
  param_1[1] = (long)puVar5;
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
      func_0x000107c60d68(plVar8);
    }
    puVar6 = (undefined8 *)*param_1;
    puVar5 = (undefined8 *)param_1[1];
    if (puVar5 == (undefined8 *)0x0) goto LAB_100450160;
  }
  plVar8 = puVar5 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_100450160:
  plVar8 = plRam0000000113847220;
  if (plRam0000000113847220 == (long *)0x0) {
    plRam0000000113847220 = puVar5;
    puRam0000000113847218 = puVar6;
    bRam0000000113847228 = 0;
    return;
  }
  puRam0000000113847218 = puVar6;
  plRam0000000113847220 = puVar5;
  func_0x000107c60d68(plVar8);
  bRam0000000113847228 = 0;
  return;
}



/* Entry: 1004501b0; end: 100450357;  */

undefined8 * FUN_1004501b0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar10 = param_1 + 1;
  *param_1 = &PTR_FUN_110d9aad0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(puVar10,*param_2,param_2[1]);
  }
  else {
    uVar12 = param_2[1];
    uVar5 = *param_2;
    param_1[3] = param_2[2];
    param_1[2] = uVar12;
    *puVar10 = uVar5;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  uVar4 = (ulong)*(uint *)PTR__mach_task_self__11034c5c8;
  func_0x000107c612ec(uVar4,param_1 + 10,0,0);
  func_0x000107c60d9c();
  plVar11 = param_1 + 0xc;
  *plVar11 = 0;
  param_1[0xb] = uVar4 + 123000000000;
  *(undefined1 *)(param_1 + 0xd) = 0;
  uVar5 = 8;
  func_0x000107c60e20();
  func_0x000107c60d14();
  puVar6 = (undefined8 *)0x10;
  uStack_48 = uVar5;
  func_0x000107c60e20();
  uStack_48 = 0;
  *puVar6 = uVar5;
  puVar6[1] = param_1;
  pcVar3 = FUN_100454018;
  puVar7 = &uStack_58;
  puVar8 = (undefined8 *)0x0;
  puStack_50 = puVar6;
  func_0x000107c61238();
  if ((int)puVar7 != 0) {
    func_0x000107c60d78();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1004502e4);
    (*pcVar3)();
  }
  if (*plVar11 == 0) {
    param_1[0xc] = uStack_58;
    uStack_58 = 0;
    func_0x000107c60dc0(&uStack_58);
    return param_1;
  }
  func_0x000107c60e0c();
  func_0x000104c46668(&uStack_48);
  func_0x000107c60dc0(plVar11);
  func_0x000107c31500(param_1 + 10);
  func_0x000107c31524(param_1 + 4);
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    func_0x000107c60e14(*puVar10);
  }
  func_0x000107c60bd8();
  lVar9 = puVar8[1];
  uVar5 = *puVar8;
  puVar7[1] = puVar8[1];
  *puVar7 = uVar5;
  if (lVar9 != 0) {
    plVar11 = (long *)(lVar9 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar9 = *(long *)(pcVar3 + 8);
  uVar5 = *(undefined8 *)pcVar3;
  puVar7[3] = *(undefined8 *)(pcVar3 + 8);
  puVar7[2] = uVar5;
  if (lVar9 != 0) {
    plVar11 = (long *)(lVar9 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar4 = puVar6[1];
  if (0x7ffffffffffffff6 < uVar4) {
    func_0x000104bd47d4();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100450448);
    (*pcVar3)();
  }
  uVar5 = *puVar6;
  if (uVar4 < 0x17) {
    puVar6 = puVar7 + 4;
    *(char *)((long)puVar7 + 0x37) = (char)uVar4;
    if (uVar4 == 0) goto LAB_100450424;
  }
  else {
    puVar10 = (undefined8 *)0x19;
    if ((uVar4 | 7) != 0x17) {
      puVar10 = (undefined8 *)((uVar4 | 7) + 1);
    }
    puVar6 = puVar10;
    func_0x000107c60e20();
    puVar7[5] = uVar4;
    puVar7[6] = (ulong)puVar10 | 0x8000000000000000;
    puVar7[4] = puVar6;
  }
  func_0x000107c610b8(puVar6,uVar5,uVar4);
LAB_100450424:
  *(undefined1 *)((long)puVar6 + uVar4) = 0;
  return puVar7;
}



/* Entry: 100450358; end: 100450463;  */

undefined8 *
FUN_100450358(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  lVar7 = param_2[1];
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar7 = param_3[1];
  uVar9 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar8 = param_4[1];
  if (0x7ffffffffffffff6 < uVar8) {
    func_0x000104bd47d4();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100450448);
    (*pcVar5)();
  }
  uVar9 = *param_4;
  if (uVar8 < 0x17) {
    puVar6 = param_1 + 4;
    *(char *)((long)param_1 + 0x37) = (char)uVar8;
    if (uVar8 == 0) goto LAB_100450424;
  }
  else {
    puVar2 = (undefined8 *)0x19;
    if ((uVar8 | 7) != 0x17) {
      puVar2 = (undefined8 *)((uVar8 | 7) + 1);
    }
    puVar6 = puVar2;
    func_0x000107c60e20();
    param_1[5] = uVar8;
    param_1[6] = (ulong)puVar2 | 0x8000000000000000;
    param_1[4] = puVar6;
  }
  func_0x000107c610b8(puVar6,uVar9,uVar8);
LAB_100450424:
  *(undefined1 *)((long)puVar6 + uVar8) = 0;
  return param_1;
}



/* Entry: 100450464; end: 100450517;  */

void FUN_100450464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  
  do {
    bVar3 = bRam0000000113847238;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113847238,0x10);
    if (bVar2) {
      bRam0000000113847238 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while ((cVar1 != '\0') || ((bVar3 & 1) != 0));
  FUN_100450358(0x113847248,param_1,param_3,&PTR_DAT_110d9ab68);
  FUN_100450358(0x113847280,param_2,param_3,&PTR_DAT_110d9ab78);
  uRam00000001138472b8 = 0x113847248;
  bRam0000000113847238 = 0;
  return;
}



/* Entry: 100450518; end: 100450563;  */

void FUN_100450518(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100450564; end: 10045056b;  */

void FUN_100450564(void)

{
  return;
}



/* Entry: 10045056c; end: 100450597;  */

long FUN_10045056c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100450598; end: 100450647;  */

void FUN_100450598(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 uStack_71;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  puVar2 = auStack_60;
  FUN_100450678();
  uStack_48 = extraout_x8;
  FUN_100450688(auStack_60,1);
  FUN_100450b14(lStack_50,param_3,param_4,param_5,param_6);
  lVar1 = lStack_50;
  lStack_50 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000100450b64(auStack_60);
  func_0x000100450b74(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000100450b64(auStack_60);
  func_0x000107c3a558();
  pcStack_68 = FUN_100450648;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_100450598(&uStack_71,puVar2,param_3,param_4,param_5);
  return;
}



/* Entry: 100450648; end: 100450677;  */

void FUN_100450648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_100450598(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 100450678; end: 100450687;  */

void FUN_100450678(void)

{
  return;
}



/* Entry: 100450688; end: 1004506a7;  */

void FUN_100450688(void)

{
  FUN_100450ac0();
  FUN_100450acc();
  FUN_100450afc();
  return;
}



/* Entry: 1004506a8; end: 100450abf; -[SCFideliusUserDatabaseManager _loadWithUrl:urlV2:iwek:identity:fileManager:error:eventName:] */

undefined8
FUN_1004506a8(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,long param_7,ulong param_8,undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_10);
  puVar1 = &UNK_10f3111a2;
  FUN_1000ba800();
  uVar3 = param_4;
  func_0x000107c4e430(param_4);
  func_0x000107c61180();
  uVar2 = param_8;
  func_0x000107c43418(param_8,param_3,uVar3);
  func_0x000107c61170(uVar3);
  uVar3 = param_5;
  func_0x000107c4e430(param_5);
  func_0x000107c61180();
  uVar8 = param_8;
  func_0x000107c43418(param_8,param_3,uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c6071c();
  dVar9 = param_1;
  func_0x000107c6071c();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  dVar9 = dVar9 - param_1;
  func_0x000107c4baec(dVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c6071c();
  puVar4 = PTR_PTR_1126c03a8;
  dVar10 = dVar9;
  func_0x000107c610f4();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar5 = PTR_PTR_1126bd038;
  func_0x000107c4279c(PTR_PTR_1126bd038);
  func_0x000107c61180();
  func_0x000107c4914c(puVar4,param_3,param_5,param_6,uVar3,puVar5);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined **)(param_2 + 0x30) = puVar4;
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c6071c();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  func_0x000107c4baec(dVar10 - dVar9);
  func_0x000107c61170(uVar3);
  if (*(long *)(param_2 + 0x30) == 0) {
    func_0x000107c4baf0(param_2,param_3,0,uVar8,0,&PTR____CFConstantStringClassReference_110e10e78,
                        param_10);
    uVar3 = 0;
    goto LAB_100450a1c;
  }
  puVar4 = PTR_PTR_1126c0650;
  func_0x000107c610f4();
  func_0x000107c4634c();
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined **)(param_2 + 0x38) = puVar4;
  func_0x000107c61170(uVar3);
  uVar6 = param_2;
  func_0x000107c43374();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c44074();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  puVar4 = PTR_PTR_1126c0388;
  if (uVar7 == 0) {
    if (param_7 == 0) {
      func_0x000107c4baf0(param_2,param_3,0,uVar8,uVar8,
                          &PTR____CFConstantStringClassReference_110e10e98,param_10);
    }
    else {
      uVar6 = param_2;
      func_0x000107c3b41c();
      if ((uVar6 & 1) != 0) goto LAB_10045097c;
      func_0x000107c4baf0(param_2,param_3,0,uVar8,uVar8,
                          &PTR____CFConstantStringClassReference_110e10eb8,param_10);
    }
LAB_100450a10:
    uVar3 = 0;
  }
  else {
    uVar8 = uVar7;
    func_0x000107c4a808(uVar7);
    func_0x000107c61180();
    func_0x000107c45924(puVar4,param_3,uVar8,&PTR____CFConstantStringClassReference_110e10ed8);
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    puVar5 = puVar4;
    func_0x000107c49cf4(puVar4,param_3,param_6);
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000107c4baf0(param_2,param_3,0,uVar2 & 0xffffffff,0,
                          &PTR____CFConstantStringClassReference_110e10ef8,param_10);
      func_0x000107c61170(puVar4);
      goto LAB_100450a10;
    }
    func_0x000107c61170(puVar4);
    uVar8 = 0;
LAB_10045097c:
    uVar3 = 1;
    func_0x000107c4baf0(param_2,param_3,1,uVar2 & 0xffffffff,uVar8,
                        &PTR____CFConstantStringClassReference_110e10f18,param_10);
  }
  func_0x000107c61170(uVar7);
LAB_100450a1c:
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return uVar3;
}



/* Entry: 100450ac0; end: 100450acb;  */

void FUN_100450ac0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 100450acc; end: 100450afb;  */

void FUN_100450acc(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  
  if (param_2 < 0x1642c8590b21643) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb8);
    return;
  }
  func_0x000104bd35f4();
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 100450afc; end: 100450b13;  */

void FUN_100450afc(undefined8 param_1)

{
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  return;
}



/* Entry: 100450b14; end: 100450b5b;  */

undefined8 * FUN_100450b14(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107ea880;
  param_1[1] = 0;
  func_0x000100450b08(param_1 + 3);
  return param_1;
}



/* Entry: 100450b5c; end: 100450bb3;  */

void FUN_100450b5c(void)

{
  return;
}



/* Entry: 100450bb4; end: 100450bd7;  */

void FUN_100450bb4(void)

{
  func_0x000100450b94();
  FUN_100450be4();
  return;
}



/* Entry: 100450bd8; end: 100450be3;  */

undefined8 FUN_100450bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100450be4; end: 100450c07;  */

void FUN_100450be4(long param_1)

{
  FUN_100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100450c08; end: 100450c1b;  */

void FUN_100450c08(void)

{
  return;
}



/* Entry: 100450c1c; end: 100450cd7;  */

void FUN_100450c1c(long param_1,undefined8 param_2)

{
  func_0x000107c60d88(param_1 + 0x20);
  func_0x000100450c7c(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x20);
  return;
}



/* Entry: 100450cd8; end: 100450cdf;  */

void FUN_100450cd8(void)

{
  return;
}



/* Entry: 100450ce0; end: 100450d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100450ce0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130837a0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100450d2c; end: 100450f07;  */

void FUN_100450d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a7390;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85d90);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 100450f08; end: 10045105b; -[SCPagePageViewReporterServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100450f08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c61160(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  func_0x000107c56330();
  func_0x000107c57a7c(puVar1,param_2,0x11);
  func_0x000107c56954(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd1e98);
  puVar2 = PTR_PTR_1126b75a8;
  func_0x000107c610f4(PTR_PTR_1126b75a8);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_1127217e4;
    func_0x000107c61148(lVar6);
  }
  lVar3 = lVar6;
  func_0x000107c4d6cc(lVar6);
  func_0x000107c61180();
  func_0x000107c48328(puVar2,param_2,puVar1,lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar6);
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_1127217e8;
    func_0x000107c61148(lVar6);
  }
  lVar3 = lVar6;
  func_0x000107c40fb0(lVar6);
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c40fa4();
  func_0x000107c61180();
  func_0x000107c5c31c(puVar2,param_2,lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar6);
  puVar5 = PTR_PTR_1126b75b0;
  func_0x000107c610f4(PTR_PTR_1126b75b0);
  func_0x000107c47d28();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10045105c; end: 10045106b; -[_TtC18SCBlizzardServices23SCNoDepBlizzardServices noDepLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10045105c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130837a0));
  return;
}



/* Entry: 10045106c; end: 10045112b; -[SCPagePageViewReporter initWithReportQueue:blizzardLogger:] */

undefined1 *
FUN_10045106c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e78b0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10045112c; end: 100451237; -[SCPagePageViewReporter subscribeOnCurrentPageEvent:] */

void FUN_10045112c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = param_3;
  func_0x000107c4da80(param_3);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100451238; end: 1004512ab; -[SCPagePageViewReporterServices initWithPagePageViewReporter:] */

undefined1 * FUN_100451238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702db8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004512ac; end: 1004512df;  */

void FUN_1004512ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004512e0; end: 1004513c3; -[SCNavigationLoggingServiceProvider provide] */

void FUN_1004512e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ce918;
  func_0x000107c610f4(PTR_PTR_1126ce918);
  func_0x000107c479c0();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1004513c4; end: 10045141b; -[_TtC27SCNavigationLoggingServices27SCNavigationLoggingServices initWithNavigationLoggingObserver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004513c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_11305c950) = param_3;
  lVar2 = param_1;
  FUN_100331248();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10045141c; end: 100451457;  */

void FUN_10045141c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100451458; end: 1004514bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100451458(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_1002926d8();
  lVar1 = param_2;
  func_0x000107c610f8();
  lVar2 = lVar1;
  func_0x0001000ad7c4();
  *(long *)(lVar1 + _DAT_112ffabb8) = lVar2;
  lStack_40 = lVar1;
  lStack_38 = param_2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  *param_1 = plVar3;
  return;
}



/* Entry: 1004514bc; end: 1004514c3;  */

void FUN_1004514bc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004514c4; end: 100451517;  */

void FUN_1004514c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100451518; end: 10045152b;  */

void FUN_100451518(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100203380();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  puVar2 = PTR_PTR_1126a8688;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar10 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef855c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  puVar11 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined **)(lVar1 + 0x48) = puVar11;
  *param_1 = lVar1;
  return;
}



/* Entry: 10045152c; end: 100451987;  */

void FUN_10045152c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100203380();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  puVar1 = PTR_PTR_1126a8688;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef855c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar9 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  puVar10 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x48) = puVar10;
  *param_1 = param_2;
  return;
}



/* Entry: 100451988; end: 10045198b; -[SCPlusAppStartServiceProvider provide] */

void FUN_100451988(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exposeAppStartService_112560c60);
  return;
}



/* Entry: 10045198c; end: 100451aeb; -[SCPlusAppStartServiceProvider _exposeAppStartService] */

void FUN_10045198c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1005b1aec;
  puStack_68 = &UNK_11096acd0;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126d1958;
  func_0x000107c610f4(PTR_PTR_1126d1958);
  func_0x000107c456f8();
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100451aec; end: 100451b8f; -[SCPlusAppStartServices initWithAppStartService:updater:] */

undefined1 *
FUN_100451aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702d18;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100451b90; end: 100451be3;  */

void FUN_100451b90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100451be4; end: 100451beb;  */

void FUN_100451be4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x168);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100451bec; end: 100451c3f;  */

void FUN_100451bec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x168);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100451c40; end: 10045356b;  */

void FUN_100451c40(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
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
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_100083b20(&uStack_130);
  FUN_100083b20(&uStack_138);
  FUN_100083b20(&uStack_140);
  FUN_100083b20(&uStack_148);
  FUN_100083b20(&uStack_150);
  FUN_100083b20(&uStack_158);
  FUN_100083b20(&uStack_160);
  FUN_100083b20(&uStack_168);
  FUN_100083b20(&uStack_170);
  FUN_100083b20(&uStack_178);
  FUN_100083b20(&uStack_180);
  FUN_100083b20(&uStack_188);
  FUN_100083b20(&uStack_190);
  FUN_100083b20(&uStack_198);
  FUN_1002ca408();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  *(undefined8 *)(param_2 + 0x68) = uStack_b8;
  *(undefined8 *)(param_2 + 0x70) = uStack_c0;
  *(undefined8 *)(param_2 + 0x78) = uStack_c8;
  *(undefined8 *)(param_2 + 0x80) = uStack_d0;
  *(undefined8 *)(param_2 + 0x88) = uStack_d8;
  *(undefined8 *)(param_2 + 0x90) = uStack_e0;
  *(undefined8 *)(param_2 + 0x98) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_100;
  *(undefined8 *)(param_2 + 0xb8) = uStack_108;
  *(undefined8 *)(param_2 + 0xc0) = uStack_110;
  *(undefined8 *)(param_2 + 200) = uStack_118;
  *(undefined8 *)(param_2 + 0xd0) = uStack_120;
  *(undefined8 *)(param_2 + 0xd8) = uStack_128;
  *(undefined8 *)(param_2 + 0xe0) = uStack_130;
  *(undefined8 *)(param_2 + 0xe8) = uStack_138;
  *(undefined8 *)(param_2 + 0xf0) = uStack_140;
  *(undefined8 *)(param_2 + 0xf8) = uStack_148;
  *(undefined8 *)(param_2 + 0x100) = uStack_150;
  *(undefined8 *)(param_2 + 0x108) = uStack_158;
  *(undefined8 *)(param_2 + 0x110) = uStack_160;
  *(undefined8 *)(param_2 + 0x118) = uStack_168;
  uVar16 = uStack_78;
  func_0x000107c61174();
  uVar18 = uStack_80;
  func_0x000107c61174();
  uVar19 = uStack_88;
  func_0x000107c61174();
  uVar20 = uStack_90;
  func_0x000107c61174();
  uVar2 = uStack_98;
  func_0x000107c61174();
  uVar3 = uStack_a0;
  func_0x000107c61174();
  uVar4 = uStack_a8;
  func_0x000107c61174();
  uVar5 = uStack_b0;
  func_0x000107c61174();
  uVar6 = uStack_b8;
  func_0x000107c61174();
  uVar7 = uStack_c0;
  func_0x000107c61174();
  uVar8 = uStack_c8;
  func_0x000107c61174();
  uVar9 = uStack_d0;
  func_0x000107c61174();
  uVar10 = uStack_d8;
  func_0x000107c61174();
  uVar11 = uStack_e0;
  func_0x000107c61174();
  uVar12 = uStack_e8;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_f0);
  uVar13 = uStack_f8;
  func_0x000107c61174();
  uVar21 = uStack_100;
  func_0x000107c61174();
  uVar22 = uStack_108;
  func_0x000107c61174();
  uVar23 = uStack_110;
  func_0x000107c61174();
  uVar24 = uStack_118;
  func_0x000107c61174();
  uVar25 = uStack_120;
  func_0x000107c61174();
  uVar26 = uStack_128;
  func_0x000107c61174();
  uVar27 = uStack_130;
  func_0x000107c61174();
  uVar28 = uStack_138;
  func_0x000107c61174();
  uVar29 = uStack_140;
  func_0x000107c61174();
  uVar30 = uStack_148;
  func_0x000107c61174();
  uVar31 = uStack_150;
  func_0x000107c61174();
  uVar32 = uStack_158;
  func_0x000107c61174();
  uVar33 = uStack_160;
  func_0x000107c61174();
  uVar34 = uStack_168;
  func_0x000107c61174();
  uVar42 = uVar34;
  func_0x0001000ad7c4();
  *(undefined8 *)(param_2 + 0x120) = uVar42;
  func_0x0001000ad7c4();
  *(undefined8 *)(param_2 + 0x128) = uVar42;
  *(undefined8 *)(param_2 + 0x130) = uStack_170;
  *(undefined8 *)(param_2 + 0x138) = uStack_178;
  *(undefined8 *)(param_2 + 0x140) = uStack_180;
  *(undefined8 *)(param_2 + 0x148) = uStack_188;
  *(undefined8 *)(param_2 + 0x150) = uStack_190;
  *(undefined8 *)(param_2 + 0x158) = uStack_198;
  puVar14 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar35 = uStack_170;
  func_0x000107c61174();
  uVar36 = uStack_178;
  func_0x000107c61174();
  uVar37 = uStack_180;
  func_0x000107c61174();
  uVar38 = uStack_188;
  func_0x000107c61174();
  uVar39 = uStack_190;
  func_0x000107c61174();
  uVar40 = uStack_198;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar14;
  puVar14 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar14;
  puVar14 = PTR_PTR_1126a8e00;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar14;
  func_0x000107c61174();
  uVar15 = auStack_70[0];
  func_0x000107c61174();
  uVar43 = 0xd000000000000010;
  uVar42 = uVar43;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar42);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar45 = 0xd000000000000013;
  uVar42 = uVar45;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar42);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x72655370756f7267;
  func_0x000107c5fadc(0x72655370756f7267,0xed00007365636976);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = uVar43;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar42);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar42);
  uVar17 = 0x726553646e756f73;
  func_0x000107c5fadc(0x726553646e756f73,0xed00007365636976);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85500);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar42);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar42);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar42);
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010effce40);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar42);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc82c0);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar44 = 0xd000000000000014;
  uVar42 = uVar44;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1ae00);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar42);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = uVar44;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar42);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007ee0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar42);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar17);
  uVar42 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar42);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar42);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c615f0(uStack_f0);
  func_0x000107c61174();
  uVar42 = uVar43;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f007f00);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c615e8(uStack_f0);
  func_0x000107c61170(uVar42);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007f20);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar42);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f007f40);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar42);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar42);
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar17);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c280);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar17);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar43);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar42);
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10b10);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = uVar44;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar42);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2b6f0);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar44);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = uVar45;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar42);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x655378656c707564;
  func_0x000107c5fadc(0x655378656c707564,0xee00736563697672);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar17);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar17);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar17);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar17);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef2cd50);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar42);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar43 = *(undefined8 *)(param_2 + 0x120);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f007f70);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar42);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar43 = *(undefined8 *)(param_2 + 0x128);
  func_0x000107c61174(uVar17);
  func_0x000107c61174(uVar43);
  uVar42 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f007f90);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar42);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f007fb0);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = uVar45;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar42);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2fd40);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar17);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar17);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85c50);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar40);
  func_0x000107c61174(uVar17);
  uVar42 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef18630);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar42);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar43 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f007fd0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar42);
  uVar42 = *(undefined8 *)(param_2 + 0x10);
  uVar17 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010f007ff0);
  func_0x000107c5a49c(uVar42);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar45);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  lVar41 = *(long *)(param_2 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar41 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100453568);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x160) = lVar41;
  lVar41 = *(long *)(param_2 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar41 != 0) {
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c615e8(uStack_f0);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar23);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar25);
    func_0x000107c61170(uVar26);
    func_0x000107c61170(uVar27);
    func_0x000107c61170(uVar28);
    func_0x000107c61170(uVar29);
    func_0x000107c61170(uVar30);
    func_0x000107c61170(uVar31);
    func_0x000107c61170(uVar32);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar35);
    func_0x000107c61170(uVar36);
    func_0x000107c61170(uVar37);
    func_0x000107c61170(uVar38);
    func_0x000107c61170(uVar39);
    func_0x000107c61170(uVar40);
    *(long *)(param_2 + 0x168) = lVar41;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10045356c);
  (*pcVar1)();
}



/* Entry: 10045356c; end: 1004535e7;  */

void FUN_10045356c(void)

{
  long unaff_x20;
  
  FUN_100451c40(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148));
  return;
}



/* Entry: 1004535e8; end: 1004535ef;  */

void FUN_1004535e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004535f0; end: 100453643;  */

void FUN_1004535f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100453644; end: 100453653;  */

void FUN_100453644(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1002a3e0c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126a8df0;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar8 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar8 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c61174();
  puVar9 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined **)(lVar1 + 0x38) = puVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 100453654; end: 10045398b;  */

void FUN_100453654(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_1002a3e0c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126a8df0;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar7 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x38) = puVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 10045398c; end: 100453a6f; -[SCSoundServiceProvider provide] */

void FUN_10045398c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126bdeb0;
  func_0x000107c610f4(PTR_PTR_1126bdeb0);
  func_0x000107c46740();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100453a70; end: 100453ae3; -[SCSoundServices initWithEffects:] */

undefined1 * FUN_100453a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fe908;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100453ae4; end: 100453b27;  */

void FUN_100453ae4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100453b28; end: 100453b2f;  */

void FUN_100453b28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  FUN_100083b20(&uStack_48);
  func_0x000107c5a8c0(uStack_48);
  func_0x000107c615e8(uStack_48);
  FUN_10009ddec(0);
  func_0x000107c610f8();
  FUN_1004557a4(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 100453b30; end: 100453bbb;  */

void FUN_100453b30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  
  func_0x0001000ad7c4();
  uVar1 = param_2;
  func_0x0001000ad7c4();
  FUN_100083b20(&uStack_48);
  func_0x000107c5a8c0(uStack_48);
  func_0x000107c615e8(uStack_48);
  FUN_10009ddec(0);
  func_0x000107c610f8();
  FUN_1004557a4(uVar1,param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 100453bbc; end: 100453bef;  */

void FUN_100453bbc(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100453bf0; end: 100453bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100453bf0(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  FUN_100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = lStack_48;
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_113092298);
  func_0x000107c615f0(uVar3);
  func_0x000107c61170(lVar1);
  FUN_100083b20(&lStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&lStack_58);
  uVar4 = *(undefined8 *)(lStack_58 + _DAT_11307d830);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(lStack_58);
  puVar2 = PTR_PTR_1126a6f30;
  func_0x000107c610f8();
  func_0x000107c46c78();
  func_0x000107c615e8(lStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c615e8(uVar4);
  func_0x000107c615e8(uVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 100453bfc; end: 100453d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100453bfc(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  FUN_100083b20(&lStack_48);
  lVar1 = lStack_48;
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_113092298);
  func_0x000107c615f0(uVar3);
  func_0x000107c61170(lVar1);
  FUN_100083b20(&lStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&lStack_58);
  uVar4 = *(undefined8 *)(lStack_58 + _DAT_11307d830);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(lStack_58);
  puVar2 = PTR_PTR_1126a6f30;
  func_0x000107c610f8();
  func_0x000107c46c78();
  func_0x000107c615e8(lStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c615e8(uVar4);
  func_0x000107c615e8(uVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 100453d04; end: 100453d0b;  */

void FUN_100453d04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  puVar3 = PTR_PTR_1126a6f38;
  func_0x000107c610f8();
  func_0x000107c475b0();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 100453d0c; end: 100453d7b;  */

void FUN_100453d0c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x0001000ad7c4();
  uVar1 = param_2;
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126a6f38;
  func_0x000107c610f8();
  func_0x000107c475b0();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 100453d7c; end: 100453e8b; -[SCCameraViewfinderRenderTargetImpl initWithManagedCaptureSession:hardwareResource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100453d7c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e7420;
  uStack_40 = param_1;
  func_0x000107c61154(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_40,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c534b0(puVar1);
    func_0x000107c3e740(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x000107c54144(PTR__OBJC_CLASS___CATransaction_1126b5718);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61160();
    lVar4 = (long)_DAT_112720b90;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c3ec60(puVar1);
    func_0x000107c54b80(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x000107c52ab8(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x000107c5a050(*(undefined8 *)((long)puVar1 + lVar4));
    puVar2 = PTR_PTR_1126b6cd0;
    func_0x000107c610f4();
    func_0x000107c494d4();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112720b94);
    *(undefined **)((long)puVar1 + (long)_DAT_112720b94) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c3d89c(puVar1);
    func_0x000107c3fe58(PTR__OBJC_CLASS___CATransaction_1126b5718);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100453e8c; end: 100454017; -[SCFideliusLogger logDBLatency:table:action:durationInSeconds:] */

/* WARNING: Possible PIC construction at 0x000100453f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100453f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100453fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100453ff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100453fa0) */
/* WARNING: Removing unreachable block (ram,0x000100453f78) */
/* WARNING: Removing unreachable block (ram,0x000100453fe4) */

void FUN_100453e8c(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR_PTR_1126c04d8;
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x000107c41384();
      func_0x000107c61180();
      goto LAB_100453f48;
    }
    if (param_3 == 1) {
      func_0x000107c41390();
      func_0x000107c61180();
      goto LAB_100453f48;
    }
  }
  else {
    if (param_3 == 2) {
      func_0x000107c41388();
      func_0x000107c61180();
    }
    else {
      if (param_3 != 3) goto LAB_100453ff4;
      func_0x000107c41394();
      func_0x000107c61180();
    }
LAB_100453f48:
    if (puVar1 != (undefined *)0x0) {
      func_0x000107c5e508(puVar1,param_2,&PTR____CFConstantStringClassReference_110e10018,param_4);
      func_0x000107c61180();
      param_4 = puVar1;
      goto code_r0x000107c61170;
    }
  }
LAB_100453ff4:
  func_0x000107c61170(param_5);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100454018; end: 100454423;  */

undefined * FUN_100454018(long *****param_1)

{
  long ****pppplVar1;
  byte bVar2;
  long *****ppppplVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long ***ppplVar10;
  undefined *puVar11;
  long ****pppplVar12;
  long lVar13;
  long ****pppplVar14;
  long *****ppppplVar15;
  long ***ppplVar16;
  long ****pppplStack_a0;
  undefined8 uStack_98;
  long ****pppplStack_90;
  long ***ppplStack_88;
  ulong uStack_80;
  long ****pppplStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplVar8 = param_1;
  pppplStack_a0 = (long ****)param_1;
  func_0x000107c60d74();
  pppplVar12 = *param_1;
  *param_1 = (long ****)0x0;
  func_0x000107c612a0(*ppppplVar8,pppplVar12);
  pppplVar14 = param_1[1];
  ppplVar16 = pppplVar14[2];
  pppplVar12 = (long ****)pppplVar14[1];
  if (-1 < (char)*(byte *)((long)pppplVar14 + 0x1f)) {
    ppplVar16 = (long ***)(ulong)*(byte *)((long)pppplVar14 + 0x1f);
    pppplVar12 = pppplVar14 + 1;
  }
  pppplVar1 = (long ****)((long)ppplVar16 + 4);
  if ((long ****)0x7ffffffffffffff6 < pppplVar1) {
    func_0x000104bd47d4();
LAB_100454394:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100454398);
    (*pcVar7)();
  }
  if (pppplVar1 < (long ****)0x17) {
    ppplStack_88 = (long ***)0x0;
    pppplStack_90 = (long ****)0x0;
    ppppplVar8 = &pppplStack_90;
    uStack_80 = (long)pppplVar1 << 0x38;
    if (ppplVar16 == (long ***)0x0) goto LAB_1004540f4;
  }
  else {
    ppppplVar9 = (long *****)0x19;
    if (((ulong)pppplVar1 | 7) != 0x17) {
      ppppplVar9 = (long *****)(((ulong)pppplVar1 | 7) + 1);
    }
    ppppplVar8 = ppppplVar9;
    func_0x000107c60e20();
    uStack_80 = (ulong)ppppplVar9 | 0x8000000000000000;
    pppplStack_90 = (long ****)ppppplVar8;
    ppplStack_88 = (long ***)pppplVar1;
  }
  func_0x000107c610b8(ppppplVar8,pppplVar12,ppplVar16);
LAB_1004540f4:
  *(undefined4 *)((long)ppppplVar8 + (long)ppplVar16) = 0x6b72772d;
  *(undefined1 *)((undefined4 *)((long)ppppplVar8 + (long)ppplVar16) + 1) = 0;
  ppppplVar8 = (long *****)pppplStack_90;
  if (-1 < (long)uStack_80) {
    ppppplVar8 = &pppplStack_90;
  }
  func_0x000107c61298();
  if ((long)uStack_80 < 0) {
    ppppplVar8 = (long *****)pppplStack_90;
    func_0x000107c60e14();
    bVar2 = *(byte *)(pppplVar14 + 0xd);
  }
  else {
    bVar2 = *(byte *)(pppplVar14 + 0xd);
  }
  if ((bVar2 & 1) == 0) {
    pppplVar12 = pppplVar14 + 8;
LAB_100454208:
    do {
      do {
        ppplVar16 = *pppplVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppplVar12,0x10);
        if (bVar5) {
          *(byte *)pppplVar12 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while ((cVar4 != '\0') || (((ulong)ppplVar16 & 1) != 0));
      func_0x000107c60d9c();
      ppppplVar9 = (long *****)pppplVar14[4];
      ppppplVar3 = (long *****)pppplVar14[5];
      if (ppppplVar9 == ppppplVar3) {
        ppppplVar15 = ppppplVar8 + 0x3946be1c0;
      }
      else {
        ppppplVar15 = (long *****)*ppppplVar9;
        if ((long)ppppplVar15 <= (long)ppppplVar8) {
          func_0x000107c31530(ppppplVar9,ppppplVar3,
                              ((long)ppppplVar3 - (long)ppppplVar9 >> 3) * -0x3333333333333333);
          ppplVar16 = pppplVar14[5];
          pppplStack_90 = (long ****)ppplVar16[-5];
          ppppplVar8 = (long *****)ppplVar16[-1];
          if (ppppplVar8 == (long *****)0x0) {
            pppplStack_70 = (long ****)0x0;
          }
          else if (ppppplVar8 == (long *****)(ppplVar16 + -4)) {
            pppplStack_70 = &ppplStack_88;
            (*(code *)(*ppppplVar8)[3])(ppppplVar8,&ppplStack_88);
            ppplVar16 = pppplVar14[5];
            ppplVar10 = (long ***)ppplVar16[-1];
            if (ppplVar10 == ppplVar16 + -4) {
              lVar13 = 0x20;
            }
            else {
              if (ppplVar10 == (long ***)0x0) goto LAB_100454328;
              lVar13 = 0x28;
            }
            (**(code **)((long)*ppplVar10 + lVar13))();
          }
          else {
            ppplVar16[-1] = (long **)0x0;
            pppplStack_70 = (long ****)ppppplVar8;
          }
LAB_100454328:
          pppplVar14[5] = ppplVar16 + -5;
          *(undefined1 *)(pppplVar14 + 8) = 0;
          uStack_98 = 0;
          if ((long *****)pppplStack_70 == (long *****)0x0) {
            func_0x000104bfeb48();
            goto LAB_100454394;
          }
          (*(code *)(*pppplStack_70)[6])(pppplStack_70,&uStack_98);
          func_0x000107c60c18(&uStack_98);
          ppppplVar8 = (long *****)pppplStack_70;
          if (pppplStack_70 == &ppplStack_88) {
            lVar13 = 0x20;
          }
          else {
            if ((long *****)pppplStack_70 == (long *****)0x0) goto LAB_100454208;
            lVar13 = 0x28;
          }
          (**(code **)((long)*pppplStack_70 + lVar13))();
          goto LAB_100454208;
        }
      }
      pppplVar14[0xb] = (long ***)ppppplVar15;
      *(undefined1 *)(pppplVar14 + 8) = 0;
      func_0x000107c60d9c();
      uVar6 = (long)ppppplVar15 - (long)ppppplVar9;
      ppppplVar8 = ppppplVar9;
      if (uVar6 != 0 && (long)ppppplVar9 <= (long)ppppplVar15) {
        ppppplVar8 = (long *****)(ulong)*(uint *)(pppplVar14 + 10);
        func_0x000107c612f4(ppppplVar8,
                            (ulong)(uint)((int)(uVar6 / 1000) +
                                         (int)((uVar6 / 1000) / 1000000) * -1000000) * 0x3e800000000
                            | uVar6 / 1000000000 & 0xffffffff);
      }
    } while (*(char *)(pppplVar14 + 0xd) != '\x01');
  }
  ppppplVar9 = (long *****)pppplStack_a0;
  if ((long *****)pppplStack_a0 != (long *****)0x0) {
    pppplVar12 = (long ****)*pppplStack_a0;
    *pppplStack_a0 = (long ***)0x0;
    if (pppplVar12 != (long ****)0x0) {
      func_0x000107c60d18();
      func_0x000107c60e14();
    }
    func_0x000107c60e14(ppppplVar9);
    ppppplVar8 = ppppplVar9;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    if ((long)uStack_80 < 0) {
      func_0x000107c60e14(pppplStack_90);
    }
    func_0x000107c31534(&pppplStack_a0);
    func_0x000107c60bd8(ppppplVar8);
    puVar11 = PTR_PTR_1126c04d8;
    func_0x000107c610f4(PTR_PTR_1126c04d8);
    func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar11;
  }
  return (undefined *)0x0;
}



/* Entry: 100454424; end: 10045444f; +[SCGrapheneFideliusMetric dbLoadLatency] */

void FUN_100454424(void)

{
  func_0x000107c610f4(PTR_PTR_1126c04d8);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100454450; end: 1004544bf; +[SCFideliusPerformerInitializer encryptedDBV2Performer] */

void FUN_100454450(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f310d95);
  func_0x000107c61180();
  func_0x000107c470d0(puVar1,param_2,puVar2,0x15,0,0x18);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1004544c0; end: 100454533; -[SCCameraViewfinderLayerActionsForwarder initWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1004544c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e7418;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + (long)_DAT_112720b8c),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100454534; end: 10045466b; -[SCFideliusEncryptedDatabaseV2 initWithUrl:iwek:logger:performer:] */

long FUN_100454534(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puVar1 = &UNK_10f30c819;
  FUN_1000ba800(&UNK_10f30c819);
  if (param_1 != 0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    lVar3 = param_1;
    func_0x000107c5aa5c(param_1,param_2,param_3);
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 10045466c; end: 1004547d3; -[SCFideliusEncryptedDatabaseV2 sharedTransactor:] */

void FUN_10045466c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  puVar2 = &UNK_10f30c843;
  FUN_1000ba800(&UNK_10f30c843);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x000107c49be8();
  if (iVar1 == 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1004547d4;
    uStack_40 = 0x100588750;
    uStack_38 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(param_3);
    func_0x000107c4e530(uVar3);
    param_1 = puStack_58[5];
    func_0x000107c61174(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c60bcc(&uStack_60,8);
    func_0x000107c61170(uStack_38);
  }
  else {
    func_0x000107c3c6f8(param_1);
    func_0x000107c61180();
  }
  func_0x0001000e2a84(puVar2);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1004547d4; end: 1004547e3;  */

void FUN_1004547d4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1004547e4; end: 100454827;  */

void FUN_1004547e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3c6f8(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61180();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100454828; end: 100454a0b; -[SCFideliusEncryptedDatabaseV2 _sharedTransactorFromDict:] */

void FUN_100454828(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f30c8a1;
  FUN_1000ba800(&UNK_10f30c8a1);
  puVar2 = PTR_PTR_1126c03a8;
  func_0x000107c5a9e4();
  func_0x000107c61180();
  uVar5 = param_3;
  func_0x000107c4e430(param_3);
  func_0x000107c61180();
  puVar6 = puVar2;
  func_0x000107c4d9c0(puVar2,param_2,uVar5);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar5);
  uVar5 = param_3;
  if (puVar6 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126c03b0;
    func_0x000107c610f4();
    puVar3 = PTR_PTR_1126c03b8;
    func_0x000107c61158(PTR_PTR_1126c03b8);
    uVar4 = param_3;
    func_0x000107c4e430(param_3);
    func_0x000107c61180();
    func_0x000107c3ba04(puVar6,param_2,puVar3,uVar4,0,0,1,0);
    func_0x000107c61170(uVar4);
    if (puVar6 == (undefined *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x000107c5c734(uVar5);
      func_0x000107c61180();
      func_0x000107c4bf88();
      puVar6 = (undefined *)0x0;
    }
    else {
      func_0x000107c4e430(param_3);
      func_0x000107c61180();
      func_0x000107c56bcc(puVar2,param_2,puVar6,uVar5);
    }
  }
  else {
    func_0x000107c4e430(param_3);
    func_0x000107c61180();
    puVar6 = puVar2;
    func_0x000107c4d9e8(puVar2,param_2,uVar5);
    func_0x000107c61180();
  }
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar2);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100454a0c; end: 100454a8f; +[SCFideliusEncryptedDatabaseV2 sharedDictionary] */

void FUN_100454a0c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = &UNK_10f30c872;
  FUN_1000ba800(&UNK_10f30c872);
  if (lRam00000001136c1760 != -1) {
    FUN_10002a2fc(0x1136c1760,&PTR___NSConcreteGlobalBlock_1108c0400);
  }
  uVar1 = uRam00000001136c1758;
  func_0x000107c61174(uRam00000001136c1758);
  func_0x0001000e2a84(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100454a90; end: 100454ae7;  */

void FUN_100454a90(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c610fc();
  uVar1 = puRam00000001136c1758;
  puRam00000001136c1758 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100454ae8; end: 100454aef; -[SCSQLiteTransactor .cxx_construct] */

void FUN_100454ae8(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 100454af0; end: 100454e9f; -[SCCameraViewfinderRenderAgentImpl initWithHardwareResource:renderTarget:featureStartupEventBus:appStartExperimentReader:] */

undefined8 *
FUN_100454af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_68 = PTR_PTR_1126e7410;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 0x18) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar9 = puVar1[7];
    puVar1[7] = puVar2;
    func_0x000107c61170(uVar9);
    func_0x000107c61174(param_4);
    uVar9 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar9);
    func_0x000107c611a0(puVar1 + 0x13,param_3);
    func_0x000107c61174(param_5);
    uVar9 = puVar1[0xe];
    puVar1[0xe] = param_5;
    func_0x000107c61170(uVar9);
    func_0x000107c61174(param_6);
    uVar9 = puVar1[0x14];
    puVar1[0x14] = param_6;
    func_0x000107c61170(uVar9);
    func_0x000107c57c18(puVar1[2]);
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c45454();
    uVar9 = puVar1[9];
    puVar1[9] = puVar2;
    func_0x000107c61170(uVar9);
    puVar2 = PTR_PTR_1126b6ca0;
    func_0x000107c610f4();
    func_0x000107c47e14();
    uVar9 = puVar1[10];
    puVar1[10] = puVar2;
    func_0x000107c61170(uVar9);
    *(undefined1 *)(puVar1 + 0xf) = 0;
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar9 = puVar1[0x11];
    puVar1[0x11] = puVar2;
    func_0x000107c61170(uVar9);
    func_0x000107c61144(auStack_78,puVar1);
    if (puVar1[0x12] == 0) {
      puVar2 = PTR_PTR_1126ae810;
      func_0x000107c61160();
      uVar9 = puVar1[0x12];
      puVar1[0x12] = puVar2;
      func_0x000107c61170(uVar9);
      puVar3 = puVar1 + 0x13;
      func_0x000107c61148();
      puVar4 = puVar3;
      func_0x000107c4c238();
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      puVar6 = puVar5;
      func_0x000107c52094();
      func_0x000107c61180();
      puVar7 = puVar6;
      func_0x000107c5d58c();
      func_0x000107c61180();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      puStack_90 = &UNK_100c3c050;
      puStack_88 = &UNK_110872b30;
      func_0x000107c6111c(auStack_80,auStack_78);
      puVar8 = puVar7;
      func_0x000107c5c320(puVar7);
      func_0x000107c61180();
      func_0x000107c3e924();
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c61120(auStack_80);
    }
    puVar3 = puVar1 + 0x13;
    func_0x000107c61148(puVar3);
    puVar4 = puVar3;
    func_0x000107c5dd88();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_a8,auStack_78);
    puVar5 = puVar4;
    func_0x000107c5c320(puVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    puVar1[0x10] = 3;
    uVar9 = *(undefined8 *)PTR__CGSizeZero_110347620;
    puVar1[0x16] = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    puVar1[0x15] = uVar9;
    func_0x000107c61120(auStack_a8);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100454ea0; end: 100454ec7; -[SCSQLiteTransactor _initWithClass:databasePath:shared:wipe:isSingleConnectionMode:autoVacuum:] */

void FUN_100454ea0(void)

{
  func_0x000107c3ba08();
  return;
}



/* Entry: 100454ec8; end: 10045540b; -[SCSQLiteTransactor _initWithClass:databasePath:shared:wipe:isSingleConnectionMode:omitSingletonConstraint:autoVacuum:] */

undefined8 *
FUN_100454ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,uint param_5,
             undefined8 param_6,byte param_7,byte param_8,undefined1 param_9)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined1 auStack_80 [8];
  long *plStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_4);
  puStack_68 = PTR_PTR_112706638;
  puVar5 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar5 + 9) = 0;
    *(undefined4 *)((long)puVar5 + 0x4c) = 0;
    *(undefined4 *)(puVar5 + 10) = 0;
    uVar6 = param_4;
    func_0x000107c49cec();
    if ((uVar6 & 1) == 0) {
      uVar6 = param_4;
      func_0x000107c49cec();
      uVar16 = (uint)uVar6;
    }
    else {
      uVar16 = 1;
    }
    *(byte *)(puVar5 + 3) = (param_7 | (byte)uVar16) & 1;
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar12 = puVar5[6];
    puVar5[6] = puVar7;
    func_0x000107c61170();
    func_0x000107c60f34();
    uVar13 = puVar5[7];
    puVar5[7] = uVar12;
    func_0x000107c61170(uVar13);
    *(undefined1 *)((long)puVar5 + 0x49) = 0;
    puVar5[1] = param_3;
    if (param_5 == 0) {
      uVar6 = param_4;
      func_0x000107c61178(param_4);
      func_0x000107c3ac4c();
      FUN_10002b838(auStack_98,uVar6);
      iVar4 = (int)auStack_98;
      FUN_100455428();
      if (cStack_81 < '\0') {
        func_0x000107c60e14(auStack_98[0]);
      }
      if (iVar4 != 0) {
        param_6 = 1;
        *(undefined1 *)(puVar5 + 9) = 1;
      }
      puVar7 = PTR_PTR_1126e03e0;
      func_0x000107c610f4();
      uVar12 = puVar5[1];
      func_0x000107c5193c(uVar12);
      func_0x000107c61180();
      FUN_10045dbf0(puVar7,param_4,uVar12,param_6,0,param_9);
      func_0x000107c61170(uVar12);
    }
    else {
      uVar6 = param_4;
      func_0x000107c61178();
      func_0x000107c3ac4c();
      FUN_10002b838(auStack_98,uVar6);
      func_0x000107c31384(auStack_80,auStack_98);
      func_0x000107c30740(puVar5 + 4,auStack_80);
      if (plStack_78 != (long *)0x0) {
        plVar8 = plStack_78 + 1;
        do {
          lVar14 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          func_0x000107c60d68(plStack_78);
        }
      }
      if (cStack_81 < '\0') {
        func_0x000107c60e14(auStack_98[0]);
      }
      plVar8 = (long *)puVar5[4];
      (**(code **)(*plVar8 + 0x38))();
      if ((int)plVar8 != 0) {
        *(undefined1 *)(puVar5 + 9) = 1;
      }
      puVar7 = PTR_PTR_1126e03e0;
      func_0x000107c610f4();
      plVar8 = (long *)puVar5[5];
      if (puVar5[5] != 0) {
        plVar1 = (long *)(puVar5[5] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000107c30758();
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
        do {
          lVar14 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          func_0x000107c60d68(plVar8);
        }
      }
    }
    if (puVar7 == (undefined *)0x0) {
      puVar15 = (undefined8 *)0x0;
      goto LAB_100455390;
    }
    puVar9 = puVar7;
    func_0x000107c43fd0();
    if (puVar9[0x1a1] == '\x01') {
      *(undefined1 *)(puVar5 + 9) = 1;
    }
    uVar12 = puVar5[1];
    func_0x000107c610f4();
    func_0x000107c48968();
    uVar13 = puVar5[8];
    puVar5[8] = uVar12;
    func_0x000107c61170(uVar13);
    if (((param_5 | uVar16) & 1) == 0) {
      puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x000107c43478(PTR__OBJC_CLASS___NSURL_1126ae598);
      func_0x000107c61180();
      func_0x000107c44260();
      func_0x000107c61174(0);
      func_0x000107c61174(0);
      func_0x000107c61170(puVar9);
      uVar12 = puVar5[2];
      puVar5[2] = 0;
      func_0x000107c61174(0);
      func_0x000107c61170(uVar12);
      *(byte *)((long)puVar5 + 0x49) = param_8 ^ 1;
      func_0x000107c61170(0);
      func_0x000107c61170(0);
    }
    puVar9 = PTR_PTR_1126c03b0;
    if (*(char *)((long)puVar5 + 0x49) == '\x01') {
      uVar12 = puVar5[2];
      func_0x000107c61174(uVar12);
      func_0x000107c61168(puVar9);
      puVar10 = puVar9;
      FUN_10058813c();
      func_0x000107c61180();
      puVar11 = puVar10;
      func_0x000107c61178();
      func_0x000107c3cb4c();
      func_0x000107c611ec();
      func_0x000107c61170(puVar10);
      FUN_1005886b0(puVar9);
      func_0x000107c61180();
      func_0x000107c3d798();
      func_0x000107c61170(puVar9);
      func_0x000107c611f0(puVar11);
      func_0x000107c61170(uVar12);
    }
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61174(puVar5);
  puVar15 = puVar5;
LAB_100455390:
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar5);
  return puVar15;
}



/* Entry: 10045540c; end: 10045541f; -[SCCameraViewfinderRenderTargetImpl setRectListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10045540c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112720ba0,param_3);
  return;
}



/* Entry: 100455420; end: 100455427; -[SCCameraHardwareResourceImpl managedCapturerStateCoordinator] */

undefined8 FUN_100455420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100455428; end: 1004554d7;  */

long * FUN_100455428(long *param_1)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long *plVar2;
  undefined1 auStack_288 [8];
  ulong uStack_280;
  byte bStack_271;
  long alStack_270 [4];
  int aiStack_250 [138];
  undefined8 uStack_28;
  
  FUN_1004554d8();
  uStack_28 = extraout_x8;
  func_0x000100456708(auStack_288);
  uVar1 = bStack_271 == 0;
  if (-1 < (char)bStack_271) {
    uStack_280 = (ulong)bStack_271;
  }
  if (uStack_280 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    FUN_10045684c(alStack_270,auStack_288,0x18);
    uVar1 = *(int *)((long)aiStack_250 + *(long *)(alStack_270[0] + -0x18)) == 0;
    plVar2 = (long *)(ulong)(byte)uVar1;
    param_1 = alStack_270;
    func_0x0001004569a0(param_1);
  }
  FUN_100456adc();
  func_0x000100456ae4(uStack_28);
  if ((bool)uVar1) {
    return plVar2;
  }
  func_0x000107c60e78();
  FUN_100456adc();
  func_0x000107c3a408();
  return param_1;
}



/* Entry: 1004554d8; end: 1004554e7;  */

void FUN_1004554d8(void)

{
  return;
}



/* Entry: 1004554e8; end: 1004554ef; -[SCCameraHardwareResourceImpl videoDataSourceObservable] */

undefined8 FUN_1004554e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1004554f0; end: 100455537;  */

/* WARNING: Possible PIC construction at 0x000100455524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100455528) */

void FUN_1004554f0(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3ae20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100455538; end: 100455547; -[SCCameraViewfinderRenderAgentImpl _attachToDataSource:] */

void FUN_100455538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010befb150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_addSampleBufferDisplayController_11259c5f8,param_1);
  return;
}



/* Entry: 100455548; end: 1004555cb; -[SCManagedVideoStreamer addSampleBufferDisplayController:] */

void FUN_100455548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10045668c;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c3c0f8(param_1,param_2,&puStack_50);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1004555cc; end: 100455607;  */

void FUN_1004555cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100455608; end: 100455633; -[SCCameraViewfinderRenderAgentImpl setupRenderPipeline] */

void FUN_100455608(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c5a8bc(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010beefe50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_activateRenderModule__112599938,0);
  return;
}



/* Entry: 100455634; end: 1004556eb; -[SCCameraViewfinderRenderAgentImpl setupRenderModule:] */

void FUN_100455634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c6111c(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x000107c4e524(uVar1);
  func_0x000107c61120(auStack_48);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1004556ec; end: 1004557a3; -[SCCameraViewfinderRenderAgentImpl activateRenderModule:] */

void FUN_1004556ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c6111c(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x000107c4e524(uVar1);
  func_0x000107c61120(auStack_48);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1004557a4; end: 100455807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004557a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113076470) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113076478) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100455808; end: 100455833;  */

void FUN_100455808(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100455834; end: 10045583b;  */

void FUN_100455834(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10045583c; end: 10045588f;  */

void FUN_10045583c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100455890; end: 1004558a3;  */

void FUN_100455890(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_1000a0934();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
  *(undefined8 *)(lVar2 + 0x50) = uStack_a0;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174();
  uVar5 = uStack_78;
  func_0x000107c61174();
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar10 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126a7368;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar11 = uStack_68;
  func_0x000107c61174();
  uVar12 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  uVar14 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef299a0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85a90);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85c50);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar14);
  uVar12 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  lVar13 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85c70);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(uVar14);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 != 0) {
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    *(long *)(lVar2 + 0x58) = lVar13;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100455e10);
  (*pcVar1)();
}



/* Entry: 1004558a4; end: 100455e0f;  */

void FUN_1004558a4(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_1000a0934();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar9 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7368;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef299a0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85a90);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef85c50);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef19380);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  lVar12 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85c70);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar13);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 != 0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(long *)(param_2 + 0x58) = lVar12;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100455e10);
  (*pcVar1)();
}



/* Entry: 100455e10; end: 100455e47;  */

void FUN_100455e10(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a7148;
  func_0x000107c61168();
  func_0x000107c5a9f0();
  func_0x000107c61180();
  *param_1 = puVar1;
  return;
}



/* Entry: 100455e48; end: 100455f77; +[SCAppExtensionStorageServiceImpl sharedInstance] */

void FUN_100455e48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c4c12c(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c51758();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c610f4();
  func_0x000107c48b70();
  puVar1 = PTR_PTR_1126ae720;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_100c7aa28;
  puStack_50 = &UNK_110c982b8;
  puStack_48 = puVar3;
  func_0x000107c61174();
  func_0x000107c3e4fc(puVar1,param_2,&puStack_68);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110c98308);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126deb68;
  func_0x000107c610f4(PTR_PTR_1126deb68);
  func_0x000107c456c8();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puStack_48);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100455f78; end: 10045601b; -[SCAppExtensionStorageServices initWithAppGroupUserDefaults:appGroupPlistStorage:] */

undefined1 *
FUN_100455f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112709e90;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10045601c; end: 100456023;  */

void FUN_10045601c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}


