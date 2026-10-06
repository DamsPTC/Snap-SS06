/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101217114; end: 101217277;  */

long FUN_101217114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  uVar1 = param_3;
  func_0x000107c3ff9c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return unaff_x20;
}



/* Entry: 101217278; end: 1012172b3;  */

void FUN_101217278(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1012172b4; end: 1012172d3;  */

void FUN_1012172b4(void)

{
  func_0x0001012171b0();
  return;
}



/* Entry: 1012172d4; end: 1012172db;  */

undefined8 FUN_1012172d4(void)

{
  return 0;
}



/* Entry: 1012172dc; end: 1012172fb;  */

void FUN_1012172dc(void)

{
  func_0x000107c61168(&PTR_PTR_112d68b78);
  return;
}



/* Entry: 1012172fc; end: 10121760b;  */

/* WARNING: Possible PIC construction at 0x00010121740c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101217584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101217594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012175ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012175bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101217598) */
/* WARNING: Removing unreachable block (ram,0x000101217588) */
/* WARNING: Removing unreachable block (ram,0x000101217410) */
/* WARNING: Removing unreachable block (ram,0x0001012175b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012172fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d68bf8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x000107c509b4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar1);
  if (lVar2 == 0) {
    return;
  }
  puVar5 = PTR_PTR_1126afe50;
  func_0x000107c610f8(PTR_PTR_1126afe50);
  func_0x000107c4842c();
  lVar1 = *(long *)(unaff_x20 + _DAT_112d68c00);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar3 = lVar1;
    func_0x000107c409a0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126a66d0;
      func_0x000107c610f8(PTR_PTR_1126a66d0);
      func_0x000107c453e4();
      lVar1 = *(long *)(unaff_x20 + _DAT_112d68bf0);
      func_0x000107c59fd0();
      puVar5 = *(undefined **)(lVar1 + _DAT_113040100);
      FUN_10121760c(puVar5);
      func_0x000107c5462c(puVar4,param_2,puVar5);
      goto code_r0x000107c61170;
    }
  }
  func_0x000107c615e8(lVar2);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10121760c; end: 101217797;  */

/* WARNING: Possible PIC construction at 0x0001012176a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012176ac) */

void FUN_10121760c(long param_1)

{
  if ((param_1 == 1) || (param_1 == 0)) {
    func_0x000107c610f8(PTR_PTR_1126b5008);
  }
  else {
    func_0x000107c610f8(PTR_PTR_1126b5008);
    func_0x000107c5fadc(0x6e776f6e6b6e75,0xe700000000000000);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c011910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101217798; end: 101217807;  */

void FUN_101217798(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101217808,uVar1,uVar2);
  return;
}



/* Entry: 101217808; end: 101217853;  */

void FUN_101217808(void)

{
  bool bVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  bVar1 = lVar2 == 0;
  if (!bVar1) {
    func_0x000107c5b60c(*(undefined8 *)(unaff_x22 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x000101217850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(bVar1);
  return;
}



/* Entry: 101217854; end: 101217897;  */

void FUN_101217854(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000101217894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101217898; end: 1012178f7; -[_TtC28SoundReportPagePresenterImpl30SoundReportPagePresenterRouter init] */

void FUN_101217898(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SoundReportPagePresenterImpl.SoundReportPagePresenterRouter",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012178c4);
  (*pcVar1)();
}



/* Entry: 1012178f8; end: 10121793f; -[_TtC28SoundReportPagePresenterImpl30SoundReportPagePresenterRouter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101217914: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101217918) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012178f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d68bf0));
  return;
}



/* Entry: 101217940; end: 10121795f;  */

void FUN_101217940(void)

{
  func_0x000107c61168(&PTR_PTR_1127bc0d8);
  return;
}



/* Entry: 101217960; end: 101217983;  */

/* WARNING: Possible PIC construction at 0x00010121777c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101217780) */

void FUN_101217960(undefined1 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_110394b80;
  func_0x000107c613fc(&UNK_110394b80,0x19,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  puVar1[0x18] = param_1;
  puVar2 = &UNK_110394ba8;
  func_0x000107c613fc(&UNK_110394ba8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10d92c838;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c615f0(uVar3);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(6,3,0x50,4,0,0,&UNK_10d92c848,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101217984; end: 1012179d7;  */

void FUN_101217984(void)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1012179d8;
  *(undefined1 *)(plVar3 + 4) = uVar1;
  plVar3[2] = lVar4;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[3] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101217808,lVar2,lVar4);
  return;
}



/* Entry: 1012179d8; end: 101217a1b;  */

void FUN_1012179d8(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101217a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101217a1c; end: 101217a8b;  */

void FUN_101217a1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101217a8c;
  FUN_100ffbb74(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101217a8c; end: 101217ac7;  */

void FUN_101217a8c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101217ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101217ac8; end: 101217ad3; -[SCSoundReportPagePresenterEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101217ac8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d68c30;
  func_0x000107c61428(param_1 + _DAT_112d68c30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101217ad4; end: 101217adf; -[SCSoundReportPagePresenterEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101217ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d68c30;
  func_0x000107c61428(param_1 + _DAT_112d68c30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101217ae0; end: 101217aeb; -[SCSoundReportPagePresenterEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101217ae0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d68c38;
  func_0x000107c61428(param_1 + _DAT_112d68c38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101217aec; end: 101217af7; -[SCSoundReportPagePresenterEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101217aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d68c38;
  func_0x000107c61428(param_1 + _DAT_112d68c38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101217af8; end: 101217b03; -[SCSoundReportPagePresenterEntryPoint customReportServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101217af8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d68c40;
  func_0x000107c61428(param_1 + _DAT_112d68c40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101217b04; end: 101217b47;  */

void FUN_101217b04(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101217b48; end: 101217b53; -[SCSoundReportPagePresenterEntryPoint setCustomReportServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101217b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d68c40;
  func_0x000107c61428(param_1 + _DAT_112d68c40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101217b54; end: 101217ba7;  */

void FUN_101217b54(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101217ba8; end: 101217cd3;  */

/* WARNING: Possible PIC construction at 0x000101217c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101217c70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101217c64) */
/* WARNING: Removing unreachable block (ram,0x000101217c74) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_101217ba8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40014();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c410c4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar3 = 0;
        FUN_1012172dc();
        func_0x000107c613fc();
        *(undefined8 *)(lVar3 + 0x28) = 0;
        *(long *)(lVar3 + 0x10) = lVar1;
        *(long *)(lVar3 + 0x18) = lVar2;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        lVar1 = unaff_x20;
        func_0x000107c3ff9c();
        func_0x000107c61180();
        *(long *)(lVar3 + 0x20) = lVar1;
        func_0x0001012171b0();
        lVar1 = unaff_x20;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 101217cd4; end: 101217cfb; -[SCSoundReportPagePresenterEntryPoint begin] */

void FUN_101217cd4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101217ba8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101217cfc; end: 101217d3f; -[SCSoundReportPagePresenterEntryPoint end] */

void FUN_101217cfc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101217d40; end: 101217f43;  */

void FUN_101217d40(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10d12c0)) &&
           (func_0x000107c605b8(0xd000000000000014,0x800000010ef2ed40,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SoundReportPagePresenterImpl/SCSoundReportPagePresenterEntryPoint.swift"
                              ,0x47,2,0x2c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101217f44);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53d14();
        goto LAB_101217dcc;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
LAB_101217dcc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101217f44; end: 101217fef; -[SCSoundReportPagePresenterEntryPoint setValue:forIvarName:] */

void FUN_101217f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101217d40(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101217ff0; end: 101218077; -[SCSoundReportPagePresenterEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101217ff0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d68c30,0);
  func_0x000107c61614(param_1 + _DAT_112d68c38,0);
  func_0x000107c61614(param_1 + _DAT_112d68c40,0);
  *(undefined8 *)(param_1 + _DAT_112d68c48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101218078; end: 1012180ab;  */

void FUN_101218078(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012180ac; end: 101218103; -[SCSoundReportPagePresenterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012180ac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d68c30);
  func_0x000107c61610(param_1 + _DAT_112d68c38);
  func_0x000107c61610(param_1 + _DAT_112d68c40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d68c48));
  return;
}



/* Entry: 101218104; end: 101218123;  */

void FUN_101218104(void)

{
  func_0x000107c61168(&PTR_PTR_1127bc1a8);
  return;
}



/* Entry: 101218124; end: 101218167;  */

void FUN_101218124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 101218168; end: 10121818b;  */

/* WARNING: Possible PIC construction at 0x000101218174: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101218178) */

void FUN_101218168(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10121818c; end: 1012181df;  */

void FUN_10121818c(void)

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



/* Entry: 1012181e0; end: 10121824b;  */

void FUN_1012181e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126a66e8;
  func_0x000107c610f8();
  func_0x000107c45844();
  uVar2 = 0;
  FUN_10121e4c4(0);
  func_0x000107c610f8();
  func_0x00010121e434(puVar1,uVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 10121824c; end: 1012182cb;  */

void FUN_10121824c(undefined8 param_1)

{
  if (lRam0000000112d68ca0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6291f8);
  return;
}



/* Entry: 1012182cc; end: 1012182d7; -[SCValdiMusicAudioRecordingServiceProvider audioCaptureServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012182cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d68d60;
  func_0x000107c61428(param_1 + _DAT_112d68d60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012182d8; end: 1012182e3; -[SCValdiMusicAudioRecordingServiceProvider setAudioCaptureServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012182d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d68d60;
  func_0x000107c61428(param_1 + _DAT_112d68d60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012182e4; end: 1012182ef; -[SCValdiMusicAudioRecordingServiceProvider audioSessionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012182e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d68d68;
  func_0x000107c61428(param_1 + _DAT_112d68d68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012182f0; end: 1012182fb; -[SCValdiMusicAudioRecordingServiceProvider setAudioSessionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012182f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d68d68;
  func_0x000107c61428(param_1 + _DAT_112d68d68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012182fc; end: 101218307; -[SCValdiMusicAudioRecordingServiceProvider temporaryFileWriterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012182fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d68d70;
  func_0x000107c61428(param_1 + _DAT_112d68d70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101218308; end: 10121834b;  */

void FUN_101218308(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10121834c; end: 101218357; -[SCValdiMusicAudioRecordingServiceProvider setTemporaryFileWriterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121834c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d68d70;
  func_0x000107c61428(param_1 + _DAT_112d68d70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101218358; end: 1012183ab;  */

void FUN_101218358(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012183ac; end: 101218513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012183ac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = unaff_x20;
  func_0x000107c3e3ac();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3e3f8();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c5c804();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = 0;
        FUN_10121824c();
        func_0x000107c613fc();
        *(long *)(lVar4 + 0x10) = lVar1;
        *(long *)(lVar4 + 0x18) = lVar2;
        *(long *)(lVar4 + 0x20) = lVar3;
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d68d78);
        *(long *)(unaff_x20 + _DAT_112d68d78) = lVar4;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c6157c(lVar4);
        func_0x000107c61574(uVar6);
        puVar5 = PTR_PTR_1126a66e8;
        func_0x000107c610f8(PTR_PTR_1126a66e8);
        func_0x000107c45844();
        uVar6 = 0;
        FUN_10121e4c4(0);
        func_0x000107c610f8();
        func_0x00010121e434(puVar5,uVar6);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61574(lVar4);
        return;
      }
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101218514; end: 10121859f; -[SCValdiMusicAudioRecordingServiceProvider provide] */

void FUN_101218514(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_1012183ac();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "ValdiMusicAudioRecordingProvider/SCValdiMusicAudioRecordingServiceProvider.swift"
                      ,0x50,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012185a0);
  (*pcVar1)();
}



/* Entry: 1012185a0; end: 1012185d3; -[SCValdiMusicAudioRecordingServiceProvider __safeProvide] */

void FUN_1012185a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1012183ac();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1012185d4; end: 101218617; -[SCValdiMusicAudioRecordingServiceProvider end] */

void FUN_1012185d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101218618; end: 10121881b;  */

void FUN_101218618(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10d11a0)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000014,0x800000010ef2ee60,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10e5200)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000014,0x800000010ef1ae00,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0xd00000000000001b;
          if (((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10df490)) &&
             (func_0x000107c605b8(0xd00000000000001b,0x800000010ef20b70,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "ValdiMusicAudioRecordingProvider/SCValdiMusicAudioRecordingServiceProvider.swift"
                                ,0x50,2,0x34,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10121881c);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c59c58();
          goto LAB_1012186ac;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52a10();
      goto LAB_1012186ac;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c529ec();
LAB_1012186ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10121881c; end: 1012188c7; -[SCValdiMusicAudioRecordingServiceProvider setValue:forIvarName:] */

void FUN_10121881c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101218618(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1012188c8; end: 10121894f; -[SCValdiMusicAudioRecordingServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012188c8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d68d60,0);
  func_0x000107c61614(param_1 + _DAT_112d68d68,0);
  func_0x000107c61614(param_1 + _DAT_112d68d70,0);
  *(undefined8 *)(param_1 + _DAT_112d68d78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101218950; end: 101218983;  */

void FUN_101218950(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101218984; end: 1012189db; -[SCValdiMusicAudioRecordingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101218984(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d68d60);
  func_0x000107c61610(param_1 + _DAT_112d68d68);
  func_0x000107c61610(param_1 + _DAT_112d68d70);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d68d78));
  return;
}



/* Entry: 1012189dc; end: 1012189fb;  */

void FUN_1012189dc(void)

{
  func_0x000107c61168(&PTR_PTR_112d68dc0);
  return;
}



/* Entry: 1012189fc; end: 101218ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1012189fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  func_0x0001000285a8(0x112d3bf08,&UNK_10d913340);
  func_0x000107c613fc();
  puVar1 = (undefined *)0x0;
  func_0x00010095c380();
  lVar2 = *(long *)(unaff_x20 + _DAT_112d68e30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c41574();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      puVar8 = &UNK_110394d60;
      func_0x000107c613fc(&UNK_110394d60,0x11,7);
      puVar8[0x10] = 0;
      puVar4 = &UNK_110394d88;
      func_0x000107c613fc(&UNK_110394d88,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar8;
      *(undefined **)(puVar4 + 0x18) = puVar1;
      lVar3 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      *(undefined8 *)(lVar3 + 0x20) = param_1;
      *(undefined8 *)(lVar3 + 0x28) = param_2;
      func_0x000107c6157c(puVar8);
      func_0x000107c6157c(puVar1);
      func_0x000107c61434(param_2);
      lVar5 = lVar3;
      func_0x000107c5fc48(lVar3,PTR___sSSN_11034da80);
      func_0x000107c61574(lVar3);
      lVar3 = lVar2;
      func_0x000107c3ef58(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      puVar6 = &UNK_110394db0;
      func_0x000107c613fc(&UNK_110394db0,0x20,7);
      *(code **)(puVar6 + 0x10) = FUN_1012190b8;
      *(undefined **)(puVar6 + 0x18) = puVar4;
      uStack_60 = 0x1012190c0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_101218f4c;
      puStack_68 = &UNK_110394dc8;
      puStack_58 = puVar6;
      func_0x000107c60bc4(&puStack_80);
      puVar6 = puStack_58;
      func_0x000107c6157c(puVar4);
      func_0x000107c61574(puVar6);
      lVar5 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar5);
      func_0x000107c61170(lVar5);
      uVar10 = *(undefined8 *)(puVar1 + 0x10);
      uVar9 = uVar10;
      func_0x000107c6157c(uVar10);
      func_0x000103edf0bc();
      func_0x000107c61574(puVar1);
      func_0x000107c615e8(lVar2);
      func_0x000107c61574(puVar8);
      puVar1 = puVar4;
      goto LAB_101218ca0;
    }
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  puStack_80 = puVar8;
  func_0x000100b60084(&puStack_80);
  func_0x000107c61170(puVar8);
  uVar10 = *(undefined8 *)(puVar1 + 0x10);
  uVar9 = uVar10;
  func_0x000107c6157c(uVar10);
  func_0x000103edf0bc();
LAB_101218ca0:
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar10);
  return uVar9;
}



/* Entry: 101218cd0; end: 101218d67;  */

void FUN_101218cd0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_60,1,0);
    *(undefined1 *)(param_2 + 0x10) = 1;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    puStack_68 = puVar1;
    func_0x000100b60084(&puStack_68);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 101218d68; end: 101218f47;  */

void FUN_101218d68(undefined8 param_1,code *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 uStack_51;
  
  puStack_88 = (undefined *)0x0;
  uVar2 = 0;
  FUN_1012190e4(0);
  func_0x000107c5fc50(param_1,&puStack_88,uVar2);
  puVar4 = puStack_88;
  if (puStack_88 != (undefined *)0x0) {
    puVar7 = (undefined *)((ulong)puStack_88 & 0xffffffffffffff8);
    if ((ulong)puStack_88 >> 0x3e == 0) {
      puVar3 = *(undefined **)(puVar7 + 0x10);
    }
    else {
      puVar3 = puStack_88;
      if (-1 < (long)puStack_88) {
        puVar3 = puVar7;
      }
      func_0x000107c60480();
    }
    if (puVar3 != (undefined *)0x0) {
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        if (*(long *)(puVar7 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101218f48);
          (*pcVar1)();
        }
        uVar2 = *(undefined8 *)(puVar4 + 0x20);
        func_0x000107c61174(uVar2);
      }
      else {
        uVar2 = 0;
        func_0x00010121c198(0,puVar4);
      }
      func_0x000107c6142c(puVar4);
      uStack_51 = 0;
      puVar4 = &UNK_110394e00;
      func_0x000107c613fc(&UNK_110394e00,0x18,7);
      *(undefined1 **)(puVar4 + 0x10) = &uStack_51;
      puVar7 = &UNK_110394e28;
      func_0x000107c613fc(&UNK_110394e28,0x20,7);
      *(code **)(puVar7 + 0x10) = FUN_101219128;
      *(undefined **)(puVar7 + 0x18) = puVar4;
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_68 = (code *)0x10121914c;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      pcStack_78 = FUN_100fe2610;
      puStack_70 = &UNK_110394e40;
      ppuVar5 = &puStack_88;
      puStack_60 = puVar7;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_60);
      pcStack_68 = FUN_101218f48;
      puStack_60 = (undefined *)0x0;
      puStack_88 = puVar3;
      uStack_80 = 0x42000000;
      pcStack_78 = FUN_100fe2654;
      puStack_70 = &UNK_110394e68;
      ppuVar6 = &puStack_88;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_60);
      func_0x000107c4c744(uVar2);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c60bd0(ppuVar5);
      (*param_2)(uStack_51);
      func_0x000107c61574(puVar4);
      func_0x000107c61170(uVar2);
      return;
    }
    func_0x000107c6142c(puVar4);
  }
  (*param_2)(0);
  return;
}



/* Entry: 101218f48; end: 101218f4b;  */

void FUN_101218f48(void)

{
  return;
}



/* Entry: 101218f4c; end: 101218f97;  */

void FUN_101218f4c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101218f98; end: 101218fff; -[_TtC31SnapEditorMusicPluginEntryPoint33SnapEditorLensSponsorshipProvider isLensSponsoredWithLensId:] */

void FUN_101218f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1012189fc(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101219000; end: 10121905f; -[_TtC31SnapEditorMusicPluginEntryPoint33SnapEditorLensSponsorshipProvider init] */

void FUN_101219000(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorMusicPluginEntryPoint.SnapEditorLensSponsorshipProvider",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10121902c);
  (*pcVar1)();
}



/* Entry: 101219060; end: 101219097; -[_TtC31SnapEditorMusicPluginEntryPoint33SnapEditorLensSponsorshipProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010121907c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101219080) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101219060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d68e30));
  return;
}



/* Entry: 101219098; end: 1012190b7;  */

void FUN_101219098(void)

{
  func_0x000107c61168(&PTR_PTR_1127bc2c0);
  return;
}



/* Entry: 1012190b8; end: 1012190e3;  */

void FUN_1012190b8(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    func_0x000107c61428(lVar1 + 0x10,auStack_60,1,0);
    *(undefined1 *)(lVar1 + 0x10) = 1;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    puStack_68 = puVar2;
    func_0x000100b60084(&puStack_68);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1012190e4; end: 101219127;  */

void FUN_1012190e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d68e68 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126de278;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d68e68 = puVar1;
  return;
}



/* Entry: 101219128; end: 10121916b;  */

void FUN_101219128(undefined1 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  func_0x000107c4a4d8();
  *puVar1 = param_1;
  return;
}



/* Entry: 10121916c; end: 101219183;  */

void FUN_10121916c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101219184; end: 101219223;  */

void FUN_101219184(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101219224; end: 101219233;  */

void FUN_101219224(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101219234; end: 1012192bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101219234(void)

{
  long unaff_x20;
  long lVar1;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112d68e80);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012192bc; end: 101219357; -[_TtC31SnapEditorMusicPluginEntryPoint49SnapEditorMusicContentBasedRecommendationProvider dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012192bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112d68e80);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c6157c(lVar2);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101219358; end: 10121939f; -[_TtC31SnapEditorMusicPluginEntryPoint49SnapEditorMusicContentBasedRecommendationProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101219358(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d68e70);
  func_0x000107c61610(param_1 + _DAT_112d68e78);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d68e80));
  return;
}



/* Entry: 1012193a0; end: 10121950f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1012193a0(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  undefined1 auStack_78 [40];
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  puVar5 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar3 = _DAT_112d68e80;
  puVar1 = PTR___sytN_11034f1b0;
  lVar10 = *(long *)(unaff_x20 + _DAT_112d68e80);
  if (lVar10 != 0) {
    func_0x000107c6157c(lVar10);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar10);
  }
  lVar2 = _DAT_112d68e70;
  puVar6 = &UNK_110394ea0;
  func_0x000107c613fc(&UNK_110394ea0,0x18,7);
  lVar10 = unaff_x20 + _DAT_112d68e78;
  func_0x000107c61618(lVar10);
  func_0x000107c61614(puVar6 + 0x10,lVar10);
  func_0x000107c61170(lVar10);
  FUN_10121acd4(unaff_x20 + lVar2,auStack_78);
  puVar7 = &UNK_110394ec8;
  func_0x000107c613fc(&UNK_110394ec8,0x50,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined **)(puVar7 + 0x18) = puVar5;
  FUN_10121ad18(auStack_78,puVar7 + 0x20);
  *(long *)(puVar7 + 0x48) = lVar4;
  func_0x000107c61174(puVar5);
  uVar8 = 3;
  func_0x0001001ca524(3,3,0x50,4,0,0,&UNK_10d92c9c0,puVar7,puVar1 + 8);
  func_0x000107c61574(puVar7);
  uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = uVar8;
  func_0x000107c61574(uVar9);
  return puVar5;
}



/* Entry: 101219510; end: 10121952b;  */

void FUN_101219510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_4;
  *(undefined8 *)(unaff_x22 + 200) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121952c,0,0);
  return;
}



/* Entry: 10121952c; end: 10121963b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10121952c(void)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x48,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  lVar7 = _DAT_113812288;
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    func_0x000107c61428(lVar5 + _DAT_113812288,unaff_x22 + 0x60,0,0);
    lVar7 = lVar5 + lVar7;
    func_0x000107c61618();
    func_0x000107c61170(lVar5);
  }
  *(long *)(unaff_x22 + 0xd0) = lVar7;
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x78,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar5 + _DAT_11302bad8);
    func_0x000107c615f0(lVar7);
    func_0x000107c61170(lVar5);
  }
  *(long *)(unaff_x22 + 0xd8) = lVar7;
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10121963c;
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[2] = uVar2;
  lVar5 = 0;
  func_0x000107c5ede0();
  plVar1[3] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar1[4] = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[5] = uVar3;
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  plVar1[6] = (long)plVar4;
  *plVar4 = (long)plVar1;
  plVar4[1] = (long)FUN_101219e18;
  plVar4[3] = uVar2;
  plVar4[4] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121a28c,0,0,uVar6);
  return;
}



/* Entry: 10121963c; end: 101219693;  */

void FUN_10121963c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xd8);
  *(undefined8 *)(lVar2 + 0xe8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe0));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101219694,0,0);
  return;
}



/* Entry: 101219694; end: 1012198cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101219694(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) != 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x00010121ade4();
    puVar2 = &UNK_110394f88;
    func_0x000107c613f8(&UNK_110394f88,param_1,0,0);
    puVar3 = puVar2;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar2);
    func_0x000107c43b70(uVar7);
    func_0x000107c61170(puVar3);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101219730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar9 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0x90,0,0);
  lVar9 = lVar9 + 0x10;
  func_0x000107c61618();
  if (lVar9 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(lVar9 + _DAT_11302baf8);
    func_0x000107c61174(lVar10);
    func_0x000107c61170(lVar9);
  }
  if (*(long *)(unaff_x22 + 0xe8) == 0 && lVar10 == 0) {
    lVar9 = *(long *)(unaff_x22 + 0xd0);
    if (lVar9 != 0) {
      func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
      func_0x000107c61174();
      func_0x000100759c94();
      *(long *)(unaff_x22 + 0xf0) = lVar9;
      plVar5 = (long *)0x80;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xf8) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1012198d0;
                    /* WARNING: Could not recover jumptable at 0x000101219810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      FUN_100f96304();
      return;
    }
    plVar5 = (long *)0x50;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x108) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101219a94;
    lVar9 = *(long *)(unaff_x22 + 200);
    plVar5[5] = *(long *)(unaff_x22 + 0xb0);
    plVar5[6] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101219f6c,0,0);
    return;
  }
  *(long *)(unaff_x22 + 0x118) = lVar10;
  lVar4 = *(long *)(unaff_x22 + 0xc0);
  uVar7 = *(undefined8 *)(lVar4 + 0x18);
  lVar9 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar7);
  piVar6 = *(int **)(lVar9 + 0x20);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x120) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101219b7c;
                    /* WARNING: Could not recover jumptable at 0x000101219888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,unaff_x22 + 0x10,lVar10,*(undefined8 *)(unaff_x22 + 0xe8),uVar7,lVar9);
  return;
}



/* Entry: 1012198d0; end: 101219923;  */

void FUN_1012198d0(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x100) = param_1;
  *(undefined1 *)(lVar1 + 0x128) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101219924,0,0);
  return;
}



/* Entry: 101219924; end: 101219a93;  */

void FUN_101219924(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x100);
  if (*(char *)(unaff_x22 + 0x128) == '\x01') {
    *(long *)(unaff_x22 + 0xa8) = lVar5;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0xa8,uVar6,PTR___ss5ErrorWS_11034ee10);
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
    func_0x000100ca8518(uVar7,1);
    func_0x000107c61170(uVar6);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
    func_0x000107c61170(uVar6);
    if (lVar5 != 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
      *(undefined8 *)(unaff_x22 + 0x118) = uVar7;
      lVar2 = *(long *)(unaff_x22 + 0xc0);
      uVar6 = *(undefined8 *)(lVar2 + 0x18);
      lVar5 = *(long *)(lVar2 + 0x20);
      func_0x0001000a8868(lVar2,uVar6);
      piVar4 = *(int **)(lVar5 + 0x20);
      iVar1 = *piVar4;
      plVar3 = (long *)(ulong)(uint)piVar4[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x120) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_101219b7c;
                    /* WARNING: Could not recover jumptable at 0x000101219a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar4))
                (plVar3,unaff_x22 + 0x10,uVar7,*(undefined8 *)(unaff_x22 + 0xe8),uVar6,lVar5);
      return;
    }
  }
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101219a94;
  lVar5 = *(long *)(unaff_x22 + 200);
  plVar3[5] = *(long *)(unaff_x22 + 0xb0);
  plVar3[6] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101219f6c,0,0);
  return;
}



/* Entry: 101219a94; end: 101219ae3;  */

void FUN_101219a94(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x110) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101219ae4,0,0);
  return;
}



/* Entry: 101219ae4; end: 101219b7b;  */

void FUN_101219ae4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x118) = uVar7;
  lVar4 = *(long *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x120) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101219b7c;
                    /* WARNING: Could not recover jumptable at 0x000101219b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,unaff_x22 + 0x10,uVar7,*(undefined8 *)(unaff_x22 + 0xe8),uVar2,lVar3);
  return;
}



/* Entry: 101219b7c; end: 101219bc3;  */

void FUN_101219b7c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x120));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101219bc4,0,0);
  return;
}



/* Entry: 101219bc4; end: 101219d5b;  */

void FUN_101219bc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  
  lVar12 = *(long *)(unaff_x22 + 0x10);
  puVar9 = *(undefined **)(unaff_x22 + 0xe8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
  if (lVar12 == 0) {
    func_0x00010121ade4();
    puVar7 = &UNK_110394f88;
    func_0x000107c613f8(&UNK_110394f88,param_1,0,0);
    puVar8 = puVar7;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar7);
    func_0x000107c43b70(uVar11);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar10);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
    puVar7 = PTR_PTR_1126a66f0;
    func_0x000107c610f8(PTR_PTR_1126a66f0);
    func_0x000107c61174(lVar12);
    func_0x000107c5fadc(uVar4,uVar3);
    func_0x000107c5fadc(uVar5,uVar2);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c48e0c(puVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar12);
    func_0x000107c43b74(uVar11);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar9);
    FUN_10121af94((long *)(unaff_x22 + 0x10),0x112d68eb8,&UNK_10d92c9d8);
    puVar9 = puVar7;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000101219d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101219d5c; end: 101219e17;  */

void FUN_101219d5c(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x22;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x10) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x18) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x28) = uVar3;
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101219e18;
  plVar4[3] = uVar1;
  plVar4[4] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121a28c,0,0);
  return;
}



/* Entry: 101219e18; end: 101219e5f;  */

void FUN_101219e18(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101219e60,0,0);
  return;
}



/* Entry: 101219e60; end: 101219f53;  */

void FUN_101219e60(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar1 = *(long *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar6 = uVar4;
  (**(code **)(lVar1 + 0x30))(uVar4,1,uVar3);
  if ((int)uVar6 == 1) {
    FUN_10121af94(uVar4,0x112d36580,&UNK_10d9016d0);
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
    (**(code **)(lVar1 + 0x20))(uVar6,uVar4,uVar3);
    puVar5 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x000107c610f8(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    puVar2 = puVar5;
    func_0x000107c5ed90();
    func_0x000107c48fd4(puVar5);
    func_0x000107c61170(puVar2);
    (**(code **)(lVar1 + 8))(uVar6,uVar3);
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101219f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar5);
  return;
}



/* Entry: 101219f54; end: 101219f6b;  */

void FUN_101219f54(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101219f6c,0,0);
  return;
}



/* Entry: 101219f6c; end: 10121a013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101219f6c(void)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar5 + _DAT_11302bad8);
    func_0x000107c615f0(lVar6);
    func_0x000107c61170(lVar5);
  }
  *(long *)(unaff_x22 + 0x38) = lVar6;
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10121a014;
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[2] = uVar2;
  lVar5 = 0;
  func_0x000107c5ede0();
  plVar1[3] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar1[4] = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[5] = uVar3;
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  plVar1[6] = (long)plVar4;
  *plVar4 = (long)plVar1;
  plVar4[1] = (long)FUN_10121a118;
  plVar4[3] = uVar2;
  plVar4[4] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121a8b8,0,0);
  return;
}



/* Entry: 10121a014; end: 10121a05f;  */

void FUN_10121a014(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x38);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x40));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010121a05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(param_1);
  return;
}



/* Entry: 10121a060; end: 10121a117;  */

void FUN_10121a060(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x22;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x10) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x18) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x28) = uVar3;
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10121a118;
  plVar4[3] = uVar1;
  plVar4[4] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121a8b8,0,0);
  return;
}



/* Entry: 10121a118; end: 10121a15f;  */

void FUN_10121a118(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121a160,0,0);
  return;
}



