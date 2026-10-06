/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103bd611c; end: 103bd6163;  */

void FUN_103bd611c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103bd6160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103bd6164; end: 103bd6203;  */

void FUN_103bd6164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9,long param_10)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  undefined8 unaff_x30;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x103bd66f4;
  if (param_6 == '\x02') {
    piVar3 = *(int **)(param_10 + 0x10);
    plVar2 = (long *)(ulong)(uint)piVar3[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar3 + (long)piVar3);
    func_0x000107c615b8();
    plVar1[3] = (long)plVar2;
    *plVar2 = (long)plVar1;
    plVar2[1] = (long)FUN_103bd6304;
  }
  else {
    piVar3 = *(int **)(param_10 + 0x18);
    plVar2 = (long *)(ulong)(uint)piVar3[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar3 + (long)piVar3);
    func_0x000107c615b8();
    plVar1[2] = (long)plVar2;
    *plVar2 = (long)plVar1;
    plVar2[1] = 0x103bd66f8;
    param_9 = CONCAT71((int7)((ulong)unaff_x30 >> 8),param_6) & 0xffffffffffffff01;
  }
                    /* WARNING: Could not recover jumptable at 0x000103bd6300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,0,0,param_4,param_5,0,0,param_9);
  return;
}



/* Entry: 103bd6204; end: 103bd6303;  */

void FUN_103bd6204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char param_6,ulong param_7,ulong param_8)

{
  long *plVar1;
  int *piVar2;
  long unaff_x22;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 in_stack_ffffffffffffffe8;
  ulong uVar3;
  
  if (param_6 == '\x02') {
    piVar2 = *(int **)(param_8 + 0x10);
    plVar1 = (long *)(ulong)(uint)piVar2[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar2 + (long)piVar2);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x18) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_103bd6304;
    uVar3 = param_7;
    param_7 = param_8;
  }
  else {
    piVar2 = *(int **)(param_8 + 0x18);
    plVar1 = (long *)(ulong)(uint)piVar2[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar2 + (long)piVar2);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x10) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x103bd66f8;
    uVar3 = CONCAT71((int7)((ulong)in_stack_ffffffffffffffe8 >> 8),param_6) & 0xffffffffffffff01;
  }
                    /* WARNING: Could not recover jumptable at 0x000103bd6300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,0,0,param_4,param_5,0,0,uVar3,param_7);
  return;
}



/* Entry: 103bd6304; end: 103bd634b;  */

void FUN_103bd6304(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000103bd6348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103bd634c; end: 103bd6417;  */

void FUN_103bd634c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  undefined1 uStack0000000000000001;
  undefined1 uStack0000000000000002;
  long in_stack_00000028;
  
  piVar3 = *(int **)(in_stack_00000028 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x103bd66fc;
  uStack0000000000000002 = param_9;
  uStack0000000000000001 = param_8;
                    /* WARNING: Could not recover jumptable at 0x000103bd6414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(0,0,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 103bd6418; end: 103bd64d3;  */

void FUN_103bd6418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  long unaff_x22;
  undefined4 unaff_w29;
  long in_stack_00000010;
  undefined8 uVar5;
  
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103bd6700;
  uVar5 = CONCAT44(param_6,unaff_w29);
  piVar4 = *(int **)(in_stack_00000010 + 8);
  iVar1 = *piVar4;
  plVar2 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  plVar3[2] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_103bd611c;
                    /* WARNING: Could not recover jumptable at 0x000103bd6118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (0,0,param_1,param_2,param_3,param_4,param_5,(int)((ulong)uVar5 >> 0x20),
             CONCAT71(CONCAT61(CONCAT51((int5)((ulong)uVar5 >> 0x18),param_9),param_8),param_7),0);
  return;
}



/* Entry: 103bd64d4; end: 103bd6597;  */

void FUN_103bd64d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_9 + 0x10);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x103bd6704;
                    /* WARNING: Could not recover jumptable at 0x000103bd6594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (0,0,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 103bd6598; end: 103bd665b;  */

void FUN_103bd6598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10,long param_11)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_11 + 0x18);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x103bd6708;
                    /* WARNING: Could not recover jumptable at 0x000103bd6658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (0,0,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 103bd665c; end: 103bd66ef;  */

void FUN_103bd665c(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  ulong param_5,ulong param_6)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar4;
  long lVar5;
  
  plVar2 = (long *)0x20;
  lVar5 = unaff_x22;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x103bd670c;
  if (param_4 == '\x02') {
    piVar3 = *(int **)(param_6 + 0x10);
    plVar1 = (long *)(ulong)(uint)piVar3[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar3 + (long)piVar3);
    func_0x000107c615b8();
    plVar2[3] = (long)plVar1;
    *plVar1 = (long)plVar2;
    plVar1[1] = (long)FUN_103bd6304;
    uVar4 = param_5;
    param_5 = param_6;
  }
  else {
    piVar3 = *(int **)(param_6 + 0x18);
    plVar1 = (long *)(ulong)(uint)piVar3[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar3 + (long)piVar3);
    func_0x000107c615b8();
    plVar2[2] = (long)plVar1;
    *plVar1 = (long)plVar2;
    plVar1[1] = 0x103bd66f8;
    uVar4 = CONCAT71((int7)((ulong)lVar5 >> 8),param_4) & 0xffffffffffffff01;
  }
                    /* WARNING: Could not recover jumptable at 0x000103bd6300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0,0,param_1,0,0,param_2,param_3,0,0,uVar4,param_5);
  return;
}



/* Entry: 103bd66f0; end: 103bd670f;  */

void FUN_103bd66f0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103bd6160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103bd6710; end: 103bd671f; -[SCMemoriesSaveReceipt snapDoc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd6710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff55b8));
  return;
}



