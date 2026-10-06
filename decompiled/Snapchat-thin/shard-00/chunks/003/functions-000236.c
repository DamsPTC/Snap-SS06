/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005648e4; end: 1005649b3; -[SCCustomStoriesNetworkRequester _syncRequestWithSyncToken:accessToken:] */

void FUN_1005648e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d8ec0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61160(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_100564a1c(uVar2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61180();
  func_0x000107c57de8(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c59b2c(puVar1);
  func_0x000107c61170(param_3);
  puVar3 = puVar1;
  FUN_10059c104(puVar1,param_4,&PTR____CFConstantStringClassReference_110ecff58,
                &PTR____CFConstantStringClassReference_110ecfff8,0);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1005649b4; end: 100564a1b; +[SyncCustomStoryGroupsRequest descriptor] */

void FUN_1005649b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728c80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b94140,
                        &PTR____CFConstantStringClassReference_110ed07d8,&PTR_DAT_1132508f8,
                        &PTR_DAT_113250b10,2,0x18,0x1c);
    puRam0000000113728c80 = puVar1;
  }
  return;
}



/* Entry: 100564a1c; end: 100564b33;  */

void FUN_100564a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c0f00;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c61160(puVar1);
  puVar2 = puVar1;
  FUN_10011df08();
  func_0x000107c61180();
  func_0x000107c57dd8(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  func_0x000107c57e0c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c570b0(puVar1);
  uVar3 = param_1;
  FUN_10057694c(param_1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c53460(puVar1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100564b34; end: 100564c3b; +[SCSCORERequestMetadata descriptor] */

void FUN_100564b34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f22e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c428d0,
                        &PTR____CFConstantStringClassReference_110f480d8,&PTR_DAT_113356098,
                        &PTR_s_requestId_1133560b0,4,0x20,0x1c);
    puRam00000001137f22e0 = puVar1;
  }
  return;
}



/* Entry: 100564c3c; end: 100564c6b;  */

bool FUN_100564c3c(long param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 ****ppppuVar5;
  ulong uVar6;
  undefined8 ***apppuStack_48 [2];
  char cStack_31;
  
  func_0x0001004b538c(param_1,&UNK_10df46040);
  if (param_1 == 0) {
    return true;
  }
  plVar1 = (long *)(param_1 + 0x18);
  func_0x000107c60c94(apppuStack_48,plVar1);
  uVar6 = *(ulong *)(param_1 + 0x20);
  plVar2 = (long *)*plVar1;
  if (-1 < (char)*(byte *)(param_1 + 0x2f)) {
    uVar6 = (ulong)*(byte *)(param_1 + 0x2f);
    plVar2 = plVar1;
  }
  ppppuVar5 = (undefined8 ****)apppuStack_48[0];
  if (-1 < cStack_31) {
    ppppuVar5 = apppuStack_48;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    uVar4 = *(undefined1 *)plVar2;
    func_0x000107c60e80();
    *(undefined1 *)ppppuVar5 = uVar4;
    plVar2 = (long *)((long)plVar2 + 1);
    ppppuVar5 = (undefined8 ****)((long)ppppuVar5 + 1);
  }
  ppppuVar5 = apppuStack_48;
  FUN_100152bb8(ppppuVar5,&DAT_10f3f2e38);
  bVar3 = ((ulong)ppppuVar5 & 1) == 0;
  if (bVar3) {
    FUN_100152bb8(apppuStack_48,&DAT_10f4b159b);
  }
  func_0x000107c60ca0(apppuStack_48);
  return bVar3;
}



/* Entry: 100564c6c; end: 100564cab;  */

undefined8 * FUN_100564c6c(undefined8 *param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  *param_1 = &PTR_DAT_110a65660;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    FUN_100564c3c();
    uVar1 = (undefined4)lVar2;
  }
  *(undefined4 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 100564cac; end: 100564d6f;  */

bool FUN_100564cac(undefined8 *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 ***pppuVar4;
  ulong uVar5;
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  func_0x000107c60c94(appuStack_48,param_1);
  uVar5 = param_1[1];
  puVar1 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar1 = param_1;
  }
  pppuVar4 = (undefined8 ***)appuStack_48[0];
  if (-1 < cStack_31) {
    pppuVar4 = appuStack_48;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar3 = *(undefined1 *)puVar1;
    func_0x000107c60e80();
    *(undefined1 *)pppuVar4 = uVar3;
    puVar1 = (undefined8 *)((long)puVar1 + 1);
    pppuVar4 = (undefined8 ***)((long)pppuVar4 + 1);
  }
  pppuVar4 = appuStack_48;
  FUN_100152bb8(pppuVar4,&DAT_10f3f2e38);
  bVar2 = ((ulong)pppuVar4 & 1) == 0;
  if (bVar2) {
    FUN_100152bb8(appuStack_48,&DAT_10f4b159b);
  }
  func_0x000107c60ca0(appuStack_48);
  return bVar2;
}



/* Entry: 100564d70; end: 100564d9f;  */

void FUN_100564d70(void)

{
  return;
}



/* Entry: 100564da0; end: 100565183;  */

undefined8 *
FUN_100564da0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 *param_9,undefined8 param_10,undefined8 *param_11)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  *param_1 = &PTR_DAT_110a65620;
  lVar5 = param_4[1];
  uVar8 = *param_4;
  param_1[2] = param_4[1];
  param_1[1] = uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000100564d90();
    } while (extraout_w10 != 0);
  }
  lVar5 = param_5[1];
  uVar9 = param_5[1];
  uVar8 = *param_5;
  puVar3 = (undefined8 *)0x30;
  func_0x000107c60e20();
  plVar7 = puVar3 + 1;
  *plVar7 = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110a656d8;
  puVar6 = puVar3 + 3;
  *puVar6 = &PTR_DAT_110a60938;
  puVar3[5] = uVar9;
  puVar3[4] = uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000100564d90();
    } while (extraout_w10_00 != 0);
  }
  puVar4 = (undefined8 *)0x78;
  puStack_80 = puVar6;
  puStack_78 = puVar3;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  uVar8 = *param_2;
  puVar4[5] = param_2[1];
  puVar4[4] = uVar8;
  puVar4[3] = &PTR_DAT_110a608c0;
  *puVar4 = &PTR_DAT_110a65728;
  puStack_80 = (undefined8 *)0x0;
  puStack_78 = (undefined8 *)0x0;
  puStack_70 = puVar6;
  puStack_68 = puVar3;
  if (param_2[1] != 0) {
    do {
      func_0x000100564d90();
    } while (extraout_w10_01 != 0);
  }
  uVar8 = *param_3;
  puVar4[7] = param_3[1];
  puVar4[6] = uVar8;
  if (param_3[1] != 0) {
    do {
      func_0x000100564d90();
    } while (extraout_w10_02 != 0);
  }
  puVar4[8] = puVar6;
  puVar4[9] = puVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  FUN_10054f8dc(puVar4 + 10,param_7);
  lVar5 = param_9[1];
  uVar8 = *param_9;
  puVar4[0xe] = param_9[1];
  puVar4[0xd] = uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000100564d90();
    } while (extraout_w10_03 != 0);
  }
  FUN_100565184(&puStack_70);
  param_1[3] = puVar4 + 3;
  param_1[4] = puVar4;
  FUN_1005651b8(&puStack_80);
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110a65778;
  puVar3[3] = &PTR_DAT_110a60810;
  param_1[5] = puVar3 + 3;
  param_1[6] = puVar3;
  FUN_1005652bc(&puStack_80);
  puVar3 = (undefined8 *)0x190;
  func_0x000107c60e20();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110a65818;
  puStack_68 = puStack_78;
  puStack_70 = puStack_80;
  puStack_80 = (undefined8 *)0x0;
  puStack_78 = (undefined8 *)0x0;
  FUN_1005652fc(puVar3 + 3,param_2,param_3,param_7,param_6,&puStack_70,param_9,param_10);
  FUN_100565574(&puStack_70);
  param_1[7] = puVar3 + 3;
  param_1[8] = puVar3;
  FUN_1005655a4(&puStack_80);
  lVar5 = param_6[1];
  uVar9 = param_6[1];
  uVar8 = *param_6;
  puVar3 = (undefined8 *)0x30;
  func_0x000107c60e20();
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110a65868;
  puVar3[1] = 0;
  puVar3[3] = &PTR_DAT_110a60d68;
  puVar3[5] = uVar9;
  puVar3[4] = uVar8;
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[9] = puVar3 + 3;
  param_1[10] = puVar3;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  lVar5 = param_6[1];
  uVar8 = *param_6;
  param_1[0xe] = param_6[1];
  param_1[0xd] = uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000100564d90();
    } while (extraout_w10_04 != 0);
  }
  lVar5 = param_3[1];
  uVar8 = *param_3;
  param_1[0x10] = param_3[1];
  param_1[0xf] = uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000100564d90();
    } while (extraout_w10_05 != 0);
  }
  lVar5 = param_11[1];
  uVar8 = *param_11;
  param_1[0x12] = param_11[1];
  param_1[0x11] = uVar8;
  if (lVar5 != 0) {
    do {
      func_0x000100564d90();
    } while (extraout_w10_06 != 0);
  }
  return param_1;
}