/* Entry: 10121a160; end: 10121a23f;  */

void FUN_10121a160(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar1 = *(long *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar3 = uVar5;
  (**(code **)(lVar1 + 0x30))(uVar5,1,uVar4);
  if ((int)uVar3 == 1) {
    FUN_10121af94(uVar5,0x112d36580,&UNK_10d9016d0);
  }
  else {
    uVar2 = *(ulong *)(unaff_x22 + 0x28);
    (**(code **)(lVar1 + 0x20))(uVar2,uVar5,uVar4);
    func_0x000107c5fd5c();
    lVar1 = *(long *)(unaff_x22 + 0x20);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
    if ((uVar2 & 1) == 0) {
      uVar5 = uVar4;
      func_0x000103fc9aa8(uVar4);
      (**(code **)(lVar1 + 8))(uVar4,uVar3);
      goto LAB_10121a210;
    }
    (**(code **)(lVar1 + 8))(uVar4,uVar3);
  }
  uVar5 = 0;
LAB_10121a210:
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010121a23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5);
  return;
}



/* Entry: 10121a240; end: 10121a273; -[_TtC31SnapEditorMusicPluginEntryPoint49SnapEditorMusicContentBasedRecommendationProvider fetchContentBasedRecommendation] */

void FUN_10121a240(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1012193a0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10121a274; end: 10121a28b;  */

void FUN_10121a274(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121a28c,0,0);
  return;
}