/* Entry: 103bd6720; end: 103bd672b; -[SCMemoriesSaveReceipt entryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd6720(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff55c0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff55c0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bd672c; end: 103bd6737; -[SCMemoriesSaveReceipt snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd672c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff55c8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff55c8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bd6738; end: 103bd677f;  */

void FUN_103bd6738(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bd6780; end: 103bd67db; -[SCMemoriesSaveReceipt mediaId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd6780(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff55d0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff55d0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bd67dc; end: 103bd6933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd67dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff55b8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff55c0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff55c8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff55d0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bd6934; end: 103bd6a1b; -[SCMemoriesSaveReceipt initWithSnapDoc:entryId:snapId:mediaId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd6934(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  lVar5 = param_2;
  func_0x000107c5faec();
  if (param_6 == 0) {
    param_6 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = lVar5;
    func_0x000107c5faec();
  }
  *(undefined8 *)(param_1 + _DAT_112ff55b8) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff55c0);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff55c8);
  *puVar1 = param_5;
  puVar1[1] = lVar5;
  plVar2 = (long *)(param_1 + _DAT_112ff55d0);
  *plVar2 = param_6;
  plVar2[1] = lVar6;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar4;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_60,puVar3);
  return;
}



/* Entry: 103bd6a1c; end: 103bd6a7b; -[SCMemoriesSaveReceipt init] */

void FUN_103bd6a1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSaveServices.MemoriesSaveReceipt",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bd6a48);
  (*pcVar1)();
}



/* Entry: 103bd6a7c; end: 103bd6adf; -[SCMemoriesSaveReceipt .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bd6aac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bd6ab0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd6a7c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff55b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff55c0 + 8))
  ;
  return;
}



/* Entry: 103bd6ae0; end: 103bd6aff;  */

void FUN_103bd6ae0(void)

{
  func_0x000107c61168(&PTR_PTR_112941cb0);
  return;
}



/* Entry: 103bd6b00; end: 103bd6bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103bd6b00(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar4 = auStack_50;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5600) = param_1;
  func_0x000107c6157c(param_1);
  uVar1 = 0x112ff5610;
  func_0x0001000285a8(0x112ff5610,&UNK_10dc62500);
  pcVar2 = FUN_103bd6bc8;
  func_0x0001000cb480(FUN_103bd6bc8,0,uVar1);
  pcVar3 = pcVar2;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar2);
  *(code **)(unaff_x20 + _DAT_112ff5608) = pcVar3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar4;
}



/* Entry: 103bd6bc8; end: 103bd6bd3;  */

void FUN_103bd6bc8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 103bd6bd4; end: 103bd6c33; -[_TtC20MemoriesSaveServices20MemoriesSaveServices init] */

void FUN_103bd6bd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSaveServices.MemoriesSaveServices",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bd6c00);
  (*pcVar1)();
}



/* Entry: 103bd6c34; end: 103bd6c6b; -[_TtC20MemoriesSaveServices20MemoriesSaveServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd6c34(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ff5600));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff5608));
  return;
}



/* Entry: 103bd6c6c; end: 103bd6c9f; -[SDMSnapDoc needsLiveRendering] */

uint FUN_103bd6c6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103bd6ca0();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 103bd6ca0; end: 103bd74a3;  */

undefined8 FUN_103bd6ca0(undefined *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x20;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puStack_68;
  
  func_0x000103bd722c();
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar13 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar13 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar13 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar13 != (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar15) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd71bc);
            (*pcVar2)();
          }
          puVar4 = *(undefined **)(param_1 + (long)puVar15 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar4 = puVar15;
          FUN_103bd74a4(puVar15,param_1,&PTR_PTR_1126bceb0,0x112df41a0);
        }
        bVar3 = SCARRY8((long)puVar15,1);
        puVar15 = puVar15 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd71b8);
          (*pcVar2)();
        }
        puVar5 = puVar4;
        func_0x000107c518b0();
        if ((int)puVar5 == 2) break;
LAB_103bd6d04:
        func_0x000107c61170(puVar4);
        if (puVar15 == puVar13) goto LAB_103bd7030;
      }
      puVar5 = puVar4;
      func_0x000107c500b4();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) goto LAB_103bd6d04;
      puStack_68 = (undefined *)0x0;
      uVar6 = 0;
      FUN_103bd7660(0,0x112df41b0,&PTR_PTR_1126bceb8);
      func_0x000107c5fc50(puVar5,&puStack_68,uVar6);
      func_0x000107c61170(puVar5);
      puVar5 = puStack_68;
      if (puStack_68 == (undefined *)0x0) goto LAB_103bd6d04;
      puVar17 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
      if ((ulong)puStack_68 >> 0x3e == 0) {
        puVar18 = *(undefined **)(puVar17 + 0x10);
      }
      else {
        puVar18 = puStack_68;
        if (-1 < (long)puStack_68) {
          puVar18 = puVar17;
        }
        func_0x000107c60480();
      }
      if (puVar18 != (undefined *)0x0) {
        puVar16 = (undefined *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar5 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar17 + 0x10) <= puVar16) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd71b4);
                (*pcVar2)();
              }
              puVar7 = *(undefined **)(puVar5 + (long)puVar16 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar7 = puVar16;
              FUN_103bd74a4(puVar16,puVar5,&PTR_PTR_1126bceb8,0x112df41b0);
            }
            bVar3 = SCARRY8((long)puVar16,1);
            puVar16 = puVar16 + 1;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd71b0);
              (*pcVar2)();
            }
            puVar8 = puVar7;
            func_0x000107c500b8();
            func_0x000107c61180();
            if (puVar8 != (undefined *)0x0) break;