/* Entry: 100565184; end: 1005651ab;  */

long FUN_100565184(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1005651ac; end: 1005651b7;  */

undefined8 FUN_1005651ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1005651b8; end: 1005651db;  */

void FUN_1005651b8(long param_1)

{
  FUN_1005651ac();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005651dc; end: 1005651f7;  */

long FUN_1005651dc(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3b == 0) {
    lVar1 = param_2 << 5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1005651dc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1005651f8; end: 10056521f;  */

long FUN_1005651f8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1005651dc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100565220; end: 1005652bb;  */

void FUN_100565220(long *param_1)

{
  undefined8 *puVar1;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1005651f8(auStack_40,1);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_DAT_110a657c8;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_110a612e0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  FUN_1005652dc(auStack_40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_48 = FUN_1005652bc;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_100565220(&uStack_51);
  return;
}



/* Entry: 1005652bc; end: 1005652db;  */

void FUN_1005652bc(void)

{
  undefined1 uStack_11;
  
  FUN_100565220(&uStack_11);
  return;
}



/* Entry: 1005652dc; end: 1005652fb;  */

void FUN_1005652dc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1005652fc; end: 10056553f;  */

undefined8 *
FUN_1005652fc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  long lVar1;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [24];
  
  *param_1 = &PTR_DAT_110a60f90;
  lVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x0001005652ec();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_3[1];
  uVar3 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x0001005652ec();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_5[1];
  uVar3 = *param_5;
  param_1[6] = param_5[1];
  param_1[5] = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x0001005652ec();
    } while (extraout_w10_01 != 0);
  }
  lVar1 = param_6[1];
  uVar3 = *param_6;
  param_1[8] = param_6[1];
  param_1[7] = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x0001005652ec();
    } while (extraout_w10_02 != 0);
  }
  lVar1 = param_7[1];
  uVar3 = *param_7;
  param_1[10] = param_7[1];
  param_1[9] = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x0001005652ec();
    } while (extraout_w10_03 != 0);
  }
  FUN_10054f8dc(param_1 + 0xb,param_4);
  FUN_1005532cc(param_1 + 0xe,param_4);
  plVar2 = (long *)*param_8;
  FUN_100565540();
  (**(code **)(*plVar2 + 0x10))(plVar2,auStack_78,0);
  func_0x000100565548();
  param_1[0x1f] = 100;
  *(char *)(param_1 + 0x11) = (char)plVar2;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = param_1 + 0x21;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = param_1 + 0x23;
  param_1[0x24] = param_1 + 0x23;
  param_1[0x26] = 200;
  param_1[0x25] = 0;
  param_1[0x27] = param_1 + 0x28;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = param_1 + 0x2a;
  param_1[0x2b] = param_1 + 0x2a;
  param_1[0x2c] = 0;
  func_0x000100565550(param_1[9]);
  (*extraout_x8)();
  func_0x000100565560();
  param_1[0x2d] = extraout_x8_00;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  return param_1;
}



/* Entry: 100565540; end: 100565573;  */