/* Entry: 10121a28c; end: 10121a623;  */

void FUN_10121a28c(void)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined *puVar10;
  long unaff_x22;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puStack_60;
  
  uVar13 = *(ulong *)(unaff_x22 + 0x20);
  if (uVar13 != 0) {
    uVar3 = uVar13;
    func_0x000107c615f0();
    func_0x000107c5b198();
    func_0x000107c61180();
    *(ulong *)(unaff_x22 + 0x28) = uVar3;
    uVar12 = uVar3;
    func_0x000107c44a2c();
    if ((uVar12 & 1) == 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
      lVar9 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(uVar4,1,1,lVar9);
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(uVar13);
      goto LAB_10121a5fc;
    }
    uVar12 = uVar3;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (uVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10121a624);
      (*pcVar2)();
    }
    uVar5 = uVar12;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(uVar12);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar5 != 0) {
      puStack_60 = (undefined *)0x0;
      uVar4 = 0;
      FUN_10121b1cc(0,0x112d55598,&PTR_PTR_1126b25d0);
      func_0x000107c5fc50(uVar5,&puStack_60,uVar4);
      func_0x000107c61170(uVar5);
      if (puStack_60 != (undefined *)0x0) {
        puVar10 = puStack_60;
      }
    }
    if ((ulong)puVar10 >> 0x3e == 0) {
      puVar11 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar11 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar10) {
        puVar11 = puVar10;
      }
      func_0x000107c60480();
    }
    if (puVar11 != (undefined *)0x0) {
      uVar12 = 0;
      do {
        if (((ulong)puVar10 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10121a580);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(puVar10 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar12;
          func_0x00010121c1ac(uVar12,puVar10);
        }
        *(ulong *)(unaff_x22 + 0x30) = uVar5;
        puVar1 = (undefined *)(uVar12 + 1);
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10121a57c);
          (*pcVar2)();
        }
        uVar6 = uVar5;
        func_0x000107c4abb4();
        if ((int)uVar6 == 1) {
          uVar6 = uVar5;
          func_0x000107c4c930();
          func_0x000107c61180();
          if (uVar6 != 0) {
            uVar7 = uVar6;
            func_0x000107c44984();
            if ((((int)uVar7 == 0) || (uVar7 = uVar6, func_0x000107c3e240(), (int)uVar7 != 5)) ||
               (uVar7 = uVar6, func_0x000107c5d0f0(), (int)uVar7 != 1)) {
              func_0x000107c61170(uVar5);
              uVar5 = uVar6;
            }
            else {
              uVar7 = uVar6;
              FUN_10121b074();
              func_0x000107c61170(uVar6);
              if ((uVar7 & 1) != 0) {
                func_0x000107c6142c(puVar10);
                uVar12 = uVar5;
                func_0x000107c4c930();
                func_0x000107c61180();
                if (uVar12 == 0) {
                  func_0x000107c61170(uVar3);
                }
                else {
                  uVar6 = uVar12;
                  func_0x000107c4c99c();
                  func_0x000107c61180();
                  *(ulong *)(unaff_x22 + 0x38) = uVar6;
                  func_0x000107c61170(uVar12);
                  if (uVar6 != 0) {
                    func_0x0001000285a8(0x112d53960,&UNK_10d91a4d0);
                    func_0x000107c4ca6c();
                    func_0x000107c61180();
                    uVar3 = uVar13;
                    func_0x000100759c94();
                    *(ulong *)(unaff_x22 + 0x40) = uVar3;
                    func_0x000107c61170(uVar13);
                    plVar8 = (long *)0x80;
                    func_0x000107c615b8();
                    *(long **)(unaff_x22 + 0x48) = plVar8;
                    *plVar8 = unaff_x22;
                    plVar8[1] = (long)FUN_10121a624;
                    /* WARNING: Could not recover jumptable at 0x00010121a574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    FUN_10121ae24();
                    return;
                  }
                  func_0x000107c61170(uVar3);
                }
                goto LAB_10121a5c8;
              }
            }
          }
        }
        func_0x000107c61170(uVar5);
        uVar12 = uVar12 + 1;
      } while (puVar1 != puVar11);
    }
    func_0x000107c6142c(puVar10);
    uVar5 = uVar3;
LAB_10121a5c8:
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(uVar13);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar9 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(uVar4,1,1,lVar9);
LAB_10121a5fc:
                    /* WARNING: Could not recover jumptable at 0x00010121a61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10121a624; end: 10121a677;  */

void FUN_10121a624(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x50) = param_1;
  *(undefined1 *)(lVar1 + 0x58) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10121a678,0,0);
  return;
}