LAB_103bd6f98:
            func_0x000107c61170(puVar7);
            if (puVar16 == puVar18) goto LAB_103bd7014;
          }
          puStack_68 = (undefined *)0x0;
          uVar6 = 0;
          FUN_103bd7660(0,0x112df41c0,&PTR_PTR_1126bcd28);
          func_0x000107c5fc50(puVar8,&puStack_68,uVar6);
          func_0x000107c61170(puVar8);
          puVar8 = puStack_68;
          if (puStack_68 == (undefined *)0x0) goto LAB_103bd6f98;
          puVar20 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
          if ((ulong)puStack_68 >> 0x3e == 0) {
            puVar19 = *(undefined **)(puVar20 + 0x10);
          }
          else {
            puVar19 = puStack_68;
            if (-1 < (long)puStack_68) {
              puVar19 = puVar20;
            }
            func_0x000107c60480();
          }
          if (puVar19 != (undefined *)0x0) {
            uVar14 = 0;
            do {
              if (((ulong)puVar8 & 0xc000000000000001) == 0) {
                if (*(ulong *)(puVar20 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd71ac);
                  (*pcVar2)();
                }
                uVar9 = *(ulong *)(puVar8 + uVar14 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                uVar9 = uVar14;
                FUN_103bd74a4(uVar14,puVar8,&PTR_PTR_1126bcd28,0x112df41c0);
              }
              puVar1 = (undefined *)(uVar14 + 1);
              if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd71a8);
                (*pcVar2)();
              }
              uVar10 = uVar9;
              func_0x000107c42444();
              if ((int)uVar10 == 1) {
                uVar10 = uVar9;
                func_0x000107c40dc8();
                func_0x000107c61180();
                if (uVar10 == 0) goto LAB_103bd6ea4;
                uVar11 = uVar10;
                func_0x000107c4a764();
                func_0x000107c61180();
                func_0x000107c61170(uVar10);
                if (uVar11 == 0) goto LAB_103bd6ea4;
                uVar10 = uVar11;
                func_0x000107c42924();
                func_0x000107c61180();
                func_0x000107c61170(uVar11);
                if (uVar10 == 0) goto LAB_103bd6ea4;
                uVar11 = uVar10;
                func_0x000107c42930();
                func_0x000107c61170(uVar10);
                func_0x000107c61170(uVar9);
                if ((int)uVar11 == 0x1b) {
                  func_0x000107c6142c(param_1);
                  func_0x000107c6142c(puVar5);
                  func_0x000107c61170(puVar4);
                  func_0x000107c6142c(puVar8);
                  func_0x000107c61170(puVar7);
                  func_0x000107c4e8d8();
                  func_0x000107c61180();
                  if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd722c);
                    (*pcVar2)();
                  }
                  lVar12 = unaff_x20;
                  func_0x000107c4e928();
                  func_0x000107c61180();
                  func_0x000107c61170(unaff_x20);
                  param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
                  if (lVar12 != 0) {
                    puStack_68 = (undefined *)0x0;
                    uVar6 = 0;
                    FUN_103bd7660(0,0x112d55598,&PTR_PTR_1126b25d0);
                    func_0x000107c5fc50(lVar12,&puStack_68,uVar6);
                    func_0x000107c61170(lVar12);
                    if (puStack_68 != (undefined *)0x0) {
                      param_1 = puStack_68;
                    }
                  }
                  if ((ulong)param_1 >> 0x3e == 0) {
                    puVar13 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    puVar13 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
                    if ((undefined *)0x7fffffffffffffff < param_1) {
                      puVar13 = param_1;
                    }
                    func_0x000107c60480();
                  }
                  if (puVar13 == (undefined *)0x0) goto LAB_103bd71f8;
                  uVar14 = 0;
                  goto LAB_103bd711c;
                }
              }
              else {
LAB_103bd6ea4:
                func_0x000107c61170(uVar9);
              }
              uVar14 = uVar14 + 1;
            } while (puVar1 != puVar19);
          }
          func_0x000107c6142c(puVar8);
          func_0x000107c61170(puVar7);
        } while (puVar16 != puVar18);
      }
LAB_103bd7014:
      func_0x000107c6142c(puVar5);
      func_0x000107c61170(puVar4);
    } while (puVar15 != puVar13);
  }
LAB_103bd7030:
  uVar6 = 0;
  goto LAB_103bd71fc;
  while (uVar14 = uVar14 + 1, puVar15 != puVar13) {
LAB_103bd711c:
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd71c4);
        (*pcVar2)();
      }
      uVar9 = *(ulong *)(param_1 + uVar14 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar9 = uVar14;
      FUN_103bd74a4(uVar14,param_1,&PTR_PTR_1126b25d0,0x112d55598);
    }
    puVar15 = (undefined *)(uVar14 + 1);
    if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd71c0);
      (*pcVar2)();
    }
    uVar10 = uVar9;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (uVar10 == 0) {
      func_0x000107c61170(uVar9);
    }
    else {
      uVar11 = uVar10;
      func_0x000107c3e240();
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar9);
      if ((int)uVar11 == 3) goto LAB_103bd7030;
    }
  }
LAB_103bd71f8:
  uVar6 = 1;
LAB_103bd71fc:
  func_0x000107c6142c(param_1);
  return uVar6;
}



/* Entry: 103bd74a4; end: 103bd765f;  */

ulong FUN_103bd74a4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd7588);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd758c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_103bd7660(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd7660);
  (*pcVar2)();
}



/* Entry: 103bd7660; end: 103bd769f;  */

void FUN_103bd7660(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103bd76a0; end: 103bd76af; -[PreviewVideoFilterControllingServices stateController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd76a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5640));
  return;
}