void FUN_100565540(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c(&stack0x00000008);
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 100565574; end: 10056559b;  */

long FUN_100565574(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10056559c; end: 1005655a3;  */

void FUN_10056559c(void)

{
  return;
}



/* Entry: 1005655a4; end: 10056560f;  */

void FUN_1005655a4(long param_1)

{
  FUN_1005651ac();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100565610; end: 100565687;  */

void FUN_100565610(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100565688; end: 1005656ab;  */

void FUN_100565688(long param_1)

{
  func_0x00010056567c();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 1005656ac; end: 1005656b3;  */

void FUN_1005656ac(void)

{
  return;
}



/* Entry: 1005656b4; end: 1005656fb;  */

void FUN_1005656b4(long param_1)

{
  func_0x00010056567c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005656fc; end: 100565703;  */

void FUN_1005656fc(void)

{
  func_0x00010054f8c8();
  FUN_100292164();
  return;
}



/* Entry: 100565704; end: 10056582b;  */

undefined8 FUN_100565704(undefined8 param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  if (param_3 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
  }
  FUN_10055c568();
  FUN_100450be4();
  return param_1;
}



/* Entry: 10056582c; end: 100565837;  */

undefined8 FUN_10056582c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100565838; end: 10056585b;  */

void FUN_100565838(long param_1)

{
  FUN_10056582c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10056585c; end: 100565863;  */

void FUN_10056585c(void)

{
  return;
}



/* Entry: 100565864; end: 1005658d3;  */

undefined8 FUN_100565864(undefined8 param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  if (param_3 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
  }
  FUN_10055c568();
  FUN_10055c0b4();
  return param_1;
}



/* Entry: 1005658d4; end: 100565a13;  */

undefined8 * FUN_1005658d4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  *param_1 = &PTR_DAT_110a6d1f0;
  lVar5 = *param_2;
  FUN_10002b838(auStack_58,&UNK_10f4ba333);
  FUN_1005549b0(param_1 + 1,lVar5,auStack_58);
  func_0x000107c60ca0(auStack_58);
  lVar5 = *param_2;
  param_1[0xe] = param_2[1];
  param_1[0xd] = lVar5;
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = param_1[0xd];
  uVar2 = *(undefined8 *)(lVar5 + 0xf0);
  lVar5 = *(long *)(lVar5 + 0xf8);
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_68 = uVar2;
  lStack_60 = lVar5;
  FUN_10002b838(&uStack_80,&UNK_10f4ba35b);
  param_1[0xf] = uVar2;
  param_1[0x10] = lVar5;
  uStack_68 = 0;
  lStack_60 = 0;
  param_1[0x12] = uStack_78;
  param_1[0x11] = uStack_80;
  param_1[0x13] = uStack_70;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa2) = 0;
  func_0x000107c60ca0(&uStack_80);
  FUN_10054f94c(&uStack_68);
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  return param_1;
}



/* Entry: 100565a14; end: 100565a3b;  */

long FUN_100565a14(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100565a3c; end: 100565a43;  */

void FUN_100565a3c(void)

{
  return;
}



/* Entry: 100565a44; end: 100565a67;  */

void FUN_100565a44(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 100565a68; end: 100565a6b;  */

void FUN_100565a68(void)

{
  return;
}



/* Entry: 100565a6c; end: 100565ab3;  */

void FUN_100565a6c(long param_1)

{
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100565ab4; end: 100565ad3;  */

void FUN_100565ab4(void)

{
  bool bVar1;
  long *unaff_x26;
  
  bVar1 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
  if (bVar1) {
    *unaff_x26 = *unaff_x26 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100565ad4; end: 1005660f3;  */

undefined8 *
FUN_100565ad4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,undefined4 param_10,undefined4 param_11,undefined8 *param_12,
             undefined8 *param_13)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_1d0 [24];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [40];
  
  param_1[2] = &PTR_DAT_110a6a738;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_DAT_110a6a690;
  param_1[1] = &PTR_DAT_110a6a708;
  FUN_10002b838(auStack_88,&UNK_10f4b308f);
  FUN_1005549b0(param_1 + 5,param_2,auStack_88);
  func_0x000107c60ca0(auStack_88);
  lVar5 = param_3[1];
  uVar7 = *param_3;
  param_1[0x12] = param_3[1];
  param_1[0x11] = uVar7;
  if (lVar5 != 0) {
    do {
      FUN_1005660f4();
    } while (extraout_w10 != 0);
  }
  lVar5 = param_4[1];
  uVar7 = *param_4;
  param_1[0x14] = param_4[1];
  param_1[0x13] = uVar7;
  if (lVar5 != 0) {
    do {
      FUN_1005660f4();
    } while (extraout_w10_00 != 0);
  }
  lVar5 = param_5[1];
  uVar7 = *param_5;
  param_1[0x16] = param_5[1];
  param_1[0x15] = uVar7;
  if (lVar5 != 0) {
    do {
      FUN_1005660f4();
    } while (extraout_w10_01 != 0);
  }
  lVar5 = param_6[1];
  uVar7 = *param_6;
  param_1[0x18] = param_6[1];
  param_1[0x17] = uVar7;
  if (lVar5 != 0) {
    do {
      FUN_1005660f4();
    } while (extraout_w10_02 != 0);
  }
  lVar5 = param_7[1];
  uVar7 = *param_7;
  param_1[0x1a] = param_7[1];
  param_1[0x19] = uVar7;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar5 = param_8[1];
  uVar7 = *param_8;
  param_1[0x1c] = param_8[1];
  param_1[0x1b] = uVar7;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar5 = param_9[1];
  uVar7 = *param_9;
  param_1[0x1e] = param_9[1];
  param_1[0x1d] = uVar7;
  if (lVar5 != 0) {
    do {
      FUN_1005660f4();
    } while (extraout_w10_03 != 0);
  }
  FUN_10054f8dc(param_1 + 0x1f);
  uStack_98 = param_12[1];
  uStack_a0 = *param_12;
  if (param_12[1] != 0) {
    do {
      FUN_1005660f4();
    } while (extraout_w10_04 != 0);
  }
  FUN_10002b838(&uStack_b8,&UNK_10f4b30b1);
  uVar3 = uStack_98;
  uVar7 = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  param_1[0x23] = uVar3;
  param_1[0x22] = uVar7;
  param_1[0x25] = uStack_b0;
  param_1[0x24] = uStack_b8;
  param_1[0x26] = uStack_a8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  *(undefined2 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((long)param_1 + 0x13a) = 0;
  func_0x000107c60ca0();
  FUN_10054f94c(&uStack_a0);
  uStack_c8 = param_12[1];
  uStack_d0 = *param_12;
  if (param_12[1] != 0) {
    do {
      FUN_1005660f4();
    } while (extraout_w10_05 != 0);
  }
  FUN_10002b838(&uStack_e8,&UNK_10f4b30e2);
  uVar3 = uStack_c8;
  uVar7 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  param_1[0x29] = uVar3;
  param_1[0x28] = uVar7;
  param_1[0x2b] = uStack_e0;
  param_1[0x2a] = uStack_e8;
  param_1[0x2c] = uStack_d8;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((long)param_1 + 0x16a) = 0;
  func_0x000107c60ca0();
  FUN_10054f94c(&uStack_d0);
  uStack_f8 = param_12[1];
  uStack_100 = *param_12;
  if (param_12[1] != 0) {
    do {
      FUN_1005660f4();
    } while (extraout_w10_06 != 0);
  }
  FUN_10002b838(&uStack_118,&UNK_10f4b310b);
  uVar3 = uStack_f8;
  uVar7 = uStack_100;
  uStack_100 = 0;
  uStack_f8 = 0;
  param_1[0x2f] = uVar3;
  param_1[0x2e] = uVar7;
  param_1[0x31] = uStack_110;
  param_1[0x30] = uStack_118;
  param_1[0x32] = uStack_108;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  *(undefined2 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((long)param_1 + 0x19a) = 0;
  func_0x000107c60ca0(&uStack_118);
  FUN_10054f94c(&uStack_100);
  uVar7 = *param_12;
  lVar5 = param_12[1];
  uStack_128 = uVar7;
  lStack_120 = lVar5;
  if (lVar5 != 0) {
    do {
      FUN_1005660f4();
    } while (extraout_w10_07 != 0);
  }
  FUN_10002b838(&uStack_140,&UNK_10f4b313b);
  param_1[0x34] = uVar7;
  param_1[0x35] = lVar5;
  uStack_128 = 0;
  lStack_120 = 0;
  param_1[0x37] = uStack_138;
  param_1[0x36] = uStack_140;
  param_1[0x38] = uStack_130;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  *(undefined2 *)(param_1 + 0x39) = 0;
  *(undefined1 *)((long)param_1 + 0x1ca) = 0;
  func_0x000107c60ca0(&uStack_140);
  FUN_10054f94c(&uStack_128);
  uVar7 = *param_12;
  lVar5 = param_12[1];
  uStack_150 = uVar7;
  lStack_148 = lVar5;
  if (lVar5 != 0) {
    do {
      FUN_1005660f4();
    } while (extraout_w10_08 != 0);
  }
  FUN_10002b838(&uStack_168,&UNK_10f4b3163);
  param_1[0x3a] = uVar7;
  param_1[0x3b] = lVar5;
  uStack_150 = 0;
  lStack_148 = 0;
  param_1[0x3d] = uStack_160;
  param_1[0x3c] = uStack_168;
  param_1[0x3e] = uStack_158;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  *(undefined2 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)((long)param_1 + 0x1fa) = 0;
  func_0x000107c60ca0(&uStack_168);
  FUN_10054f94c(&uStack_150);
  uVar7 = *param_12;
  lVar5 = param_12[1];
  uStack_178 = uVar7;
  lStack_170 = lVar5;
  if (lVar5 != 0) {
    do {
      FUN_1005660f4();
    } while (extraout_w10_09 != 0);
  }
  FUN_10002b838(&uStack_190,&UNK_10f4b3187);
  param_1[0x40] = uVar7;
  param_1[0x41] = lVar5;
  uStack_178 = 0;
  lStack_170 = 0;
  param_1[0x43] = uStack_188;
  param_1[0x42] = uStack_190;
  param_1[0x44] = uStack_180;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  *(undefined2 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((long)param_1 + 0x22a) = 0;
  func_0x000107c60ca0(&uStack_190);
  FUN_10054f94c(&uStack_178);
  uVar7 = *param_12;
  lVar5 = param_12[1];
  uStack_1a0 = uVar7;
  lStack_198 = lVar5;
  if (lVar5 != 0) {
    do {
      FUN_1005660f4();
    } while (extraout_w10_10 != 0);
  }
  FUN_10002b838(&uStack_1b8,&UNK_10f4b31b5);
  param_1[0x46] = uVar7;
  param_1[0x47] = lVar5;
  uStack_1a0 = 0;
  lStack_198 = 0;
  param_1[0x49] = uStack_1b0;
  param_1[0x48] = uStack_1b8;
  param_1[0x4a] = uStack_1a8;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  param_1[0x4b] = 0x7fffffff;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  func_0x000100566104();
  FUN_10054f94c(&uStack_1a0);
  lVar5 = param_13[1];
  uVar7 = *param_13;
  param_1[0x4f] = param_13[1];
  param_1[0x4e] = uVar7;
  if (lVar5 != 0) {
    do {
      FUN_1005660f4();
    } while (extraout_w10_11 != 0);
  }
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
  plVar6 = (long *)*param_12;
  FUN_10002b838(auStack_1d0,&UNK_10f4b31e3);
  uVar4 = 0;
  (**(code **)(*plVar6 + 0x18))();
  if ((uVar4 & 1) == 0) {
    plVar6 = (long *)0x1388;
  }
  param_1[0x55] = plVar6;
  func_0x000107c60ca0(auStack_1d0);
  return param_1;
}



/* Entry: 1005660f4; end: 10056610b;  */

void FUN_1005660f4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10056610c; end: 100566207;  */

undefined1  [16] FUN_10056610c(long param_1,undefined1 *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [72];
  
  lVar1 = *(long *)(param_1 + 0x28);
  if ((lVar1 == 0) || (FUN_1004a6058(lVar1,param_2), (int)lVar1 == 0)) {
    if (*(long *)(param_1 + 8) == 0) {
      uVar5 = 0;
      param_2 = (undefined1 *)0x0;
      plVar3 = (long *)0x0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x38);
      func_0x000107c60c94(auStack_90,param_2);
      FUN_1004a60f0();
      lVar1 = 8;
      if (lVar4 != 0) {
        lVar1 = 0x38;
      }
      func_0x0001004a626c();
      func_0x0001004a6274();
      plVar3 = *(long **)(param_1 + lVar1);
      param_2 = auStack_78;
      (**(code **)(*plVar3 + 0x40))(plVar3,param_2);
      uVar5 = (ulong)plVar3 & 0xffffffffffffff00;
      func_0x0001004a6264();
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 0x28);
    plVar2 = plVar3;
    FUN_1004a6058(plVar3,param_2);
    if ((int)plVar2 == 0) {
      param_2 = (undefined1 *)0x0;
      plVar3 = (long *)0x0;
    }
    else {
      func_0x000107c29de0(plVar3,param_2);
    }
    uVar5 = (ulong)plVar3 & 0xffffffffffffff00;
  }
  auVar6._0_8_ = (ulong)plVar3 & 0xff | uVar5;
  auVar6._8_8_ = (ulong)param_2 & 0xff;
  return auVar6;
}



/* Entry: 100566208; end: 100566293; -[SCCircumstanceEngineConfigProvider getIntegerValue:] */

void FUN_100566208(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c5c64c();
  if (lVar1 == 0xc) {
    lVar1 = param_3;
    func_0x000107c4a8c4(param_3);
    func_0x000107c61180();
    func_0x000107c49810(param_1,param_2,lVar1,0);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  else {
    param_1 = 0;
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100566294; end: 1005663f7;  */

void FUN_100566294(long param_1)

{
  func_0x00010055315c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005663f8; end: 100566457;  */

undefined8 FUN_1005663f8(void)

{
  undefined8 in_stack_00000680;
  
  return in_stack_00000680;
}



/* Entry: 100566458; end: 1005664fb;  */

void FUN_100566458(long param_1)

{
  FUN_1005640ac();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 1005664fc; end: 10056650b;  */

void FUN_1005664fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x19;
  long unaff_x21;
  undefined4 *in_stack_00000000;
  undefined4 *in_stack_00000008;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = (undefined8 *)0x108;
  func_0x000107c60e20();
  func_0x0001005529f8();
  *puVar1 = &PTR_DAT_110a76f58;
  puVar1[3] = &PTR_DAT_110a76fa8;
  FUN_1005666a8(&uStack_70,param_2,param_3);
  *(undefined8 *)(unaff_x19 + 0x28) = uStack_68;
  *(undefined8 *)(unaff_x19 + 0x20) = uStack_70;
  func_0x00010056679c();
  FUN_1005666a8(&uStack_70,param_4,param_5);
  *(undefined8 *)(unaff_x19 + 0x38) = uStack_68;
  *(undefined8 *)(unaff_x19 + 0x30) = uStack_70;
  func_0x00010056679c();
  FUN_1005667ec(unaff_x19 + 0x40,*(undefined4 *)(unaff_x21 + 0x18),*(undefined8 *)(unaff_x21 + 0x20)
               );
  FUN_1005667ec(unaff_x19 + 0x68,*(undefined4 *)(unaff_x21 + 0x78),*(undefined8 *)(unaff_x21 + 0x80)
               );
  FUN_1005667ec(unaff_x19 + 0x90,*(undefined4 *)(unaff_x21 + 0x30),*(undefined8 *)(unaff_x21 + 0x38)
               );
  FUN_100566c0c(unaff_x19 + 0xb8,*in_stack_00000000,*(undefined8 *)(in_stack_00000000 + 2));
  FUN_100566c0c(unaff_x19 + 0xe0,*in_stack_00000008,*(undefined8 *)(in_stack_00000008 + 2));
  *param_1 = puVar1 + 3;
  param_1[1] = unaff_x19;
  return;
}



/* Entry: 10056650c; end: 100566693;  */

void FUN_10056650c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9,undefined4 *param_10)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = (undefined8 *)0x108;
  func_0x000107c60e20();
  func_0x0001005529f8();
  *puVar1 = &PTR_DAT_110a76f58;
  puVar1[3] = &PTR_DAT_110a76fa8;
  FUN_1005666a8(&uStack_70,param_2,param_3);
  *(undefined8 *)(unaff_x19 + 0x28) = uStack_68;
  *(undefined8 *)(unaff_x19 + 0x20) = uStack_70;
  func_0x00010056679c();
  FUN_1005666a8(&uStack_70,param_4,param_5);
  *(undefined8 *)(unaff_x19 + 0x38) = uStack_68;
  *(undefined8 *)(unaff_x19 + 0x30) = uStack_70;
  func_0x00010056679c();
  FUN_1005667ec(unaff_x19 + 0x40,*param_6,*(undefined8 *)(param_6 + 2));
  FUN_1005667ec(unaff_x19 + 0x68,*param_7,*(undefined8 *)(param_7 + 2));
  FUN_1005667ec(unaff_x19 + 0x90,*param_8,*(undefined8 *)(param_8 + 2));
  FUN_100566c0c(unaff_x19 + 0xb8,*param_9,*(undefined8 *)(param_9 + 2));
  FUN_100566c0c(unaff_x19 + 0xe0,*param_10,*(undefined8 *)(param_10 + 2));
  *param_1 = puVar1 + 3;
  param_1[1] = unaff_x19;
  return;
}



/* Entry: 100566694; end: 1005666a7;  */

void FUN_100566694(void)

{
  return;
}



/* Entry: 1005666a8; end: 10056672b;  */

long FUN_1005666a8(long param_1,ulong param_2,int param_3)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 uStack_40;
  
  uVar2 = param_2;
  FUN_100566694();
  FUN_10049ffdc();
  FUN_10056675c();
  func_0x0001004a0050(uStack_40);
  *(undefined8 *)(extraout_x8_00 + 0x10) = 0;
  *(undefined ***)(extraout_x8_00 + 0x18) = &PTR_DAT_110a6bfd0;
  *(long *)(extraout_x8_00 + 0x20) = (long)(int)param_2;
  *(undefined8 *)(extraout_x8_00 + 0x28) = 1000;
  *(long *)(extraout_x8_00 + 0x30) = (long)param_3;
  func_0x0001004a005c();
  func_0x00010056678c();
  func_0x0001004a0084(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  if (uVar2 < 0x492492492492493) {
    lVar1 = uVar2 * 0x38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = uVar2;
  lVar1 = param_1;
  FUN_10056672c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10056672c; end: 10056675b;  */

long FUN_10056672c(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x492492492492493) {
    lVar1 = param_2 * 0x38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10056672c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10056675c; end: 100566783;  */

long FUN_10056675c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10056672c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100566784; end: 1005667a7;  */

void FUN_100566784(void)

{
  return;
}



/* Entry: 1005667a8; end: 1005667cf;  */

long FUN_1005667a8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1005667d0; end: 1005667eb;  */

void FUN_1005667d0(void)

{
  return;
}



/* Entry: 1005667ec; end: 100566ad7;  */

void FUN_1005667ec(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  long *plVar7;
  ulong extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long *plVar9;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar10;
  ulong extraout_x9_02;
  long extraout_x9_03;
  long *plVar11;
  long *extraout_x10;
  long *plVar12;
  long *extraout_x10_00;
  long *extraout_x11;
  long *plVar13;
  long *extraout_x11_00;
  long *plVar14;
  long *unaff_x19;
  int *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  int *unaff_x24;
  long unaff_x25;
  long *plVar15;
  long *plVar16;
  
  FUN_1005667d0();
  FUN_100566ad8();
  do {
    uVar5 = (long)unaff_x20 - (long)unaff_x24 < 0;
    bVar6 = unaff_x20 == unaff_x24;
    if (bVar6) {
      return;
    }
    iVar1 = *unaff_x20;
    plVar15 = (long *)(long)iVar1;
    plVar16 = (long *)unaff_x19[1];
    plVar7 = param_3;
    if (plVar16 != (long *)0x0) {
      func_0x000100566b4c();
      if (bVar6) {
        unaff_x22 = (long *)(extraout_x8 & (ulong)plVar15);
      }
      else {
        uVar5 = (long)plVar16 - (long)plVar15 < 0;
        unaff_x22 = plVar15;
        if (plVar16 <= plVar15) {
          uVar10 = 0;
          if (plVar16 != (long *)0x0) {
            uVar10 = (ulong)plVar15 / (ulong)plVar16;
          }
          unaff_x22 = (long *)((long)plVar15 - uVar10 * (long)plVar16);
        }
      }
      plVar9 = *(long **)(*unaff_x19 + (long)unaff_x22 * 8);
      plVar7 = param_3;
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_100566898;
            plVar11 = (long *)plVar9[1];
            if (plVar11 != plVar15) break;
            uVar5 = *(int *)(plVar9 + 2) - iVar1 < 0;
            if (*(int *)(plVar9 + 2) == iVar1) goto LAB_100566a9c;
          }
          if (((ulong)plVar16 & extraout_x8) == 0) {
            plVar11 = (long *)((ulong)plVar11 & extraout_x8);
          }
          else if (plVar16 <= plVar11) {
            uVar10 = 0;
            if (plVar16 != (long *)0x0) {
              uVar10 = (ulong)plVar11 / (ulong)plVar16;
            }
            plVar11 = (long *)((long)plVar11 - uVar10 * (long)plVar16);
          }
          uVar5 = (long)plVar11 - (long)unaff_x22 < 0;
        } while (plVar11 == unaff_x22);
      }
    }
LAB_100566898:
    func_0x000100566b04();
    *plVar7 = 0;
    plVar7[1] = (long)plVar15;
    *(int *)(plVar7 + 2) = iVar1;
    param_3 = plVar7;
    func_0x000100566b0c();
    if ((plVar16 == (long *)0x0) || (FUN_100566bbc(param_1,param_2,(float)plVar16), (bool)uVar5)) {
      func_0x000100566b20();
      bVar4 = (long *)0x2 < plVar16;
      bVar6 = plVar16 == (long *)0x3;
      func_0x00010054f5d8();
      plVar9 = extraout_x8_00;
      if (!bVar4 || bVar6) {
        plVar9 = extraout_x9;
      }
      if ((long)plVar9 - 1U == 0) {
        plVar9 = (long *)0x2;
      }
      else if (((ulong)plVar9 & (long)plVar9 - 1U) != 0) {
        func_0x000107c60c44();
        plVar16 = (long *)unaff_x19[1];
        param_3 = plVar9;
      }
      uVar5 = plVar9 == plVar16;
      if (plVar16 < plVar9) {
LAB_100566908:
        if ((ulong)plVar9 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100566ab4);
          (*pcVar3)();
        }
        func_0x000107c60e20((long)plVar9 << 3);
        param_3 = unaff_x19;
        func_0x000100566b34();
        plVar16 = (long *)0x0;
        unaff_x19[1] = (long)plVar9;
        while (uVar5 = plVar9 == plVar16, !(bool)uVar5) {
          func_0x00010054f608();
          plVar16 = extraout_x9_00;
        }
        plVar16 = plVar9;
        if (*unaff_x23 != 0) {
          func_0x000100566bc8();
          func_0x000100566bdc();
          lVar8 = extraout_x8_01;
          uVar10 = extraout_x9_01;
          plVar11 = extraout_x10;
          plVar13 = extraout_x11;
          while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
            plVar14 = (long *)plVar11[1];
            if (((ulong)plVar9 & uVar10) == 0) {
              plVar14 = (long *)((ulong)plVar14 & uVar10);
            }
            else if (plVar9 <= plVar14) {
              uVar2 = 0;
              if (plVar9 != (long *)0x0) {
                uVar2 = (ulong)plVar14 / (ulong)plVar9;
              }
              plVar14 = (long *)((long)plVar14 - uVar2 * (long)plVar9);
            }
            uVar5 = plVar14 == plVar13;
            if (!(bool)uVar5) {
              if (*(long *)(lVar8 + (long)plVar14 * 8) == 0) {
                *(long **)(lVar8 + (long)plVar14 * 8) = plVar12;
                plVar13 = plVar14;
              }
              else {
                *plVar12 = *plVar11;
                func_0x000107c33914();
                lVar8 = extraout_x8_02;
                uVar10 = extraout_x9_02;
                plVar11 = extraout_x10_00;
                plVar13 = extraout_x11_00;
              }
            }
          }
        }
      }
      else if (plVar9 < plVar16) {
        func_0x000107c33a94();
        if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
          func_0x000107c60c44();
        }
        else {
          func_0x000107c33b28();
          func_0x000107c33c70(unaff_x25 << (extraout_x8_03 & 0x3f));
        }
        if (plVar9 <= param_3) {
          plVar9 = param_3;
        }
        uVar5 = plVar9 == plVar16;
        if (plVar9 < plVar16) {
          if (plVar9 != (long *)0x0) goto LAB_100566908;
          param_3 = unaff_x19;
          func_0x000100566b34();
          unaff_x19[1] = 0;
          plVar16 = (long *)0x0;
        }
        else {
          plVar16 = (long *)unaff_x19[1];
        }
      }
      func_0x000100566b4c();
      if ((bool)uVar5) {
        unaff_x22 = (long *)(extraout_x8_04 & (ulong)plVar15);
      }
      else {
        unaff_x22 = plVar15;
        if (plVar16 <= plVar15) {
          uVar10 = 0;
          if (plVar16 != (long *)0x0) {
            uVar10 = (ulong)plVar15 / (ulong)plVar16;
          }
          unaff_x22 = (long *)((long)plVar15 - uVar10 * (long)plVar16);
        }
      }
    }
    plVar15 = *(long **)(*unaff_x19 + (long)unaff_x22 * 8);
    if (plVar15 == (long *)0x0) {
      func_0x000100566b58();
      if (extraout_x9_03 != 0) {
        plVar15 = *(long **)(extraout_x9_03 + 8);
        if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
          plVar15 = (long *)((ulong)plVar15 & (long)plVar16 - 1U);
        }
        else if (plVar16 <= plVar15) {
          uVar10 = 0;
          if (plVar16 != (long *)0x0) {
            uVar10 = (ulong)plVar15 / (ulong)plVar16;
          }
          plVar15 = (long *)((long)plVar15 - uVar10 * (long)plVar16);
        }
        *(long **)(extraout_x8_05 + (long)plVar15 * 8) = plVar7;
      }
    }
    else {
      *plVar7 = *plVar15;
      *plVar15 = (long)plVar7;
    }
    func_0x000100566b70();
    FUN_100566b98();
LAB_100566a9c:
    unaff_x20 = unaff_x20 + 1;
  } while( true );
}



/* Entry: 100566ad8; end: 100566b97;  */

void FUN_100566ad8(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  return;
}



/* Entry: 100566b98; end: 100566bbb;  */

void FUN_100566b98(long param_1)

{
  func_0x000100566b88();
  if (param_1 != 0) {
    func_0x000107c60e14();
  }
  return;
}



/* Entry: 100566bbc; end: 100566c0b;  */

void FUN_100566bbc(void)

{
  return;
}



/* Entry: 100566c0c; end: 100566ef7;  */

void FUN_100566c0c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  long *plVar7;
  ulong extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long *plVar9;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar10;
  ulong extraout_x9_02;
  long extraout_x9_03;
  long *plVar11;
  long *extraout_x10;
  long *plVar12;
  long *extraout_x10_00;
  long *extraout_x11;
  long *plVar13;
  long *extraout_x11_00;
  long *plVar14;
  long *unaff_x19;
  int *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  int *unaff_x24;
  long unaff_x25;
  long *plVar15;
  long *plVar16;
  
  FUN_1005667d0();
  FUN_100566ad8();
  do {
    uVar5 = (long)unaff_x20 - (long)unaff_x24 < 0;
    bVar6 = unaff_x20 == unaff_x24;
    if (bVar6) {
      return;
    }
    iVar1 = *unaff_x20;
    plVar15 = (long *)(long)iVar1;
    plVar16 = (long *)unaff_x19[1];
    plVar7 = param_3;
    if (plVar16 != (long *)0x0) {
      func_0x000100566b4c();
      if (bVar6) {
        unaff_x22 = (long *)(extraout_x8 & (ulong)plVar15);
      }
      else {
        uVar5 = (long)plVar16 - (long)plVar15 < 0;
        unaff_x22 = plVar15;
        if (plVar16 <= plVar15) {
          uVar10 = 0;
          if (plVar16 != (long *)0x0) {
            uVar10 = (ulong)plVar15 / (ulong)plVar16;
          }
          unaff_x22 = (long *)((long)plVar15 - uVar10 * (long)plVar16);
        }
      }
      plVar9 = *(long **)(*unaff_x19 + (long)unaff_x22 * 8);
      plVar7 = param_3;
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_100566cb8;
            plVar11 = (long *)plVar9[1];
            if (plVar11 != plVar15) break;
            uVar5 = *(int *)(plVar9 + 2) - iVar1 < 0;
            if (*(int *)(plVar9 + 2) == iVar1) goto LAB_100566ebc;
          }
          if (((ulong)plVar16 & extraout_x8) == 0) {
            plVar11 = (long *)((ulong)plVar11 & extraout_x8);
          }
          else if (plVar16 <= plVar11) {
            uVar10 = 0;
            if (plVar16 != (long *)0x0) {
              uVar10 = (ulong)plVar11 / (ulong)plVar16;
            }
            plVar11 = (long *)((long)plVar11 - uVar10 * (long)plVar16);
          }
          uVar5 = (long)plVar11 - (long)unaff_x22 < 0;
        } while (plVar11 == unaff_x22);
      }
    }
LAB_100566cb8:
    func_0x000100566b04();
    *plVar7 = 0;
    plVar7[1] = (long)plVar15;
    *(int *)(plVar7 + 2) = iVar1;
    param_3 = plVar7;
    func_0x000100566b0c();
    if ((plVar16 == (long *)0x0) || (FUN_100566bbc(param_1,param_2,(float)plVar16), (bool)uVar5)) {
      func_0x000100566b20();
      bVar4 = (long *)0x2 < plVar16;
      bVar6 = plVar16 == (long *)0x3;
      func_0x00010054f5d8();
      plVar9 = extraout_x8_00;
      if (!bVar4 || bVar6) {
        plVar9 = extraout_x9;
      }
      if ((long)plVar9 - 1U == 0) {
        plVar9 = (long *)0x2;
      }
      else if (((ulong)plVar9 & (long)plVar9 - 1U) != 0) {
        func_0x000107c60c44();
        plVar16 = (long *)unaff_x19[1];
        param_3 = plVar9;
      }
      uVar5 = plVar9 == plVar16;
      if (plVar16 < plVar9) {
LAB_100566d28:
        if ((ulong)plVar9 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100566ed4);
          (*pcVar3)();
        }
        func_0x000107c60e20((long)plVar9 << 3);
        param_3 = unaff_x19;
        func_0x000107c29cb0();
        plVar16 = (long *)0x0;
        unaff_x19[1] = (long)plVar9;
        while (uVar5 = plVar9 == plVar16, !(bool)uVar5) {
          func_0x00010054f608();
          plVar16 = extraout_x9_00;
        }
        plVar16 = plVar9;
        if (*unaff_x23 != 0) {
          func_0x000100566bc8();
          func_0x000100566bdc();
          lVar8 = extraout_x8_01;
          uVar10 = extraout_x9_01;
          plVar11 = extraout_x10;
          plVar13 = extraout_x11;
          while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
            plVar14 = (long *)plVar11[1];
            if (((ulong)plVar9 & uVar10) == 0) {
              plVar14 = (long *)((ulong)plVar14 & uVar10);
            }
            else if (plVar9 <= plVar14) {
              uVar2 = 0;
              if (plVar9 != (long *)0x0) {
                uVar2 = (ulong)plVar14 / (ulong)plVar9;
              }
              plVar14 = (long *)((long)plVar14 - uVar2 * (long)plVar9);
            }
            uVar5 = plVar14 == plVar13;
            if (!(bool)uVar5) {
              if (*(long *)(lVar8 + (long)plVar14 * 8) == 0) {
                *(long **)(lVar8 + (long)plVar14 * 8) = plVar12;
                plVar13 = plVar14;
              }
              else {
                *plVar12 = *plVar11;
                func_0x000107c33914();
                lVar8 = extraout_x8_02;
                uVar10 = extraout_x9_02;
                plVar11 = extraout_x10_00;
                plVar13 = extraout_x11_00;
              }
            }
          }
        }
      }
      else if (plVar9 < plVar16) {
        func_0x000107c33a94();
        if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
          func_0x000107c60c44();
        }
        else {
          func_0x000107c33b28();
          func_0x000107c33c70(unaff_x25 << (extraout_x8_03 & 0x3f));
        }
        if (plVar9 <= param_3) {
          plVar9 = param_3;
        }
        uVar5 = plVar9 == plVar16;
        if (plVar9 < plVar16) {
          if (plVar9 != (long *)0x0) goto LAB_100566d28;
          param_3 = unaff_x19;
          func_0x000107c29cb0();
          unaff_x19[1] = 0;
          plVar16 = (long *)0x0;
        }
        else {
          plVar16 = (long *)unaff_x19[1];
        }
      }
      func_0x000100566b4c();
      if ((bool)uVar5) {
        unaff_x22 = (long *)(extraout_x8_04 & (ulong)plVar15);
      }
      else {
        unaff_x22 = plVar15;
        if (plVar16 <= plVar15) {
          uVar10 = 0;
          if (plVar16 != (long *)0x0) {
            uVar10 = (ulong)plVar15 / (ulong)plVar16;
          }
          unaff_x22 = (long *)((long)plVar15 - uVar10 * (long)plVar16);
        }
      }
    }
    plVar15 = *(long **)(*unaff_x19 + (long)unaff_x22 * 8);
    if (plVar15 == (long *)0x0) {
      func_0x000100566b58();
      if (extraout_x9_03 != 0) {
        plVar15 = *(long **)(extraout_x9_03 + 8);
        if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
          plVar15 = (long *)((ulong)plVar15 & (long)plVar16 - 1U);
        }
        else if (plVar16 <= plVar15) {
          uVar10 = 0;
          if (plVar16 != (long *)0x0) {
            uVar10 = (ulong)plVar15 / (ulong)plVar16;
          }
          plVar15 = (long *)((long)plVar15 - uVar10 * (long)plVar16);
        }
        *(long **)(extraout_x8_05 + (long)plVar15 * 8) = plVar7;
      }
    }
    else {
      *plVar7 = *plVar15;
      *plVar15 = (long)plVar7;
    }
    func_0x000100566b70();
    func_0x000107c29cb4();
LAB_100566ebc:
    unaff_x20 = unaff_x20 + 1;
  } while( true );
}



