/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104887b88; end: 104887beb;  */

/* WARNING: Removing unreachable block (ram,0x000104887bbc) */

void FUN_104887b88(void)

{
  long unaff_x22;
  
  func_0x0001031acf04(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                      unaff_x22 + 0x10);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000104887be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104887bec; end: 104887c3f;  */

void FUN_104887bec(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  plVar6 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_104887c40;
  plVar6[3] = param_1;
  uVar7 = *(undefined8 *)(*param_2 + 0x50);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0;
  __ss6ResultOMa(0,uVar7,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar6[4] = lVar3;
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[5] = uVar4;
  plVar5 = (long *)0x60;
  _swift_task_alloc();
  plVar6[6] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_104887b40;
  plVar5[2] = uVar4;
  plVar5[3] = (long)param_2;
  uVar7 = *(undefined8 *)(*param_2 + 0x50);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0xff;
  __ss6ResultOMa(0xff,uVar7,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar5[4] = lVar3;
  lVar1 = 0;
  __sSqMa(0,lVar3);
  plVar5[5] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar5[6] = lVar1;
  uVar4 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[7] = uVar4;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[8] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[9] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104887814,0,0);
  return;
}



/* Entry: 104887c40; end: 104887cb7;  */

void FUN_104887c40(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104887c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104887cb8; end: 104887d1b;  */

void FUN_104887cb8(undefined8 param_1,long *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar2 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_104887d1c;
  plVar2[2] = (long)param_2;
  lVar5 = *(long *)(*param_2 + 0x50);
  plVar2[3] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar2[4] = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3,param_4);
  plVar2[5] = uVar3;
  iVar1 = *param_3;
  plVar4 = (long *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  plVar2[6] = (long)plVar4;
  *plVar4 = (long)plVar2;
  plVar4[1] = (long)FUN_104887e9c;
                    /* WARNING: Could not recover jumptable at 0x000104887e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(plVar4,uVar3);
  return;
}



/* Entry: 104887d1c; end: 104887d57;  */

void FUN_104887d1c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104887d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104887d58; end: 104887dc3;  */

void FUN_104887d58(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  
  plVar6 = *(long **)(unaff_x20 + 0x10);
  piVar2 = *(int **)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_104887dc4;
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  plVar4[2] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_104887d1c;
  plVar3[2] = (long)plVar6;
  lVar7 = *(long *)(*plVar6 + 0x50);
  plVar3[3] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar3[4] = lVar7;
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5,uVar8);
  plVar3[5] = uVar5;
  iVar1 = *piVar2;
  plVar6 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  plVar3[6] = (long)plVar6;
  *plVar6 = (long)plVar3;
  plVar6[1] = (long)FUN_104887e9c;
                    /* WARNING: Could not recover jumptable at 0x000104887e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar6,uVar5);
  return;
}



/* Entry: 104887dc4; end: 104887dff;  */

void FUN_104887dc4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000104887dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 104887e00; end: 104887e9b;  */

void FUN_104887e00(int *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x22;
  
  *(long **)(unaff_x22 + 0x10) = unaff_x20;
  lVar4 = *(long *)(*unaff_x20 + 0x50);
  *(long *)(unaff_x22 + 0x18) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  iVar1 = *param_1;
  plVar3 = (long *)(ulong)(uint)param_1[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_104887e9c;
                    /* WARNING: Could not recover jumptable at 0x000104887e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_1))(plVar3,uVar2);
  return;
}



/* Entry: 104887e9c; end: 104887ef7;  */

void FUN_104887e9c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_104887ef8;
  }
  else {
    pcVar1 = FUN_104887f50;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 104887ef8; end: 104887f4f;  */

void FUN_104887ef8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000100b60084(uVar2);
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000104887f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104887f50; end: 104887f97;  */

void FUN_104887f50(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  FUN_10488ade0(uVar1);
  _swift_errorRelease(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000104887f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 104887f98; end: 10488809f;  */

undefined8
FUN_104887f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10,code *param_11)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000100759d7c(0,*(undefined8 *)(unaff_x20 + 0x50));
  lVar1 = 0;
  func_0x000100759dd0();
  _swift_allocObject(param_9,0x28,7);
  *(long *)(param_9 + 0x10) = lVar1;
  *(undefined8 *)(param_9 + 0x18) = param_7;
  *(undefined8 *)(param_9 + 0x20) = param_8;
  _swift_retain(lVar1);
  _swift_retain(param_8);
  (*param_11)(param_1,param_2,param_3,param_4,param_5,param_6,param_10,param_9,
              PTR___sytN_11034f1b0 + 8);
  _swift_release(param_9);
  _swift_release(param_1);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  _swift_retain(uVar2);
  _swift_release(lVar1);
  return uVar2;
}



/* Entry: 1048880a0; end: 104888103;  */

void FUN_1048880a0(undefined8 param_1,long *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x104888138;
  plVar4[2] = (long)param_2;
  lVar5 = *(long *)(*param_2 + 0x50);
  plVar4[3] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[4] = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar2,param_4);
  plVar4[5] = uVar2;
  iVar1 = *param_3;
  plVar3 = (long *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  plVar4[6] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_104887e9c;
                    /* WARNING: Could not recover jumptable at 0x000104887e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(plVar3,uVar2);
  return;
}



/* Entry: 104888104; end: 10488812f;  */

void FUN_104888104(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 104888130; end: 10488813b;  */

void FUN_104888130(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar4 = 0;
  __ss6ResultOMa(0,uVar1,uVar3,PTR___ss5ErrorWS_11034ee10);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (**(code **)(extraout_x8 + 0x10))(&stack0xffffffffffffffd0 + -extraout_x12,param_1,uVar4);
  func_0x000103969044(&stack0xffffffffffffffd0 + -extraout_x12,uVar2,uVar4);
  return;
}



/* Entry: 10488813c; end: 1048882d3;  */

undefined8 * FUN_10488813c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 auStack_90 [2];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_58;
  
  lVar1 = param_1;
  __sSa5countSivg();
  uVar9 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar2 = 0xff;
  __sSaMa(0xff,uVar9);
  if (lVar1 < 1) {
    func_0x000100759bc0(0,uVar2);
    uVar2 = 0;
    __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar9);
    puVar8 = auStack_90;
    auStack_90[0] = uVar2;
    FUN_104888f7c(puVar8);
    _swift_bridgeObjectRelease(uVar2);
  }
  else {
    func_0x000100759d7c(0);
    lVar3 = 0;
    func_0x000100759dd0();
    uVar2 = 0;
    func_0x00010006a340();
    _swift_allocObject();
    func_0x00010006a360();
    puVar4 = &UNK_1107abc40;
    _swift_allocObject(&UNK_1107abc40,0x18,7);
    uVar5 = 0;
    __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar9);
    *(undefined8 *)(puVar4 + 0x10) = uVar5;
    puVar6 = &UNK_1107abc68;
    _swift_allocObject(&UNK_1107abc68,0x18,7);
    *(long *)(puVar6 + 0x10) = lVar1;
    uVar9 = 0;
    puStack_80 = puVar6;
    uStack_78 = uVar2;
    puStack_70 = puVar4;
    lStack_68 = lVar3;
    lStack_58 = param_1;
    __sSaMa(0);
    puVar7 = PTR___sSayxGSTsMc_11034dd08;
    _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar9);
    __sSTsE7forEachyyy7ElementQzKXEKF(FUN_104888984,auStack_90,uVar9,puVar7);
    _swift_release(uVar2);
    puVar8 = *(undefined8 **)(lVar3 + 0x10);
    _swift_retain(puVar8);
    _swift_release(lVar3);
    _swift_release(puVar4);
    _swift_release(puVar6);
  }
  return puVar8;
}



/* Entry: 1048882d4; end: 104888487;  */

void FUN_1048882d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *param_5;
  puVar1 = &UNK_1107abcb8;
  _swift_allocObject(&UNK_1107abcb8,0x20,7);
  uVar4 = *(undefined8 *)(*(long *)(lVar5 + 0x50) + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  _swift_retain(param_2);
  uVar2 = 0;
  func_0x000100759f5c(0,1,0x1048889e8,puVar1,uVar4);
  _swift_release(puVar1);
  puVar1 = &UNK_1107abce0;
  _swift_allocObject(&UNK_1107abce0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(long **)(puVar1 + 0x28) = param_5;
  _swift_retain(param_2);
  _swift_retain(param_3);
  _swift_retain(param_4);
  _swift_retain(param_5);
  uVar4 = 0;
  func_0x000100775264(0,1,FUN_104888a00,puVar1,PTR___sytN_11034f1b0 + 8);
  _swift_release(uVar2);
  _swift_release(puVar1);
  puVar1 = &UNK_1107abd08;
  _swift_allocObject(&UNK_1107abd08,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(long **)(puVar1 + 0x20) = param_5;
  puVar3 = &UNK_1107abd30;
  _swift_allocObject(&UNK_1107abd30,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_104888a58;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  _swift_retain(param_2);
  _swift_retain(param_3);
  _swift_retain(param_5);
  _swift_retain(puVar1);
  FUN_10488ae00(0,1,FUN_104888ab8,puVar3);
  _swift_release(uVar4);
  _swift_release(puVar1);
  _swift_release(puVar3);
  return;
}



/* Entry: 104888488; end: 104888523;  */

void FUN_104888488(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_58,0,0);
  lVar2 = *(long *)(param_4 + -8);
  bVar1 = *(long *)(param_3 + 0x10) == 0;
  if (!bVar1) {
    (**(code **)(lVar2 + 0x10))(param_1,param_2,param_4);
  }
  (**(code **)(lVar2 + 0x38))(param_1,bVar1,1,param_4);
  return;
}



/* Entry: 104888524; end: 104888637;  */

void FUN_104888524(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  code *pcVar1;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(*param_4 + 0x50);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x10) + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _swift_beginAccess(param_1,auStack_58,0x21,0);
  __sSa6appendyyxnF(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  _swift_endAccess(auStack_58);
  _swift_beginAccess(param_3,auStack_58,1,0);
  lVar3 = *param_3 + -1;
  if (!SBORROW8(*param_3,1)) {
    *param_3 = lVar3;
    if (lVar3 == 0) {
      _swift_beginAccess(param_1,auStack_70,0,0);
      uVar2 = *param_1;
      uStack_78 = uVar2;
      _swift_bridgeObjectRetain(uVar2);
      func_0x000100b60084(&uStack_78);
      _swift_bridgeObjectRelease(uVar2);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104888638);
  (*pcVar1)();
}



/* Entry: 104888638; end: 1048886ab;  */

void FUN_104888638(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1,auStack_48,0,0);
  if (*param_1 != 0) {
    _swift_beginAccess(param_1,auStack_60,1,0);
    *param_1 = 0;
    FUN_10488ade0(param_3);
  }
  return;
}



/* Entry: 1048886ac; end: 104888867;  */

void FUN_1048886ac(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long extraout_x8;
  long lVar10;
  long *unaff_x20;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  uVar12 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar2 = 0x112d393f0;
  uStack_88 = param_1;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar3 = 0xff;
  __ss6ResultOMa(0xff,uVar12,uVar2,PTR___ss5ErrorWS_11034ee10);
  lVar4 = 0;
  lVar9 = lVar3;
  __sSqMa(0,lVar3);
  lStack_80 = *(long *)(lVar4 + -8);
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_80 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar11 = auStack_90 + -extraout_x8;
  _dispatch_group_create();
  _dispatch_group_enter();
  lVar6 = lVar4;
  _swift_allocBox();
  lVar10 = *(long *)(lVar3 + -8);
  (**(code **)(lVar10 + 0x38))(lVar9,1,1,lVar3);
  puVar7 = &UNK_1107abc90;
  _swift_allocObject(&UNK_1107abc90,0x28,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar12;
  *(long *)(puVar7 + 0x18) = lVar6;
  *(long *)(puVar7 + 0x20) = lVar5;
  _swift_retain(lVar6);
  _objc_retain(lVar5);
  func_0x00010075a04c(0,1,FUN_104888af8,puVar7);
  _swift_release(puVar7);
  __sSo17OS_dispatch_groupC8DispatchE4waityyF();
  _swift_beginAccess(lVar9,auStack_78,0,0);
  (**(code **)(lStack_80 + 0x10))(puVar11,lVar9,lVar4);
  puVar8 = puVar11;
  (**(code **)(lVar10 + 0x30))(puVar11,1,lVar3);
  if ((int)puVar8 != 1) {
    _objc_release(lVar5);
    (**(code **)(lVar10 + 0x20))(uStack_88,puVar11,lVar3);
    _swift_release(lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104888868);
  (*pcVar1)();
}



/* Entry: 104888868; end: 104888983;  */

void FUN_104888868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0xff;
  __ss6ResultOMa(0xff,param_4,uVar1,PTR___ss5ErrorWS_11034ee10);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_70 + -extraout_x8;
  _swift_projectBox(param_2);
  lVar6 = *(long *)(lVar2 + -8);
  (**(code **)(lVar6 + 0x10))(puVar4,param_1,lVar2);
  (**(code **)(lVar6 + 0x38))(puVar4,0,1,lVar2);
  _swift_beginAccess(param_2,auStack_68,1,0);
  (**(code **)(lVar5 + 0x28))(param_2,puVar4,lVar3);
  _dispatch_group_leave(param_3);
  return;
}



/* Entry: 104888984; end: 1048889ff;  */

void FUN_104888984(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1048882d4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 104888a00; end: 104888a57;  */

void FUN_104888a00(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x28);
  lStack_40 = *(long *)(unaff_x20 + 0x18) + 0x10;
  lStack_30 = *(long *)(unaff_x20 + 0x20) + 0x10;
  uStack_38 = param_1;
  func_0x000100087bd4(0x104888adc,auStack_50,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 104888a58; end: 104888ab7;  */

void FUN_104888a58(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x20);
  lStack_50 = *(long *)(unaff_x20 + 0x18) + 0x10;
  uStack_40 = param_1;
  func_0x000100087bd4(*(undefined8 *)(unaff_x20 + 0x10),FUN_104888ac0,auStack_60,
                      PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 104888ab8; end: 104888abf;  */

void FUN_104888ab8(undefined8 *param_1)

{
  long unaff_x20;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    (**(code **)(unaff_x20 + 0x10))
              (*param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  }
  return;
}



/* Entry: 104888ac0; end: 104888af7;  */

void FUN_104888ac0(void)

{
  long unaff_x20;
  
  FUN_104888638(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 104888af8; end: 104888afb;  */

void FUN_104888af8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_104888868(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104888afc; end: 104888eeb;  */

undefined8
FUN_104888afc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long extraout_x13_00;
  long unaff_x20;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  lStack_e8 = *(long *)(param_7 + -8);
  uStack_c0 = param_5;
  uStack_b8 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_e0 = auStack_110 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)(auStack_110 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lStack_f0 = lVar8;
  lStack_d8 = extraout_x13_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_00;
  lVar3 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  _swift_initStackObject();
  uVar4 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined1 *)(lVar3 + 0x28) = 0xff;
  *(undefined **)(lVar3 + 0x30) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(lVar3 + 0x10) = 0;
  func_0x00010006c804();
  FUN_1048890b4(0,0);
  puVar5 = &UNK_1107abd58;
  _swift_allocObject(&UNK_1107abd58,0x28,7);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(puVar5 + 0x10) = uVar4;
  *(long *)(puVar5 + 0x18) = param_7;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  puVar6 = &UNK_1107abd80;
  _swift_allocObject(&UNK_1107abd80,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar4;
  *(long *)(puVar6 + 0x18) = param_7;
  *(code **)(puVar6 + 0x20) = FUN_1048899a4;
  *(undefined **)(puVar6 + 0x28) = puVar5;
  _swift_retain(param_4);
  uStack_c4 = (uint)param_2;
  uStack_f8 = uVar4;
  uStack_d0 = param_1;
  FUN_1048898b8(param_1,param_2,FUN_1048899c0,puVar6,uVar4);
  _swift_release(puVar6);
  _swift_setDeallocating(lVar3);
  _swift_release(*(undefined8 *)(lVar3 + 0x18));
  func_0x0001013b25f8(*(undefined8 *)(lVar3 + 0x20),*(undefined1 *)(lVar3 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x30));
  lVar12 = param_3;
  __sSa8endIndexSivg(param_3,param_7);
  lVar3 = lStack_f0;
  uVar4 = uStack_f8;
  if (lVar12 != 0) {
    lVar12 = 0;
    lStack_108 = lVar8;
    lStack_100 = param_3;
    do {
      __sSayxSicig(lVar8,lVar12,param_3,param_7);
      lVar7 = lStack_e8;
      if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x104888e28);
        (*pcVar10)();
      }
      pcVar10 = *(code **)(lStack_e8 + 0x20);
      uStack_b0 = param_1;
      lStack_a8 = lVar12 + 1;
      (*pcVar10)(lVar3,lVar8,param_7);
      puVar1 = puStack_e0;
      (**(code **)(lVar7 + 0x10))(puStack_e0,lVar3,param_7);
      uVar9 = (ulong)*(byte *)(lVar7 + 0x50);
      uVar11 = uVar9 + 0x30 & (uVar9 ^ 0xffffffffffffffff);
      puVar5 = &UNK_1107abda8;
      _swift_allocObject(&UNK_1107abda8,uVar11 + lStack_d8,uVar9 | 7);
      uVar2 = uStack_b8;
      lVar8 = lStack_108;
      *(undefined8 *)(puVar5 + 0x10) = uVar4;
      *(long *)(puVar5 + 0x18) = param_7;
      *(undefined8 *)(puVar5 + 0x20) = uStack_c0;
      *(undefined8 *)(puVar5 + 0x28) = uStack_b8;
      (*pcVar10)(puVar5 + uVar11,puVar1,param_7);
      _swift_retain(uVar2);
      uVar2 = uStack_b0;
      param_1 = uStack_d0;
      FUN_1048898b8(uStack_d0,uStack_c4 & 1,FUN_10488a6a4,puVar5,uVar4);
      _swift_release(uVar2);
      param_3 = lStack_100;
      _swift_release(puVar5);
      (**(code **)(lVar7 + 8))(lVar3,param_7);
      lVar7 = param_3;
      __sSa8endIndexSivg(param_3,param_7);
      lVar12 = lVar12 + 1;
    } while (lStack_a8 != lVar7);
  }
  return param_1;
}



/* Entry: 104888eec; end: 104888f7b;  */

void FUN_104888eec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar2 = 0xff;
  __ss6ResultOMa(0xff,uVar3,uVar1,PTR___ss5ErrorWS_11034ee10);
  __sSqMa(0,uVar2);
  func_0x000100087bd4(param_1,0x10488a6fc);
  return;
}



/* Entry: 104888f7c; end: 104888fbf;  */

undefined8 FUN_104888f7c(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  func_0x000100759e68(0);
  func_0x000100b5ff9c(param_1);
  return unaff_x20;
}



/* Entry: 104888fc0; end: 10488904b;  */

void FUN_104888fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  puVar1 = &UNK_1107abe48;
  _swift_allocObject(&UNK_1107abe48,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  _swift_retain(param_4);
  func_0x00010075a04c(param_1,param_2,FUN_10488a714,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10488904c; end: 10488908f;  */

undefined8 FUN_10488904c(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  func_0x000100759e68(0);
  FUN_104889324(param_1);
  return unaff_x20;
}



/* Entry: 104889090; end: 1048890b3;  */

void FUN_104889090(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1048890b4; end: 104889323;  */

void FUN_1048890b4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_88,1,0);
  if (*(char *)(unaff_x20 + 0x28) == -1) {
    _swift_beginAccess(unaff_x20 + 0x30,auStack_a0,1,0);
    lVar9 = *(long *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x20) = param_1;
    uVar3 = (undefined1)param_2;
    *(undefined1 *)(unaff_x20 + 0x28) = uVar3;
    *(undefined **)(unaff_x20 + 0x30) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100fabc04(param_1,param_2);
    func_0x000100070bfc();
    lVar8 = *(long *)(lVar9 + 0x10);
    if (lVar8 != 0) {
      pbVar10 = (byte *)(lVar9 + 0x38);
      uStack_b0 = param_1;
      uStack_a8 = uVar3;
      do {
        pcVar1 = *(code **)(pbVar10 + -0x18);
        uVar2 = *(undefined8 *)(pbVar10 + -0x10);
        lVar7 = *(long *)(pbVar10 + -8);
        if (lVar7 == 0) {
          _swift_retain(uVar2);
          (*pcVar1)(&uStack_b0);
LAB_1048892e4:
          _swift_release(uVar2);
        }
        else {
          if ((*pbVar10 & 1) == 0) {
            lVar6 = lVar7;
            _swift_getObjectType(lVar7);
            puVar4 = &UNK_1107ac290;
            _swift_allocObject(&UNK_1107ac290,0x29,7);
            *(code **)(puVar4 + 0x10) = pcVar1;
            *(undefined8 *)(puVar4 + 0x18) = uVar2;
            *(undefined8 *)(puVar4 + 0x20) = param_1;
            puVar4[0x28] = uVar3;
            _swift_retain_n(uVar2,2);
            _swift_unknownObjectRetain_n(lVar7,2);
            func_0x000100fabc04(param_1,param_2);
            func_0x00010090569c(0x10488ad88,puVar4,lVar6);
            _swift_release(puVar4);
            _swift_unknownObjectRelease_n(lVar7,2);
            goto LAB_1048892e4;
          }
          puVar4 = &UNK_1107ac2b8;
          _swift_allocObject(&UNK_1107ac2b8,0x29,7);
          *(code **)(puVar4 + 0x10) = pcVar1;
          *(undefined8 *)(puVar4 + 0x18) = uVar2;
          *(undefined8 *)(puVar4 + 0x20) = param_1;
          puVar4[0x28] = uVar3;
          pcStack_c0 = FUN_10488adc4;
          puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_d8 = 0x42000000;
          puStack_d0 = &UNK_1000f6b44;
          puStack_c8 = &UNK_1107ac2d0;
          ppuVar5 = &puStack_e0;
          puStack_b8 = puVar4;
          __Block_copy(ppuVar5);
          puVar4 = puStack_b8;
          _swift_retain(uVar2);
          _swift_unknownObjectRetain(lVar7);
          func_0x000100fabc04(param_1,param_2);
          _swift_retain(uVar2);
          _swift_unknownObjectRetain(lVar7);
          _swift_release(puVar4);
          func_0x000100c00c0c(lVar7,ppuVar5);
          _swift_unknownObjectRelease_n(lVar7,2);
          _swift_release(uVar2);
          __Block_release(ppuVar5);
        }
        pbVar10 = pbVar10 + 0x20;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    _swift_bridgeObjectRelease(lVar9);
  }
  else {
    func_0x000100070bfc();
  }
  return;
}



/* Entry: 104889324; end: 1048893f7;  */

void FUN_104889324(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x20;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  __ss6ResultOMa(0,uVar3,uVar1,PTR___ss5ErrorWS_11034ee10);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffc0 + -extraout_x8);
  func_0x00010006c804();
  *puVar4 = param_1;
  _swift_storeEnumTagMultiPayload(puVar4,lVar2,1);
  _swift_errorRetain(param_1);
  func_0x000100b600a4(puVar4);
  (**(code **)(lVar5 + 8))(puVar4,lVar2);
  return;
}



/* Entry: 1048893f8; end: 104889497;  */

undefined8
FUN_1048893f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &UNK_1107abe70;
  _swift_allocObject(&UNK_1107abe70,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  _swift_retain(param_4);
  FUN_104889654(param_1,param_2,FUN_10488a7b0,puVar1);
  _swift_release(puVar1);
  return param_1;
}



/* Entry: 104889498; end: 104889653;  */

void FUN_104889498(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = *(long *)(param_5 + -8);
  lVar2 = param_4;
  lVar8 = param_5;
  uStack_70 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar7 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar7 - extraout_x12;
  lVar1 = 0;
  uStack_68 = param_6;
  __ss6ResultOMa(0,lVar2,lVar8,param_6);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar5 - extraout_x8_00;
  (*param_2)(lVar8);
  lVar2 = lVar8;
  _swift_getEnumCaseMultiPayload(lVar8,lVar1);
  if ((int)lVar2 == 1) {
    pcVar4 = *(code **)(lVar6 + 0x20);
    (*pcVar4)(lVar5,lVar8,param_5);
    (**(code **)(lVar6 + 0x10))(lVar7,lVar5,param_5);
    uVar3 = uStack_68;
    lVar2 = lVar7;
    __ss24_getErrorEmbeddedNSErroryyXlSgxs0B0RzlF(lVar7,param_5,uStack_68);
    if (lVar2 == 0) {
      _swift_allocError(param_5,uVar3,0,0);
      (*pcVar4)(uVar3,lVar7,param_5);
    }
    else {
      (**(code **)(lVar6 + 8))(lVar7,param_5);
    }
    _swift_willThrow();
    (**(code **)(lVar6 + 8))(lVar5,param_5);
  }
  else {
    (**(code **)(*(long *)(param_4 + -8) + 0x20))(uStack_70,lVar8,param_4);
  }
  return;
}



/* Entry: 104889654; end: 104889893;  */

undefined8
FUN_104889654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = 0x112d51a30;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  _swift_initStackObject();
  uVar2 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined1 *)(lVar1 + 0x28) = 0xff;
  *(undefined **)(lVar1 + 0x30) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(lVar1 + 0x10) = 0;
  func_0x00010006c804();
  FUN_1048890b4(0,0);
  puVar3 = &UNK_1107abe98;
  _swift_allocObject(&UNK_1107abe98,0x28,7);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  _swift_retain(param_4);
  func_0x000100759f70(param_1,param_2,FUN_10488a7d0,puVar3,uVar2,&UNK_1107abe20,&UNK_100b614bc);
  _swift_release(puVar3);
  _swift_setDeallocating(lVar1);
  _swift_release(*(undefined8 *)(lVar1 + 0x18));
  func_0x0001013b25f8(*(undefined8 *)(lVar1 + 0x20),*(undefined1 *)(lVar1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x30));
  return param_1;
}



/* Entry: 104889894; end: 1048898b7;  */

void FUN_104889894(void)

{
  long unaff_x21;
  
  FUN_10488ad48();
  if (unaff_x21 != 0) {
    return;
  }
  _swift_retain();
  return;
}



/* Entry: 1048898b8; end: 1048899a3;  */

undefined8
FUN_1048898b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = *unaff_x20;
  func_0x000100759d7c(0,param_5);
  lVar1 = 0;
  func_0x000100759dd0();
  puVar2 = &UNK_1107abee8;
  _swift_allocObject(&UNK_1107abee8,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(lVar4 + 0x50);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  puVar2[0x30] = (char)param_2;
  *(long *)(puVar2 + 0x38) = lVar1;
  _swift_unknownObjectRetain(param_1);
  _swift_retain(lVar1);
  _swift_retain(param_4);
  func_0x00010075a04c(param_1,param_2,FUN_10488a80c,puVar2);
  _swift_release(puVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  _swift_retain(uVar3);
  _swift_release(lVar1);
  return uVar3;
}



/* Entry: 1048899a4; end: 1048899bf;  */

void FUN_1048899a4(void)

{
  long unaff_x20;
  
  FUN_10488ad84(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1048899c0; end: 1048899e7;  */

void FUN_1048899c0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))();
  return;
}



/* Entry: 1048899e8; end: 104889a8b;  */

undefined1 *
FUN_1048899e8(undefined8 param_1,undefined8 param_2,code *param_3,undefined1 *param_4,long param_5)

{
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  puVar1 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*param_3)(puVar1);
  if (unaff_x21 == 0) {
    func_0x000100759bc0(0,param_5);
    param_4 = puVar1;
    FUN_104888f7c(puVar1);
    (**(code **)(lVar2 + 8))(puVar1,param_5);
  }
  return param_4;
}



/* Entry: 104889a8c; end: 104889b5b;  */

undefined8
FUN_104889a8c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_3;
  puVar1 = &UNK_1107abf10;
  _swift_allocObject(&UNK_1107abf10,0x48,7);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(lVar3 + 0x50);
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  puVar1[0x30] = (char)param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_6);
  _swift_retain(param_4);
  FUN_1048898b8(param_1,param_2,FUN_10488a820,puVar1,uVar2);
  _swift_release(puVar1);
  return param_1;
}



/* Entry: 104889b5c; end: 104889c83;  */

undefined8
FUN_104889b5c(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  lVar5 = *param_2;
  lVar6 = *(long *)(param_8 + -8);
  lVar7 = *(long *)(lVar6 + 0x40);
  uStack_78 = param_5;
  uStack_70 = param_3;
  uStack_64 = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_1,param_1);
  (**(code **)(lVar6 + 0x10))(auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0));
  uVar3 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar4 = uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff);
  puVar1 = &UNK_1107ac1f0;
  _swift_allocObject(&UNK_1107ac1f0,uVar4 + lVar7,uVar3 | 7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  *(long *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = *(undefined8 *)(lVar5 + 0x50);
  *(undefined8 *)(puVar1 + 0x28) = uStack_78;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  (**(code **)(lVar6 + 0x20))
            (puVar1 + uVar4,auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_8);
  _swift_retain(param_6);
  uVar2 = uStack_70;
  FUN_1048898b8(uStack_70,uStack_64,FUN_10488ad08,puVar1,param_7);
  _swift_release(puVar1);
  return uVar2;
}



/* Entry: 104889c84; end: 104889cd3;  */

void FUN_104889c84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_retain(param_3);
  func_0x00010075a04c(param_1,param_2,FUN_10488a844,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 104889cd4; end: 104889e8f;  */

/* WARNING: Removing unreachable block (ram,0x000104889ddc) */
/* WARNING: Removing unreachable block (ram,0x000104889dc4) */

void FUN_104889cd4(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  undefined8 *puVar6;
  undefined8 auStack_80 [3];
  undefined1 auStack_68 [8];
  
  uVar1 = 0x112d393f0;
  auStack_80[1] = param_6;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  __ss6ResultOMa(0,param_7,uVar1,PTR___ss5ErrorWS_11034ee10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar6 = (undefined8 *)
           (((long)auStack_80 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))((long)auStack_80 - extraout_x8,param_1,lVar2);
  func_0x0001031acf04(puVar6,lVar2,auStack_68);
  puVar3 = puVar6;
  (*param_2)();
  if (puVar3 == (undefined8 *)0x0) {
    func_0x000103319a2c();
    puVar4 = &UNK_1107ac098;
    _swift_allocError(&UNK_1107ac098,puVar3,0,0);
    puVar3[1] = 2;
    *puVar3 = 0;
    _swift_willThrow();
    (**(code **)(lVar5 + 8))(puVar6,param_7);
    FUN_10488ade0(puVar4);
    _swift_errorRelease(puVar4);
  }
  else {
    FUN_104889c84(param_4,param_5 & 1,auStack_80[1]);
    _swift_release(puVar3);
    (**(code **)(lVar5 + 8))(puVar6,param_7);
  }
  return;
}



/* Entry: 104889e90; end: 104889f73;  */

void FUN_104889e90(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar3 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar1 = 0;
  __ss6ResultOMa(0,param_4,uVar3,PTR___ss5ErrorWS_11034ee10);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffc0 + -extraout_x8);
  (**(code **)(lVar5 + 0x10))(puVar4,param_1,lVar1);
  puVar2 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,lVar1);
  if ((int)puVar2 == 1) {
    uVar3 = *puVar4;
    (*param_2)(uVar3);
    _swift_errorRelease(uVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  return;
}



/* Entry: 104889f74; end: 10488a04f;  */

undefined8
FUN_104889f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  func_0x000100759d7c(0,*(undefined8 *)(*unaff_x20 + 0x50));
  lVar1 = 0;
  func_0x000100759dd0();
  puVar2 = &UNK_1107abf38;
  _swift_allocObject(&UNK_1107abf38,0x31,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  puVar2[0x30] = (char)param_2;
  _swift_unknownObjectRetain(param_1);
  _swift_retain(lVar1);
  _swift_retain(param_4);
  func_0x00010075a04c(param_1,param_2,0x10488a848,puVar2);
  _swift_release(puVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  _swift_retain(uVar3);
  _swift_release(lVar1);
  return uVar3;
}



/* Entry: 10488a050; end: 10488a21f;  */

/* WARNING: Removing unreachable block (ram,0x00010488a144) */
/* WARNING: Removing unreachable block (ram,0x00010488a1a0) */
/* WARNING: Removing unreachable block (ram,0x00010488a1a8) */
/* WARNING: Removing unreachable block (ram,0x00010488a1e8) */
/* WARNING: Removing unreachable block (ram,0x00010488a160) */

void FUN_10488a050(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_68 [8];
  
  lVar4 = *(long *)(*param_2 + 0x50);
  uVar1 = 0x112d393f0;
  uStack_78 = param_5;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  __ss6ResultOMa(0,lVar4,uVar1,PTR___ss5ErrorWS_11034ee10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  lVar5 = (long)(auStack_80 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(auStack_80 + -extraout_x8,param_1,lVar2);
  func_0x0001031acf04(lVar5,lVar2,auStack_68);
  func_0x000100b60084(lVar5);
  (**(code **)(lVar3 + 8))(lVar5,lVar4);
  return;
}



/* Entry: 10488a220; end: 10488a2d3;  */

undefined8
FUN_10488a220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  puVar1 = &UNK_1107abf60;
  _swift_allocObject(&UNK_1107abf60,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  _swift_retain(param_4);
  func_0x000100759f70(param_1,param_2,FUN_10488a858,puVar1,PTR___sytN_11034f1b0 + 8,&UNK_1107abe20,
                      &UNK_100b614bc);
  _swift_release(puVar1);
  return param_1;
}



/* Entry: 10488a2d4; end: 10488a33f;  */

undefined8 FUN_10488a2d4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  puVar1 = &UNK_1107abf88;
  _swift_allocObject(&UNK_1107abf88,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(lVar3 + 0x50);
  uVar2 = 0;
  FUN_10488a220(0,1,FUN_10488a878,puVar1);
  _swift_release(puVar1);
  return uVar2;
}



/* Entry: 10488a340; end: 10488a483;  */

undefined8
FUN_10488a340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  puVar1 = &UNK_1107abfb0;
  _swift_allocObject(&UNK_1107abfb0,0x28,7);
  uVar3 = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  _swift_retain(param_4);
  func_0x000100759f70(param_1,param_2,FUN_10488a87c,puVar1,uVar3,&UNK_1107abe20,&UNK_100b614bc);
  _swift_release(puVar1);
  return param_1;
}



/* Entry: 10488a484; end: 10488a527;  */

undefined8 FUN_10488a484(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  puVar1 = &UNK_1107ac000;
  _swift_allocObject(&UNK_1107ac000,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  puVar1[0x20] = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  _swift_retain();
  _swift_unknownObjectRetain(param_2);
  uVar2 = 0;
  func_0x0001048897a0(0,1,1,FUN_10488a90c,puVar1);
  _swift_release(puVar1);
  return uVar2;
}



/* Entry: 10488a528; end: 10488a5a3;  */

void FUN_10488a528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_104889c84(param_4,param_5,param_2);
  _swift_getObjectType(param_4);
  _swift_retain(param_2);
  FUN_10488b6c8(param_1,0x10488ad00,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 10488a5a4; end: 10488a5f3;  */

void FUN_10488a5a4(undefined8 *param_1)

{
  undefined *puVar1;
  
  func_0x000103319a2c();
  puVar1 = &UNK_1107ac098;
  _swift_allocError(&UNK_1107ac098,param_1,0,0);
  param_1[1] = 3;
  *param_1 = 0;
  FUN_10488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 10488a5f4; end: 10488a6a3;  */

void FUN_10488a5f4(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar3 = *param_2;
  lVar5 = *(long *)(lVar3 + 0x68);
  _swift_beginAccess((long)param_2 + lVar5,auStack_58,0,0);
  uVar4 = *(undefined8 *)(lVar3 + 0x50);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  uVar2 = 0xff;
  __ss6ResultOMa(0xff,uVar4,uVar1,PTR___ss5ErrorWS_11034ee10);
  lVar3 = 0;
  __sSqMa(0,uVar2);
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,(long)param_2 + lVar5,lVar3);
  return;
}



/* Entry: 10488a6a4; end: 10488a6df;  */

void FUN_10488a6a4(undefined8 param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  (**(code **)(unaff_x20 + 0x20))
            (*(undefined8 *)(unaff_x20 + 0x28),param_1,
             unaff_x20 + (uVar1 + 0x30 & (uVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 10488a6e0; end: 10488a713;  */

void FUN_10488a6e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1048899e8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10488a714; end: 10488a7af;  */

void FUN_10488a714(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar5 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0,*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = 0;
  __ss6ResultOMa(0,uVar1,uVar5,PTR___ss5ErrorWS_11034ee10);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(&stack0xffffffffffffffc0 + -extraout_x8);
  (**(code **)(lVar7 + 0x10))(puVar6,param_1,lVar3);
  puVar4 = puVar6;
  _swift_getEnumCaseMultiPayload(puVar6,lVar3);
  if ((int)puVar4 == 1) {
    uVar5 = *puVar6;
    (*pcVar2)(uVar5);
    _swift_errorRelease(uVar5);
  }
  else {
    (**(code **)(lVar7 + 8))(puVar6,lVar3);
  }
  return;
}



/* Entry: 10488a7b0; end: 10488a7cf;  */

void FUN_10488a7b0(void)

{
  long unaff_x20;
  
  FUN_104889498(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10488a7d0; end: 10488a7ef;  */

void FUN_10488a7d0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))();
  return;
}



/* Entry: 10488a7f0; end: 10488a80b;  */

void FUN_10488a7f0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_104889894(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10488a80c; end: 10488a81f;  */

/* WARNING: Removing unreachable block (ram,0x000104889ddc) */
/* WARNING: Removing unreachable block (ram,0x000104889dc4) */

void FUN_10488a80c(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  undefined8 auStack_80 [3];
  undefined1 auStack_68 [8];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  bVar4 = *(byte *)(unaff_x20 + 0x30);
  auStack_80[1] = *(undefined8 *)(unaff_x20 + 0x38);
  uVar5 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0,*(undefined8 *)(unaff_x20 + 0x20));
  lVar6 = 0;
  __ss6ResultOMa(0,lVar1,uVar5,PTR___ss5ErrorWS_11034ee10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar10 = (undefined8 *)
            (((long)auStack_80 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))((long)auStack_80 - extraout_x8,param_1,lVar6);
  func_0x0001031acf04(puVar10,lVar6,auStack_68);
  puVar7 = puVar10;
  (*pcVar2)();
  if (puVar7 == (undefined8 *)0x0) {
    func_0x000103319a2c();
    puVar8 = &UNK_1107ac098;
    _swift_allocError(&UNK_1107ac098,puVar7,0,0);
    puVar7[1] = 2;
    *puVar7 = 0;
    _swift_willThrow();
    (**(code **)(lVar9 + 8))(puVar10,lVar1);
    FUN_10488ade0(puVar8);
    _swift_errorRelease(puVar8);
  }
  else {
    FUN_104889c84(uVar3,bVar4 & 1,auStack_80[1]);
    _swift_release(puVar7);
    (**(code **)(lVar9 + 8))(puVar10,lVar1);
  }
  return;
}



/* Entry: 10488a820; end: 10488a843;  */

void FUN_10488a820(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_104889b5c(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10488a844; end: 10488a857;  */

void FUN_10488a844(void)

{
  func_0x000100b60bb4();
  return;
}



/* Entry: 10488a858; end: 10488a877;  */

void FUN_10488a858(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))();
  return;
}



/* Entry: 10488a878; end: 10488a87b;  */

void FUN_10488a878(void)

{
  return;
}



/* Entry: 10488a87c; end: 10488a8d3;  */

void FUN_10488a87c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  (**(code **)(unaff_x20 + 0x18))();
  if (unaff_x21 == 0) {
    (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  }
  return;
}



/* Entry: 10488a8d4; end: 10488a90b;  */

void FUN_10488a8d4(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))();
  _swift_willThrow();
  _swift_errorRetain(param_1);
  return;
}



/* Entry: 10488a90c; end: 10488a933;  */

void FUN_10488a90c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_104889c84(uVar1,*(undefined1 *)(unaff_x20 + 0x20),param_1);
  _swift_getObjectType(uVar1);
  _swift_retain(param_1);
  FUN_10488b6c8(uVar2,0x10488ad00,param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10488a934; end: 10488aa97;  */

undefined8 * FUN_10488a934(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 10488aa98; end: 10488ab93;  */

int FUN_10488aa98(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffb < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffc;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (4 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -3;
  }
  return iVar1;
}



/* Entry: 10488ab94; end: 10488abbf;  */

long FUN_10488ab94(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10488abc0; end: 10488ac27;  */

undefined8 * FUN_10488abc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 10488ac28; end: 10488ac73;  */

undefined8 * FUN_10488ac28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_unknownObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 10488ac74; end: 10488ad07;  */

int FUN_10488ac74(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10488ad08; end: 10488ad47;  */

void FUN_10488ad08(undefined8 param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  (**(code **)(unaff_x20 + 0x28))
            (*(undefined8 *)(unaff_x20 + 0x30),
             unaff_x20 + (uVar1 + 0x38 & (uVar1 ^ 0xffffffffffffffff)),param_1);
  return;
}



/* Entry: 10488ad48; end: 10488ad83;  */

undefined8 FUN_10488ad48(long *param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  (*param_2)(lVar1);
  return *(undefined8 *)(lVar1 + 0x10);
}



/* Entry: 10488ad84; end: 10488ad93;  */

void FUN_10488ad84(void)

{
  return;
}



/* Entry: 10488ad94; end: 10488adc3;  */

void FUN_10488ad94(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100fc38ac(*(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10488adc4; end: 10488addf;  */

void FUN_10488adc4(void)

{
  long unaff_x20;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_28 = *(undefined1 *)(unaff_x20 + 0x28);
  (**(code **)(unaff_x20 + 0x10))(&uStack_30,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10488ade0; end: 10488adff;  */

void FUN_10488ade0(void)

{
  FUN_104889324();
  return;
}



/* Entry: 10488ae00; end: 10488af8f;  */

void FUN_10488ae00(undefined8 param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x00010006c804();
  _swift_beginAccess(unaff_x20 + 0x20,auStack_78,0,0);
  cVar2 = *(char *)(unaff_x20 + 0x28);
  if (cVar2 == -1) {
    _swift_beginAccess(unaff_x20 + 0x30,auStack_90,0x21,0);
    uVar6 = *(ulong *)(unaff_x20 + 0x30);
    _swift_unknownObjectRetain(param_1);
    _swift_retain(param_4);
    uVar3 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x30) = uVar6;
    uVar4 = uVar6;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      FUN_10488b3d8(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      *(ulong *)(unaff_x20 + 0x30) = uVar4;
    }
    uVar3 = *(ulong *)(uVar4 + 0x10);
    uVar6 = uVar4;
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_10488b3d8(uVar6,uVar3 + 1,1,uVar4);
    }
    *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
    lVar1 = uVar6 + uVar3 * 0x20;
    *(undefined8 *)(lVar1 + 0x20) = param_3;
    *(undefined8 *)(lVar1 + 0x28) = param_4;
    *(undefined8 *)(lVar1 + 0x30) = param_1;
    *(byte *)(lVar1 + 0x38) = param_2 & 1;
    *(ulong *)(unaff_x20 + 0x30) = uVar6;
    _swift_endAccess(auStack_90);
    func_0x000100070bfc();
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    _swift_unknownObjectRetain(param_1);
    _swift_retain(param_4);
    FUN_10488b610(uVar5,cVar2);
    func_0x000100070bfc();
    FUN_10488af90(uVar5,cVar2,param_3,param_4,param_1,param_2 & 1);
    _swift_unknownObjectRelease(param_1);
    _swift_release(param_4);
    func_0x0001013b25f8(uVar5,cVar2);
  }
  return;
}



/* Entry: 10488af90; end: 10488b12b;  */

void FUN_10488af90(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5,uint param_6)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  ppuVar2 = &puStack_90;
  uVar1 = (undefined1)param_2;
  uStack_60 = param_1;
  uStack_58 = uVar1;
  if (param_5 == 0) {
    (*param_3)(&uStack_60);
  }
  else {
    if ((param_6 & 1) == 0) {
      lVar3 = param_5;
      _swift_getObjectType(param_5);
      puVar4 = &UNK_1107ac538;
      _swift_allocObject(&UNK_1107ac538,0x29,7);
      *(code **)(puVar4 + 0x10) = param_3;
      *(undefined8 *)(puVar4 + 0x18) = param_4;
      *(undefined8 *)(puVar4 + 0x20) = param_1;
      puVar4[0x28] = uVar1;
      _swift_unknownObjectRetain(param_5);
      _swift_retain(param_4);
      func_0x000100fabc04(param_1,param_2);
      func_0x00010090569c(0x10488b624,puVar4,lVar3);
      _swift_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_5);
      return;
    }
    puVar4 = &UNK_1107ac560;
    _swift_allocObject(&UNK_1107ac560,0x29,7);
    *(code **)(puVar4 + 0x10) = param_3;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    puVar4[0x28] = uVar1;
    uStack_70 = 0x10488b6b0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1107ac578;
    puStack_68 = puVar4;
    __Block_copy(&puStack_90);
    puVar4 = puStack_68;
    _swift_unknownObjectRetain(param_5);
    _swift_retain(param_4);
    func_0x000100fabc04(param_1,param_2);
    _swift_release(puVar4);
    func_0x000100c00c0c(param_5,ppuVar2);
    _swift_unknownObjectRelease(param_5);
    __Block_release(ppuVar2);
  }
  return;
}



/* Entry: 10488b12c; end: 10488b267;  */

undefined8 FUN_10488b12c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long *unaff_x20;
  undefined8 uVar6;
  
  lVar5 = *unaff_x20;
  uVar1 = 0x113096e60;
  func_0x0001000285a8(0x113096e60,&UNK_10dd3ccc8);
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
  puVar2 = &UNK_1107ac420;
  _swift_allocObject(&UNK_1107ac420,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  _objc_retain();
  uVar3 = 0;
  FUN_10488a220(0,1,FUN_10488b268,puVar2);
  _swift_release(puVar2);
  puVar2 = &UNK_1107ac448;
  _swift_allocObject(&UNK_1107ac448,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  puVar4 = &UNK_1107ac470;
  _swift_allocObject(&UNK_1107ac470,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10488b698;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  _objc_retain(uVar1);
  _swift_retain(puVar2);
  FUN_10488ae00(0,1,FUN_10488b578,puVar4);
  _swift_release(uVar3);
  _swift_release(puVar2);
  _swift_release(puVar4);
  uVar3 = uVar1;
  func_0x00010bfbc3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10488b268; end: 10488b297;  */

void FUN_10488b268(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010bf43d60(*(undefined8 *)(unaff_x20 + 0x18),param_2,*param_1);
  return;
}



/* Entry: 10488b298; end: 10488b3d7;  */

undefined8 FUN_10488b298(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long *unaff_x20;
  undefined8 uVar6;
  
  lVar5 = *unaff_x20;
  uVar1 = 0x113096e60;
  func_0x0001000285a8(0x113096e60,&UNK_10dd3ccc8);
  uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x50) + 0x10);
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  func_0x00010bfee200();
  puVar2 = &UNK_1107ac4c0;
  _swift_allocObject(&UNK_1107ac4c0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  _objc_retain();
  uVar3 = 0;
  FUN_10488a220(0,1,FUN_10488b57c,puVar2);
  _swift_release(puVar2);
  puVar2 = &UNK_1107ac4e8;
  _swift_allocObject(&UNK_1107ac4e8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  puVar4 = &UNK_1107ac510;
  _swift_allocObject(&UNK_1107ac510,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10488b5ac;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  _objc_retain(uVar1);
  _swift_retain(puVar2);
  FUN_10488ae00(0,1,0x10488b6a4,puVar4);
  _swift_release(uVar3);
  _swift_release(puVar2);
  _swift_release(puVar4);
  uVar3 = uVar1;
  func_0x00010bfbc3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 10488b3d8; end: 10488b507;  */

undefined * FUN_10488b3d8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10488b508);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x113096e68;
    func_0x0001000285a8(0x113096e68,&UNK_10dd3ccd0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x113096e70;
    func_0x0001000285a8(0x113096e70,&UNK_10dd3ccd8);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 10488b508; end: 10488b577;  */

void FUN_10488b508(code *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = *param_3;
  uStack_28 = *(undefined1 *)(param_3 + 1);
  (*param_1)(&uStack_30);
  return;
}



/* Entry: 10488b578; end: 10488b57b;  */

void FUN_10488b578(undefined8 *param_1)

{
  long unaff_x20;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    (**(code **)(unaff_x20 + 0x10))(*param_1);
  }
  return;
}



/* Entry: 10488b57c; end: 10488b5ab;  */

void FUN_10488b57c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010bf43d60(*(undefined8 *)(unaff_x20 + 0x18),param_2,*param_1);
  return;
}



/* Entry: 10488b5ac; end: 10488b60f;  */

void FUN_10488b5ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  func_0x00010bf43ca0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10488b610; end: 10488b627;  */

void FUN_10488b610(undefined8 param_1,char param_2)

{
  if (param_2 == -1) {
    return;
  }
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
  return;
}



/* Entry: 10488b628; end: 10488b657;  */

void FUN_10488b628(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100fc38ac(*(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10488b658; end: 10488b697;  */

void FUN_10488b658(void)

{
  long unaff_x20;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_28 = *(undefined1 *)(unaff_x20 + 0x28);
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18),&uStack_30);
  return;
}



/* Entry: 10488b698; end: 10488b6c7;  */

void FUN_10488b698(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
  func_0x00010bf43ca0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10488b6c8; end: 10488b767;  */

void FUN_10488b6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1107ac628;
  uStack_50 = param_2;
  uStack_48 = param_3;
  __Block_copy(&puStack_70);
  uVar1 = uStack_48;
  _swift_retain(param_3);
  _swift_release(uVar1);
  func_0x00010bcbe620(param_1);
  __Block_release(ppuVar2);
  return;
}



/* Entry: 10488b768; end: 10488b7ab;  */

void FUN_10488b768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _swift_getObjectType();
  ppuVar2 = &puStack_70;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1107ac678;
  uStack_50 = param_2;
  uStack_48 = param_3;
  __Block_copy(&puStack_70);
  uVar1 = uStack_48;
  _swift_retain(param_3);
  _swift_release(uVar1);
  func_0x00010bcbe628();
  __Block_release(ppuVar2);
  return;
}