/* Entry: 103bd76b0; end: 103bd7747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd76b0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5640) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bd7748; end: 103bd77a7; -[PreviewVideoFilterControllingServices init] */

void FUN_103bd7748(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewFilterLegacyControllingServices.PreviewVideoFilterControllingServices"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bd7774);
  (*pcVar1)();
}



/* Entry: 103bd77a8; end: 103bd77b7; -[PreviewVideoFilterControllingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd77a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff5640));
  return;
}



/* Entry: 103bd77b8; end: 103bd77d7;  */

void FUN_103bd77b8(void)

{
  func_0x000107c61168(&PTR_PTR_112941e50);
  return;
}



/* Entry: 103bd77d8; end: 103bd785b; +[SCLensMusicSelectionBuilder musicSelectionWithLens:] */

void FUN_103bd77d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174();
  lVar1 = param_3;
  func_0x000107c4d2b4();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = 0;
    func_0x000101b66cd8(0);
    lVar3 = lVar1;
    func_0x000107c5fc54(lVar1,uVar2);
    func_0x000107c61170(lVar1);
    lVar1 = lVar3;
    FUN_103bd7c24(lVar3,0xffffffffffffffff);
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 103bd785c; end: 103bd78f3; +[SCLensMusicSelectionBuilder musicSelectionWithLens:loggingSourcePage:] */