/* Entry: 100566ef8; end: 100566eff;  */

void FUN_100566ef8(void)

{
  return;
}



/* Entry: 100566f00; end: 100566f23;  */

void FUN_100566f00(long param_1)

{
  func_0x0001005528ec();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100566f24; end: 100566f7f;  */

void FUN_100566f24(undefined8 param_1)

{
  int extraout_w10;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000100555540();
  if (unaff_x21 != 0) {
    do {
      FUN_1005555a0();
    } while (extraout_w10 != 0);
  }
  func_0x0001005555b0(param_1,&UNK_10f4bd0c4);
  func_0x0001005555b8();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  *(undefined1 *)(unaff_x19 + 0x2c) = 0;
  *(undefined1 *)(unaff_x19 + 0x30) = 0;
  FUN_100562280();
  func_0x0001005555ec();
  return;
}



/* Entry: 100566f80; end: 1005670bf;  */

undefined8 *
FUN_100566f80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a660d0;
  uVar1 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  uVar1 = *param_5;
  param_1[10] = param_5[1];
  param_1[9] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  uVar1 = *param_6;
  param_1[0xc] = param_6[1];
  param_1[0xb] = uVar1;
  *param_6 = 0;
  param_6[1] = 0;
  uVar1 = *param_7;
  param_1[0xe] = param_7[1];
  param_1[0xd] = uVar1;
  *param_7 = 0;
  param_7[1] = 0;
  uVar1 = *param_8;
  param_1[0x10] = param_8[1];
  param_1[0xf] = uVar1;
  *param_8 = 0;
  param_8[1] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  FUN_100566f24(param_1 + 0x16,param_1 + 0xf);
  return param_1;
}