void FUN_103bd785c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174();
  lVar3 = param_3;
  func_0x000107c4d2b4();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61170(param_3);
    lVar3 = 0;
  }
  else {
    uVar1 = 0;
    func_0x000101b66cd8(0);
    lVar2 = lVar3;
    func_0x000107c5fc54(lVar3,uVar1);
    func_0x000107c61170(lVar3);
    lVar3 = lVar2;
    FUN_103bd7c24(lVar2,param_4);
    func_0x000107c6142c(lVar2);
    func_0x000107c61170(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 103bd78f4; end: 103bd793f; +[SCLensMusicSelectionBuilder musicSelectionWithMusicTrackMetadata:] */

void FUN_103bd78f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000101b66cd8(0);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = param_3;
  FUN_103bd7c24();
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bd7940; end: 103bd798f; +[SCLensMusicSelectionBuilder musicSelectionWithMusicTrackMetadata:loggingSourcePage:] */

void FUN_103bd7940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000101b66cd8(0);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = param_3;
  FUN_103bd7c24();
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bd7990; end: 103bd7a0f; +[SCLensMusicSelectionBuilder musicSelectionWithTrackId:encodedContentRestrictions:] */

void FUN_103bd7990(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 == 0) {
    param_2 = 0xf000000000000000;
  }
  else {
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  FUN_103bd7b0c(param_3,param_4,param_2,0xffffffffffffffff);
  func_0x0001000b44c0(param_4,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103bd7a10; end: 103bd7a9b; +[SCLensMusicSelectionBuilder musicSelectionWithTrackId:encodedContentRestrictions:loggingSourcePage:] */

void FUN_103bd7a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  if (param_4 == 0) {
    param_2 = 0xf000000000000000;
  }
  else {
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  FUN_103bd7b0c(param_3,param_4,param_2,param_5);
  func_0x0001000b44c0(param_4,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103bd7a9c; end: 103bd7ad7; -[SCLensMusicSelectionBuilder init] */

void FUN_103bd7a9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bd7ad8; end: 103bd7b0b;  */

void FUN_103bd7ad8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bd7b0c; end: 103bd7c23;  */

undefined * FUN_103bd7b0c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_4 == -1) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b3028;
    func_0x000107c610f8(PTR_PTR_1126b3028);
    func_0x000107c488f4();
  }
  uVar1 = 0;
  func_0x000107c5ee20(0,0xc000000000000000);
  uVar4 = 0;
  if (param_3 >> 0x3c < 0xf) {
    func_0x000107c5ee20(param_2,param_3);
    uVar4 = param_2;
  }
  puVar2 = PTR_PTR_1126b3030;
  func_0x000107c610f8(PTR_PTR_1126b3030);
  func_0x000107c48e18();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  return puVar2;
}



/* Entry: 103bd7c24; end: 103bd8023;  */

byte * FUN_103bd7c24(ulong param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  byte **ppbVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbStack_50;
  ulong uStack_48;
  
  uVar18 = param_2;
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar10 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar10 == 0) {
    return (byte *)0x0;
  }
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd7fdc);
      (*pcVar8)();
    }
    pbVar9 = *(byte **)(param_1 + 0x20);
    func_0x000107c61174();
    param_1 = uVar18;
  }
  else {
    pbVar9 = (byte *)0x0;
    func_0x000101b66d1c();
  }
  pbVar17 = pbVar9;
  func_0x000107c5cda4();
  func_0x000107c61180();
  if (pbVar17 == (byte *)0x0) goto LAB_103bd7f08;
  pbVar13 = pbVar17;
  func_0x000107c5faec();
  func_0x000107c61170(pbVar17);
  uVar10 = (ulong)pbVar13 & 0xffffffffffff;
  uVar11 = param_1 >> 0x38 & 0xf;
  uVar18 = uVar10;
  if ((param_1 & 0x2000000000000000) != 0) {
    uVar18 = uVar11;
  }
  if (uVar18 == 0) {
    func_0x000107c6142c(param_1);
    goto LAB_103bd7f08;
  }
  if ((param_1 >> 0x3c & 1) == 0) {
    if ((param_1 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar13 >> 0x3c & 1) == 0) {
        uVar10 = param_1;
        func_0x000107c60358();
      }
      else {
        pbVar13 = (byte *)((param_1 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar13 == 0x2b) {
        if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd8020);
          (*pcVar8)();
        }
        lVar12 = uVar10 - 1;
        if (lVar12 == 0) goto LAB_103bd7eec;
        pbVar17 = (byte *)0x0;
        do {
          pbVar13 = pbVar13 + 1;
          if (((9 < *pbVar13 - 0x30) ||
              (auVar4._8_8_ = 0, auVar4._0_8_ = pbVar17, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
             (uVar11 = (long)pbVar17 * 10, uVar18 = (ulong)(byte)(*pbVar13 - 0x30),
             pbVar17 = (byte *)(uVar11 + uVar18), CARRY8(uVar11,uVar18))) goto LAB_103bd7eec;
          uVar18 = 0;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      else if (*pbVar13 == 0x2d) {
        if ((long)uVar10 < 1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd8018);
          (*pcVar8)();
        }
        lVar12 = uVar10 - 1;
        if (lVar12 == 0) {
LAB_103bd7eec:
          pbVar17 = (byte *)0x0;
          uVar18 = 1;
        }
        else {
          pbVar17 = (byte *)0x0;
          do {
            pbVar13 = pbVar13 + 1;
            if (((9 < *pbVar13 - 0x30) ||
                (auVar2._8_8_ = 0, auVar2._0_8_ = pbVar17, SUB168(auVar2 * ZEXT816(10),8) != 0)) ||
               (uVar11 = (long)pbVar17 * 10, uVar18 = (ulong)(byte)(*pbVar13 - 0x30),
               pbVar17 = (byte *)(uVar11 - uVar18), uVar11 < uVar18)) goto LAB_103bd7eec;
            uVar18 = 0;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
      }
      else {
        if (uVar10 == 0) goto LAB_103bd7eec;
        pbVar17 = (byte *)0x0;
        if (pbVar13 == (byte *)0x0) {
          uVar18 = 0;
        }
        else {
          do {
            if (((9 < *pbVar13 - 0x30) ||
                (auVar6._8_8_ = 0, auVar6._0_8_ = pbVar17, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
               (uVar11 = (long)pbVar17 * 10, uVar18 = (ulong)(byte)(*pbVar13 - 0x30),
               pbVar17 = (byte *)(uVar11 + uVar18), CARRY8(uVar11,uVar18))) goto LAB_103bd7eec;
            uVar18 = 0;
            uVar10 = uVar10 - 1;
            pbVar13 = pbVar13 + 1;
          } while (uVar10 != 0);
        }
      }
    }
    else {
      pbStack_50 = pbVar13;
      uStack_48 = param_1 & 0xffffffffffffff;
      uVar1 = (uint)pbVar13 & 0xff;
      if (uVar1 == 0x2b) {
        if (uVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd8024);
          (*pcVar8)();
        }
        lVar12 = uVar11 - 1;
        if (lVar12 == 0) goto LAB_103bd7eec;
        pbVar17 = (byte *)0x0;
        pbVar13 = (byte *)((ulong)&pbStack_50 | 1);
        do {
          if (((9 < *pbVar13 - 0x30) ||
              (auVar5._8_8_ = 0, auVar5._0_8_ = pbVar17, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
             (uVar11 = (long)pbVar17 * 10, uVar18 = (ulong)(byte)(*pbVar13 - 0x30),
             pbVar17 = (byte *)(uVar11 + uVar18), CARRY8(uVar11,uVar18))) goto LAB_103bd7eec;
          uVar18 = 0;
          lVar12 = lVar12 + -1;
          pbVar13 = pbVar13 + 1;
        } while (lVar12 != 0);
      }
      else if (uVar1 == 0x2d) {
        if (uVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x103bd801c);
          (*pcVar8)();
        }
        lVar12 = uVar11 - 1;
        if (lVar12 == 0) goto LAB_103bd7eec;
        pbVar17 = (byte *)0x0;
        pbVar13 = (byte *)((ulong)&pbStack_50 | 1);
        do {
          if (((9 < *pbVar13 - 0x30) ||
              (auVar3._8_8_ = 0, auVar3._0_8_ = pbVar17, SUB168(auVar3 * ZEXT816(10),8) != 0)) ||
             (uVar11 = (long)pbVar17 * 10, uVar18 = (ulong)(byte)(*pbVar13 - 0x30),
             pbVar17 = (byte *)(uVar11 - uVar18), uVar11 < uVar18)) goto LAB_103bd7eec;
          uVar18 = 0;
          lVar12 = lVar12 + -1;
          pbVar13 = pbVar13 + 1;
        } while (lVar12 != 0);
      }
      else {
        if (uVar11 == 0) goto LAB_103bd7eec;
        pbVar17 = (byte *)0x0;
        ppbVar14 = &pbStack_50;
        do {
          if (((9 < *(byte *)ppbVar14 - 0x30) ||
              (auVar7._8_8_ = 0, auVar7._0_8_ = pbVar17, SUB168(auVar7 * ZEXT816(10),8) != 0)) ||
             (uVar15 = (long)pbVar17 * 10, uVar18 = (ulong)(byte)(*(byte *)ppbVar14 - 0x30),
             pbVar17 = (byte *)(uVar15 + uVar18), CARRY8(uVar15,uVar18))) goto LAB_103bd7eec;
          uVar18 = 0;
          uVar11 = uVar11 - 1;
          ppbVar14 = (byte **)((long)ppbVar14 + 1);
        } while (uVar11 != 0);
      }
    }
  }
  else {
    uVar10 = param_1;
    func_0x000100f5015c(pbVar13,param_1,10);
    pbVar17 = pbVar13;
    uVar18 = uVar10;
  }
  func_0x000107c6142c(param_1);
  if (((uint)uVar18 & 0xff) != 1) {
    pbVar13 = pbVar9;
    func_0x000107c404d4();
    func_0x000107c61180();
    if (pbVar13 == (byte *)0x0) {
      pbVar16 = (byte *)0x0;
      uVar10 = 0xf000000000000000;
    }
    else {
      pbVar16 = pbVar13;
      func_0x000107c5ee30();
      func_0x000107c61170(pbVar13);
    }
    FUN_103bd7b0c(pbVar17,pbVar16,uVar10,param_2);
    func_0x0001000b44c0(pbVar16,uVar10);
    func_0x000107c61170(pbVar9);
    return pbVar17;
  }
LAB_103bd7f08:
  func_0x000107c61170(pbVar9);
  return (byte *)0x0;
}



/* Entry: 103bd8024; end: 103bd8043;  */

void FUN_103bd8024(void)

{
  func_0x000107c61168(&PTR_PTR_112941f10);
  return;
}



/* Entry: 103bd8044; end: 103bd8057;  */

bool FUN_103bd8044(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103bd8058; end: 103bd8103;  */

void FUN_103bd8058(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103bd8104; end: 103bd8107;  */

void FUN_103bd8104(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc625d0;
  func_0x000107c61520(&UNK_10dc625d0,&UNK_1106e4268);
  puRam0000000112ff5698 = puVar1;
  return;
}



/* Entry: 103bd8108; end: 103bd8147;  */

void FUN_103bd8108(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff5698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc625d0;
  func_0x000107c61520(&UNK_10dc625d0,&UNK_1106e4268);
  puRam0000000112ff5698 = puVar1;
  return;
}



/* Entry: 103bd8148; end: 103bd82cf;  */

void FUN_103bd8148(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103bd82d0; end: 103bd837b;  */

void FUN_103bd82d0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103bd837c; end: 103bd837f;  */

void FUN_103bd837c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff56a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc626c0;
  func_0x000107c61520(&UNK_10dc626c0,&UNK_1106e4358);
  puRam0000000112ff56a0 = puVar1;
  return;
}



/* Entry: 103bd8380; end: 103bd83bf;  */

void FUN_103bd8380(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff56a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc626c0;
  func_0x000107c61520(&UNK_10dc626c0,&UNK_1106e4358);
  puRam0000000112ff56a0 = puVar1;
  return;
}



/* Entry: 103bd83c0; end: 103bd8547;  */

void FUN_103bd83c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103bd8548; end: 103bd85f3;  */

void FUN_103bd8548(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103bd85f4; end: 103bd85f7;  */

void FUN_103bd85f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff56a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc627a0;
  func_0x000107c61520(&UNK_10dc627a0,&UNK_1106e4448);
  puRam0000000112ff56a8 = puVar1;
  return;
}



/* Entry: 103bd85f8; end: 103bd8637;  */

void FUN_103bd85f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff56a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc627a0;
  func_0x000107c61520(&UNK_10dc627a0,&UNK_1106e4448);
  puRam0000000112ff56a8 = puVar1;
  return;
}



/* Entry: 103bd8638; end: 103bd87c7;  */

void FUN_103bd8638(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103bd87c8; end: 103bd88e7;  */

void FUN_103bd87c8(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0xb8);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x90,0,0);
  puVar1 = (undefined1 *)(lVar3 + 0x10);
  func_0x000107c61618();
  *(undefined1 **)(unaff_x22 + 200) = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa8;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_103bd88e8;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,1);
    uVar2 = 0x112ff56b0;
    func_0x0001000285a8(0x112ff56b0,&UNK_10dc62878);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_103bd89c4;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1106e4530;
    *(long *)(unaff_x22 + 0x70) = lVar3;
    func_0x000107c414b0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000101db2330();
  func_0x000107c613f8(&UNK_1106e45d8,puVar1,0,0);
  *puVar1 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000103bd88e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103bd88e8; end: 103bd897f;  */

void FUN_103bd88e8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xd0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = (code *)0x103bd8940;
  }
  else {
    pcVar1 = FUN_103bd8980;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103bd8980; end: 103bd89c3;  */

void FUN_103bd8980(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c61654();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103bd89c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103bd89c4; end: 103bd8a6f;  */

void FUN_103bd89c4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar2,*(undefined8 *)(param_1 + 0x38));
  lVar4 = *plVar2;
  if (param_3 != 0) {
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar3);
    return;
  }
  if (param_2 != 0) {
    **(long **)(*(long *)(lVar4 + 0x40) + 0x28) = param_2;
    func_0x000107c615f0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bd8a70);
  (*pcVar1)();
}



/* Entry: 103bd8a70; end: 103bd8a8b;  */

void FUN_103bd8a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103bd8a8c,0,0);
  return;
}



/* Entry: 103bd8a8c; end: 103bd8bab;  */

void FUN_103bd8a8c(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0xb8);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x90,0,0);
  puVar1 = (undefined1 *)(lVar3 + 0x10);
  func_0x000107c61618();
  *(undefined1 **)(unaff_x22 + 200) = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa8;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_103bd8bac;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,1);
    uVar2 = 0x112e2b048;
    func_0x0001000285a8(0x112e2b048,&UNK_10da13cc0);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_103bd8c04;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1106e4508;
    *(long *)(unaff_x22 + 0x70) = lVar3;
    func_0x000107c427c4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000101db2330();
  func_0x000107c613f8(&UNK_1106e45d8,puVar1,0,0);
  *puVar1 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000103bd8ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103bd8bac; end: 103bd8c03;  */

void FUN_103bd8bac(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xd0) = lVar2;
  if (lVar2 == 0) {
    uVar1 = 0x103bd8fbc;
  }
  else {
    uVar1 = 0x103bd8fcc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 103bd8c04; end: 103bd8caf;  */

void FUN_103bd8c04(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar2,*(undefined8 *)(param_1 + 0x38));
  lVar4 = *plVar2;
  if (param_3 != 0) {
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar3);
    return;
  }
  if (param_2 != 0) {
    **(long **)(*(long *)(lVar4 + 0x40) + 0x28) = param_2;
    func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bd8cb0);
  (*pcVar1)();
}



/* Entry: 103bd8cb0; end: 103bd8cc7;  */

void FUN_103bd8cb0(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xe0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103bd8cc8,0,0);
  return;
}



/* Entry: 103bd8cc8; end: 103bd8d77;  */

void FUN_103bd8cc8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xd0;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_103bd8d78;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,1);
  uVar3 = 0x112e2b048;
  func_0x0001000285a8(0x112e2b048,&UNK_10da13cc0);
  *(undefined **)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
  *(code **)(unaff_x22 + 0xa0) = FUN_103bd8c04;
  *(undefined **)(unaff_x22 + 0xa8) = &UNK_1106e44b8;
  *(long *)(unaff_x22 + 0xb0) = lVar2;
  func_0x000107c427c4(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 103bd8d78; end: 103bd8dcf;  */

void FUN_103bd8d78(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xe8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_103bd8dd0;
  }
  else {
    pcVar1 = FUN_103bd8f18;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103bd8dd0; end: 103bd8e87;  */

void FUN_103bd8dd0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 **)(unaff_x22 + 0x78) = (undefined8 *)(unaff_x22 + 0xd0);
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_103bd8e88;
  lVar1 = unaff_x22 + 0x50;
  func_0x000107c61448(lVar1,1);
  uVar2 = 0x112ff56b0;
  func_0x0001000285a8(0x112ff56b0,&UNK_10dc62878);
  *(undefined **)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
  *(code **)(unaff_x22 + 0xa0) = FUN_103bd89c4;
  *(undefined **)(unaff_x22 + 0xa8) = &UNK_1106e44e0;
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  func_0x000107c414b0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
  return;
}