/* Entry: 1005670c0; end: 1005670e7;  */

long FUN_1005670c0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c60d68();
  }
  return param_1;
}



/* Entry: 1005670e8; end: 1005670ef;  */

void FUN_1005670e8(void)

{
  return;
}



/* Entry: 1005670f0; end: 100567117;  */

long FUN_1005670f0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100567118; end: 100567137;  */

void FUN_100567118(void)

{
  return;
}



/* Entry: 100567138; end: 1005671d7;  */

void FUN_100567138(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  func_0x000100567124();
  puVar1 = param_1;
  func_0x0001004a01c8();
  func_0x0001004a01d0();
  *puVar1 = &PTR_DAT_110a770c8;
  if (param_3 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
  }
  uVar3 = param_4[1];
  uVar2 = *param_4;
  if (param_4[1] != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_00 != 0);
  }
  *(undefined8 *)(unaff_x20 + 0x18) = &PTR_DAT_110a6fcc8;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(long *)(unaff_x20 + 0x28) = param_3;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  func_0x00010054fa34();
  FUN_1004b55ac(&stack0x00000010);
  *param_1 = (undefined8 *)(unaff_x20 + 0x18);
  param_1[1] = unaff_x20;
  return;
}



/* Entry: 1005671d8; end: 1005671ff;  */