/* Entry: 103bd8e88; end: 103bd8f17;  */

void FUN_103bd8e88(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x70);
  *(long *)(*unaff_x22 + 0xf8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = (code *)0x103bd8ee0;
  }
  else {
    pcVar1 = FUN_103bd8f54;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103bd8f18; end: 103bd8f53;  */

void FUN_103bd8f18(void)

{
  long unaff_x22;
  
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000103bd8f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103bd8f54; end: 103bd8f97;  */

void FUN_103bd8f54(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c61654();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103bd8f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103bd8f98; end: 103bd8fe3;  */

long FUN_103bd8f98(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 103bd8fe4; end: 103bd908f;  */

void FUN_103bd8fe4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103bd9090; end: 103bd9093;  */

void FUN_103bd9090(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff56b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc62880;
  func_0x000107c61520(&UNK_10dc62880,&UNK_1106e45d8);
  puRam0000000112ff56b8 = puVar1;
  return;
}



/* Entry: 103bd9094; end: 103bd90d3;  */

void FUN_103bd9094(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff56b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc62880;
  func_0x000107c61520(&UNK_10dc62880,&UNK_1106e45d8);
  puRam0000000112ff56b8 = puVar1;
  return;
}



/* Entry: 103bd90d4; end: 103bd9247;  */

void FUN_103bd90d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103bd9248; end: 103bd9257; -[_TtC30MemoriesEncryptionInfoServices30MemoriesEncryptionInfoServices encryptionInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd9248(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff56c8));
  return;
}



/* Entry: 103bd9258; end: 103bd9267; -[_TtC30MemoriesEncryptionInfoServices30MemoriesEncryptionInfoServices decryptionContextProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd9258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff56d8));
  return;
}



/* Entry: 103bd9268; end: 103bd932b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103bd9268(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff56c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff56d0) = param_2;
  func_0x000107c6157c(param_1);
  uVar1 = param_2;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ff56c8) = uVar1;
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ff56d8) = uVar1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return puVar2;
}



/* Entry: 103bd932c; end: 103bd938b; -[_TtC30MemoriesEncryptionInfoServices30MemoriesEncryptionInfoServices init] */

void FUN_103bd932c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesEncryptionInfoServices.MemoriesEncryptionInfoServices",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bd9358);
  (*pcVar1)();
}



/* Entry: 103bd938c; end: 103bd93e3; -[_TtC30MemoriesEncryptionInfoServices30MemoriesEncryptionInfoServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bd93b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bd93bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd938c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ff56c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff56c8));
  return;
}



/* Entry: 103bd93e4; end: 103bd9467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103bd93e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5708) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5710) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 103bd9468; end: 103bd949b;  */

void FUN_103bd9468(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bd949c; end: 103bd94d3; -[_TtC32MemoriesSnapInfoFetchingServices32MemoriesSnapInfoFetchingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd949c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ff5708));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff5710));
  return;
}



/* Entry: 103bd94d4; end: 103bd94e3; -[MemoriesInvalidStreamingContentRemovalServices remover] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd94d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5748));
  return;
}



/* Entry: 103bd94e4; end: 103bd9567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103bd94e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5740) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5748) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 103bd9568; end: 103bd95c7; -[MemoriesInvalidStreamingContentRemovalServices init] */

void FUN_103bd9568(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesInvalidStreamingContentRemovalServices.MemoriesInvalidStreamingContentRemovalServices"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bd9594);
  (*pcVar1)();
}



/* Entry: 103bd95c8; end: 103bd95ff; -[MemoriesInvalidStreamingContentRemovalServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd95c8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ff5740));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff5748));
  return;
}



/* Entry: 103bd9600; end: 103bd960f; -[SCMemoriesStreamingReceipt shouldTryDownload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bd9600(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff5778);
}



/* Entry: 103bd9610; end: 103bd96a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd9610(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112ff5778) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bd96a8; end: 103bd9727; -[SCMemoriesStreamingReceipt init] */