void FUN_1005671d8(void)

{
  return;
}



/* Entry: 100567200; end: 100567253;  */

void FUN_100567200(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  func_0x0001005671f4();
  FUN_10056726c(auStack_28,param_2);
  FUN_100567fcc();
  FUN_1005689ec(auStack_28);
  return;
}



/* Entry: 100567254; end: 10056726b;  */

void FUN_100567254(void)

{
  return;
}



/* Entry: 10056726c; end: 100567a0f;  */

void FUN_10056726c(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined2 uStack_b8;
  undefined1 uStack_b6;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  FUN_100567254();
  lVar6 = *(long *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = (undefined8 *)0x28;
  func_0x000107c60e20();
  if (lVar6 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10 != 0);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x180);
  uVar7 = *(undefined8 *)(param_1 + 0x178);
  if (*(long *)(param_1 + 0x180) != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_00 != 0);
  }
  *puVar2 = &PTR_DAT_110a721b0;
  puVar2[2] = uVar8;
  puVar2[1] = uVar3;
  uStack_190 = 0;
  uStack_188 = 0;
  puVar2[4] = uVar9;
  puVar2[3] = uVar7;
  uStack_e0 = 0;
  uStack_d8 = 0;
  FUN_100567a2c(&uStack_e0);
  FUN_10054f9c4(&uStack_190);
  FUN_100567a58(&uStack_140,param_1 + 0x148);
  lVar6 = *(long *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0x108;
  func_0x000107c60e20();
  uStack_190 = uVar8;
  uStack_188 = uVar7;
  if (lVar6 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_01 != 0);
  }
  uStack_d8 = *(undefined8 *)(param_1 + 0x40);
  uStack_e0 = *(undefined8 *)(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_02 != 0);
  }
  lStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  lStack_b0 = *(long *)(param_1 + 0xa8);
  if (*(long *)(param_1 + 0xb0) != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_03 != 0);
  }
  uStack_108 = *(undefined8 *)(param_1 + 0x118);
  lStack_100 = *(long *)(param_1 + 0x120);
  if (lStack_100 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_04 != 0);
  }
  uStack_10 = *(undefined8 *)(param_1 + 0x138);
  lStack_8 = *(long *)(param_1 + 0x140);
  if (lStack_8 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_05 != 0);
  }
  uStack_18 = *(undefined8 *)(param_1 + 0x70);
  uStack_20 = *(undefined8 *)(param_1 + 0x68);
  if (*(long *)(param_1 + 0x70) != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_06 != 0);
  }
  uStack_28 = uStack_138;
  uStack_30 = uStack_140;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_38 = *(undefined8 *)(param_1 + 0xa0);
  uStack_40 = *(undefined8 *)(param_1 + 0x98);
  if (*(long *)(param_1 + 0xa0) != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_07 != 0);
  }
  uStack_48 = *(undefined8 *)(param_1 + 0x180);
  uStack_50 = *(undefined8 *)(param_1 + 0x178);
  if (*(long *)(param_1 + 0x180) != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_08 != 0);
  }
  uStack_60 = *(undefined8 *)(param_1 + 0x108);
  puStack_58 = *(undefined8 **)(param_1 + 0x110);
  if (puStack_58 != (undefined8 *)0x0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_09 != 0);
  }
  uStack_70 = *(undefined8 *)(param_1 + 0x1a8);
  lStack_68 = *(long *)(param_1 + 0x1b0);
  if (lStack_68 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_10 != 0);
  }
  uStack_80 = *(undefined8 *)(param_1 + 0x1b8);
  lStack_78 = *(long *)(param_1 + 0x1c0);
  if (lStack_78 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_11 != 0);
  }
  uStack_90 = *(undefined8 *)(param_1 + 0x1c8);
  lStack_88 = *(long *)(param_1 + 0x1d0);
  if (lStack_88 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_12 != 0);
  }
  uStack_f0 = *(undefined8 *)(param_1 + 0x1d8);
  lStack_e8 = *(long *)(param_1 + 0x1e0);
  if (lStack_e8 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_13 != 0);
  }
  uStack_118 = *(undefined8 *)(param_1 + 0x2e8);
  lStack_110 = *(long *)(param_1 + 0x2f0);
  if (lStack_110 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_14 != 0);
  }
  uStack_128 = *(undefined8 *)(param_1 + 0x2d8);
  lStack_120 = *(long *)(param_1 + 0x2e0);
  if (lStack_120 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_15 != 0);
  }
  func_0x000100567a9c(uVar3,&uStack_190,&uStack_e0,&lStack_b0,&uStack_108,&uStack_10,&uStack_20,
                      &uStack_30,&uStack_40,&uStack_50,&uStack_60,&uStack_70,&uStack_80,&uStack_90,
                      &uStack_f0,&uStack_118,&uStack_128);
  FUN_100563770(&uStack_128);
  func_0x000100563450(&uStack_118);
  FUN_100562570(&uStack_f0);
  FUN_100554340(&uStack_90);
  func_0x0001005636ac(&uStack_80);
  FUN_100564088(&uStack_70);
  func_0x000100558934(&uStack_60);
  FUN_100567a2c(&uStack_50);
  FUN_100567ba4(&uStack_40);
  FUN_10054e7c0(&uStack_30);
  FUN_10055c0b4(&uStack_20);
  FUN_100558b18(&uStack_10);
  func_0x00010055890c(&uStack_108);
  FUN_100558bb4(&lStack_b0);
  func_0x00010054fa34(&uStack_e0);
  FUN_10054f9c4(&uStack_190);
  uVar1 = *(undefined1 *)(param_1 + 0x2d4);
  uVar8 = *(undefined8 *)(param_1 + 0x198);
  lVar6 = *(long *)(param_1 + 0x1a0);
  puVar4 = (undefined8 *)0xf8;
  func_0x000107c60e20();
  puVar5 = puVar4;
  uStack_10 = uVar8;
  lStack_8 = lVar6;
  if (lVar6 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_16 != 0);
  }
  uStack_18 = *(undefined8 *)(param_1 + 0x30);
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_17 != 0);
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_18 != 0);
  }
  uStack_38 = *(undefined8 *)(param_1 + 0xe0);
  uStack_40 = *(undefined8 *)(param_1 + 0xd8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_19 != 0);
  }
  uStack_48 = *(undefined8 *)(param_1 + 0xf0);
  uStack_50 = *(undefined8 *)(param_1 + 0xe8);
  if (*(long *)(param_1 + 0xf0) != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_20 != 0);
  }
  uStack_60 = uVar3;
  func_0x000100567bd0();
  *puVar5 = &PTR_DAT_110a72200;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = uVar3;
  uStack_70 = *(undefined8 *)(param_1 + 0x1e8);
  lStack_68 = *(long *)(param_1 + 0x1f0);
  puStack_58 = puVar5;
  if (lStack_68 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_21 != 0);
  }
  uStack_80 = 0;
  lStack_78 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  FUN_10002b838(&lStack_b0,"");
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  uStack_178 = lStack_a8;
  lStack_180 = lStack_b0;
  uStack_170 = uStack_a0;
  lStack_b0 = 0;
  lStack_a8 = 0;
  uStack_a0 = 0;
  uStack_168 = uStack_168 & 0xffffffffff000000;
  uStack_f0 = 0;
  lStack_e8 = 0;
  FUN_10002b838(&uStack_108,"");
  uVar7 = uStack_f8;
  lVar6 = lStack_100;
  uVar8 = uStack_108;
  uStack_f0 = 0;
  lStack_e8 = 0;
  uStack_108 = 0;
  lStack_100 = 0;
  uStack_f8 = 0;
  uStack_b8 = 0;
  uStack_b6 = 0;
  *puVar4 = &PTR_DAT_110a72260;
  puVar4[2] = lStack_8;
  puVar4[1] = uStack_10;
  uStack_10 = 0;
  lStack_8 = 0;
  puVar4[4] = uStack_18;
  puVar4[3] = uStack_20;
  uStack_20 = 0;
  uStack_18 = 0;
  puVar4[6] = uStack_28;
  puVar4[5] = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  puVar4[8] = uStack_38;
  puVar4[7] = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  puVar4[10] = uStack_48;
  puVar4[9] = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar4[0xb] = puVar2;
  puVar4[0xc] = uVar3;
  puVar4[0xd] = puVar5;
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  puVar4[0xf] = lStack_68;
  puVar4[0xe] = uStack_70;
  uStack_70 = 0;
  lStack_68 = 0;
  *(undefined1 *)(puVar4 + 0x10) = uVar1;
  puVar4[0x12] = lStack_78;
  puVar4[0x11] = uStack_80;
  uStack_80 = 0;
  lStack_78 = 0;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  puVar4[0x17] = uStack_170;
  puVar4[0x16] = uStack_178;
  puVar4[0x15] = lStack_180;
  lStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  *(undefined1 *)((long)puVar4 + 0xc2) = uStack_168._2_1_;
  *(undefined2 *)(puVar4 + 0x18) = (undefined2)uStack_168;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  puVar4[0x1d] = uVar7;
  puVar4[0x1c] = lVar6;
  puVar4[0x1b] = uVar8;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  *(undefined1 *)((long)puVar4 + 0xf2) = 0;
  *(undefined2 *)(puVar4 + 0x1e) = 0;
  FUN_1005557d8(&uStack_e0);
  func_0x000107c60ca0(&uStack_108);
  FUN_10054f94c(&uStack_f0);
  FUN_1005557d8(&uStack_190);
  func_0x000107c60ca0(&lStack_b0);
  FUN_10054f94c(&uStack_90);
  FUN_100559070(&uStack_80);
  FUN_100567be4(&uStack_70);
  FUN_100567c10(&uStack_60);
  FUN_1004b55ac(&uStack_50);
  func_0x000100564c18(&uStack_40);
  func_0x00010054fa34(&uStack_30);
  FUN_10054f9c4(&uStack_20);
  func_0x000100567c34(&uStack_10);
  FUN_10054e7c0(&uStack_140);
  uStack_188 = *(undefined8 *)(param_1 + 0x30);
  uStack_190 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_22 != 0);
  }
  uStack_178 = *(undefined8 *)(param_1 + 0xe0);
  lStack_180 = *(undefined8 *)(param_1 + 0xd8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_23 != 0);
  }
  uStack_168 = *(undefined8 *)(param_1 + 0xb0);
  uStack_170 = *(undefined8 *)(param_1 + 0xa8);
  if (*(long *)(param_1 + 0xb0) != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_24 != 0);
  }
  uStack_160 = *(undefined8 *)(param_1 + 0x158);
  lStack_158 = *(long *)(param_1 + 0x160);
  if (lStack_158 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_25 != 0);
  }
  uStack_150 = *(undefined8 *)(param_1 + 0x168);
  lStack_148 = *(long *)(param_1 + 0x170);
  if (lStack_148 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_26 != 0);
  }
  lVar6 = 0x58;
  func_0x000107c60e20();
  FUN_100567ce4(lVar6,&uStack_190);
  *(undefined8 **)(lVar6 + 0x10) = puVar4;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(undefined4 *)(lVar6 + 0x38) = 0x3f800000;
  *(undefined4 *)(lVar6 + 0x40) = 0;
  *(undefined1 *)(lVar6 + 0x44) = 0;
  FUN_10054eaf8(lVar6 + 0x48);
  FUN_10054ec9c(lVar6 + 0x50);
  FUN_10054ed98(&uStack_e0);
  lStack_b0 = lVar6 + 0x48;
  lStack_a8 = lVar6 + 0x50;
  FUN_10054eea8(&lStack_b0,&uStack_e0);
  func_0x00010054ef4c(&uStack_e0);
  *extraout_x8 = lVar6;
  func_0x000100567eb4(&uStack_190);
  return;
}



/* Entry: 100567a10; end: 100567a2b;  */

void FUN_100567a10(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100567a2c; end: 100567a4f;  */

void FUN_100567a2c(long param_1)

{
  func_0x000100567a20();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100567a50; end: 100567a57;  */

void FUN_100567a50(void)

{
  return;
}



/* Entry: 100567a58; end: 100567a93;  */

void FUN_100567a58(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 100567a94; end: 100567ba3;  */

void FUN_100567a94(void)

{
  return;
}



/* Entry: 100567ba4; end: 100567bc7;  */

void FUN_100567ba4(long param_1)

{
  func_0x000100567b98();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100567bc8; end: 100567be3;  */

void FUN_100567bc8(void)

{
  return;
}



/* Entry: 100567be4; end: 100567c07;  */

void FUN_100567be4(long param_1)

{
  func_0x000100567bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100567c08; end: 100567c0f;  */

void FUN_100567c08(void)

{
  return;
}



/* Entry: 100567c10; end: 100567c57;  */

void FUN_100567c10(long param_1)

{
  func_0x000100567a20();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100567c58; end: 100567c67;  */

void FUN_100567c58(void)

{
  return;
}



/* Entry: 100567c68; end: 100567ce3;  */

void FUN_100567c68(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  FUN_100567c58();
  uStack_28 = extraout_x8;
  FUN_100567d34(auStack_40,1);
  FUN_100567e24(lStack_30,param_3);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  FUN_100567e58(auStack_40);
  func_0x000100567e68(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c335c4();
  FUN_100567e58();
  func_0x000107c33558();
  pcStack_48 = FUN_100567ce4;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_100567c68(&uStack_51,puVar2);
  return;
}



/* Entry: 100567ce4; end: 100567d33;  */

void FUN_100567ce4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_100567c68(&uStack_11,param_1);
  return;
}



/* Entry: 100567d34; end: 100567d5b;  */

long FUN_100567d34(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000100567d04();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100567d5c; end: 100567e23;  */

void FUN_100567d5c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100567e24; end: 100567e57;  */

undefined8 * FUN_100567e24(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a708c8;
  param_1[1] = 0;
  func_0x000100567d6c(param_1 + 3);
  return param_1;
}



/* Entry: 100567e58; end: 100567e8f;  */

void FUN_100567e58(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100567e90; end: 100567f17;  */

void FUN_100567e90(long param_1)

{
  func_0x000100567bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100567f18; end: 100567f3f;  */

void FUN_100567f18(void)

{
  return;
}



/* Entry: 100567f40; end: 100567fab;  */

void FUN_100567f40(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000100567f30();
  uStack_28 = extraout_x8;
  FUN_100568108(auStack_40,1);
  FUN_10056863c(uStack_30,param_2);
  FUN_10056867c();
  func_0x000100568694();
  func_0x0001005686a4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3366c();
  func_0x000100568694();
  func_0x000107c33644();
  pcStack_48 = FUN_100567fac;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_100567f40(&uStack_51,uStack_30);
  return;
}



/* Entry: 100567fac; end: 100567fcb;  */

void FUN_100567fac(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_100567f40(&uStack_11,param_1);
  return;
}



/* Entry: 100567fcc; end: 1005680d7;  */

undefined8 * FUN_100567fcc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a72110;
  FUN_100567fac(param_1 + 3,param_2);
  uVar1 = *param_3;
  *param_3 = 0;
  param_1[5] = uVar1;
  FUN_1005686cc(param_1 + 6,param_1 + 3);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = param_1[3];
  FUN_100552b80(uVar1,0x42,&section_100000100);
  lStack_48 = (long)(int)uVar1;
  FUN_1005687d0(auStack_58,&lStack_48);
  FUN_10056898c(param_1 + 7,auStack_58);
  func_0x00010056894c(auStack_58);
  return param_1;
}



/* Entry: 1005680d8; end: 100568107;  */

long FUN_1005680d8(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x5397829cbc14e6) {
    lVar1 = param_2 * 0x310;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1005680d8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100568108; end: 10056812f;  */

long FUN_100568108(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1005680d8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100568130; end: 10056863b;  */

undefined8 * FUN_100568130(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  int extraout_w10_28;
  int extraout_w10_29;
  int extraout_w10_30;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10 != 0);
  }
  FUN_10054f8dc(param_1 + 2,param_2 + 2);
  lVar1 = param_2[6];
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_2[8];
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_01 != 0);
  }
  lVar1 = param_2[10];
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_02 != 0);
  }
  lVar1 = param_2[0xc];
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_03 != 0);
  }
  lVar1 = param_2[0xe];
  uVar2 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_04 != 0);
  }
  lVar1 = param_2[0x10];
  uVar2 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_05 != 0);
  }
  lVar1 = param_2[0x12];
  uVar2 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_06 != 0);
  }
  lVar1 = param_2[0x14];
  uVar2 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_07 != 0);
  }
  lVar1 = param_2[0x16];
  uVar2 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_08 != 0);
  }
  lVar1 = param_2[0x18];
  uVar2 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_09 != 0);
  }
  lVar1 = param_2[0x1a];
  uVar2 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_10 != 0);
  }
  lVar1 = param_2[0x1c];
  uVar2 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_11 != 0);
  }
  lVar1 = param_2[0x1e];
  uVar2 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_12 != 0);
  }
  lVar1 = param_2[0x20];
  uVar2 = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_13 != 0);
  }
  lVar1 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_14 != 0);
  }
  lVar1 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_15 != 0);
  }
  lVar1 = param_2[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_16 != 0);
  }
  lVar1 = param_2[0x28];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_17 != 0);
  }
  lVar1 = param_2[0x2a];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_18 != 0);
  }
  lVar1 = param_2[0x2c];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_19 != 0);
  }
  lVar1 = param_2[0x2e];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_20 != 0);
  }
  lVar1 = param_2[0x30];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_21 != 0);
  }
  lVar1 = param_2[0x32];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_22 != 0);
  }
  lVar1 = param_2[0x34];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_23 != 0);
  }
  lVar1 = param_2[0x36];
  param_1[0x35] = param_2[0x35];
  param_1[0x36] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_24 != 0);
  }
  lVar1 = param_2[0x38];
  param_1[0x37] = param_2[0x37];
  param_1[0x38] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_25 != 0);
  }
  lVar1 = param_2[0x3a];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_26 != 0);
  }
  lVar1 = param_2[0x3c];
  param_1[0x3b] = param_2[0x3b];
  param_1[0x3c] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_27 != 0);
  }
  lVar1 = param_2[0x3e];
  param_1[0x3d] = param_2[0x3d];
  param_1[0x3e] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_28 != 0);
  }
  func_0x0001004a6628(param_1 + 0x3f,param_2 + 0x3f);
  param_1[0x5b] = param_2[0x5b];
  lVar1 = param_2[0x5c];
  param_1[0x5c] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_29 != 0);
  }
  param_1[0x5d] = param_2[0x5d];
  lVar1 = param_2[0x5e];
  param_1[0x5e] = lVar1;
  if (lVar1 != 0) {
    do {
      FUN_100567a10();
    } while (extraout_w10_30 != 0);
  }
  return param_1;
}



/* Entry: 10056863c; end: 10056867b;  */

undefined8 * FUN_10056863c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a72488;
  FUN_100568130(param_1 + 3);
  return param_1;
}



/* Entry: 10056867c; end: 1005686cb;  */

void FUN_10056867c(void)

{
  long *unaff_x19;
  long in_stack_00000010;
  
  *unaff_x19 = in_stack_00000010 + 0x18;
  unaff_x19[1] = in_stack_00000010;
  return;
}