void FUN_103bd96a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesStreamingServices.MemoriesStreamingReceipt",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bd96d4);
  (*pcVar1)();
}



/* Entry: 103bd9728; end: 103bd9773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd9728(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff57a8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bd9774; end: 103bd97cf; -[MemoriesStreamingServices init] */

void FUN_103bd9774(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesStreamingServices.MemoriesStreamingServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bd97a0);
  (*pcVar1)();
}



/* Entry: 103bd97d0; end: 103bd97f3; -[MemoriesStreamingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd97d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff57a8));
  return;
}



/* Entry: 103bd97f4; end: 103bd989f;  */

void FUN_103bd97f4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103bd98a0; end: 103bd98af;  */

void FUN_103bd98a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103bd98b0; end: 103bd9943;  */

undefined * FUN_103bd98b0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5fb78();
  uVar2 = 0x2d616964656d2d67;
  puVar1 = PTR_PTR_1126b08b8;
  func_0x000107c610f8(PTR_PTR_1126b08b8);
  func_0x000107c5fadc(0x2d616964656d2d67,0xe800000000000000);
  func_0x000107c6142c(0xe800000000000000);
  func_0x000107c4766c(puVar1);
  func_0x000107c61170(uVar2);
  return puVar1;
}



/* Entry: 103bd9944; end: 103bd9adf; +[SCMemoriesStreamingUtils streamingContentKeyWithContentId:] */

void FUN_103bd9944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  func_0x000107c5fb78();
  uVar2 = 0x2d616964656d2d67;
  puVar1 = PTR_PTR_1126b08b8;
  func_0x000107c610f8(PTR_PTR_1126b08b8);
  func_0x000107c5fadc(0x2d616964656d2d67,0xe800000000000000);
  func_0x000107c6142c(0xe800000000000000);
  func_0x000107c4766c(puVar1);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103bd9ae0; end: 103bd9ae3;  */

undefined1 * FUN_103bd9ae0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar4 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    puVar6 = PTR_PTR_1126af5d0;
    func_0x000107c61168();
    puVar7 = puVar6;
    func_0x000103bd9f0c();
    puVar8 = &UNK_1106e48a8;
    func_0x000107c613f8(&UNK_1106e48a8,puVar7,0,0);
    *puVar7 = 0;
    puVar9 = puVar8;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar8);
    func_0x000107c42d78(puVar6);
    func_0x000107c61180();
    goto LAB_103bd9ec0;
  }
  lVar1 = param_1;
  func_0x00010b5f9b0c();
  lVar2 = lVar4;
  if ((int)lVar1 == 0) {
LAB_103bd9cb0:
    func_0x000107c5b2d0();
    func_0x000107c61180();
    if (param_1 == 0) {
      puVar6 = PTR_PTR_1126af5d0;
      func_0x000107c61168();
      puVar7 = puVar6;
      func_0x000103bd9f0c();
      puVar8 = &UNK_1106e48a8;
      func_0x000107c613f8(&UNK_1106e48a8,puVar7,0,0);
      *puVar7 = 1;
      puVar9 = puVar8;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar8);
      func_0x000107c42d78(puVar6);
    }
    else {
      lVar4 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c5fb78(lVar4,lVar2);
      uVar3 = 0x2d616964656d2d67;
      puVar8 = PTR_PTR_1126b08b8;
      func_0x000107c610f8(PTR_PTR_1126b08b8);
      func_0x000107c5fadc(0x2d616964656d2d67,0xe800000000000000);
      func_0x000107c6142c(0xe800000000000000);
      func_0x000107c4766c(puVar8);
      func_0x000107c6142c(lVar2);
      func_0x000107c61170(uVar3);
      lVar4 = param_2;
      func_0x000107c4f740();
      puVar6 = PTR_PTR_1126af5d0;
      func_0x000107c61168();
      if (lVar4 != 0) {
        puVar7 = puVar6;
        func_0x000103bd9f0c();
        puVar5 = &UNK_1106e48a8;
        func_0x000107c613f8(&UNK_1106e48a8,puVar7,0,0);
        *puVar7 = 2;
        puVar9 = puVar5;
        func_0x000107c5ed2c();
        func_0x000107c614ac(puVar5);
        func_0x000107c42d78(puVar6);
        func_0x000107c61180();
        func_0x000107c615e8(param_2);
        func_0x000107c61170(puVar8);
        goto LAB_103bd9ec0;
      }
      func_0x000107c5c3c8();
      puVar9 = puVar8;
    }
  }
  else {
    lVar2 = param_1;
    func_0x00010b5f9b9c(param_1);
    func_0x000107c61180();
    lVar1 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    func_0x000107c5fb78(lVar1,lVar4);
    uVar3 = 0x2d616964656d2d67;
    lVar2 = -0x1800000000000000;
    puVar9 = PTR_PTR_1126b08b8;
    func_0x000107c610f8(PTR_PTR_1126b08b8);
    func_0x000107c5fadc(0x2d616964656d2d67,0xe800000000000000);
    func_0x000107c6142c(0xe800000000000000);
    func_0x000107c4766c(puVar9);
    func_0x000107c6142c(lVar4);
    func_0x000107c61170(uVar3);
    lVar4 = param_2;
    func_0x000107c4f740();
    if (lVar4 != 0) {
      func_0x000107c61170(puVar9);
      goto LAB_103bd9cb0;
    }
    puVar6 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c5c3c8();
  }
  func_0x000107c61180();
  func_0x000107c615e8(param_2);
LAB_103bd9ec0:
  func_0x000107c61170(puVar9);
  return puVar6;
}


