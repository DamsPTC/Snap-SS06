/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101041304; end: 10104131b;  */

void FUN_101041304(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10104131c,0,0);
  return;
}



/* Entry: 10104131c; end: 10104142f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104131c(undefined1 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(lVar2 + _DAT_112d56338);
  if (lVar3 != 0) {
    FUN_1010415a8();
    puVar1 = &UNK_110379aa8;
    func_0x000107c613f8(&UNK_110379aa8,param_1,0,0);
    *param_1 = 0;
    func_0x000107c6157c(lVar3);
    func_0x00010488ade0(puVar1);
    func_0x000107c61574(lVar3);
    func_0x000107c614ac(puVar1);
    lVar2 = *(long *)(unaff_x22 + 0x58);
  }
  lVar2 = *(long *)(lVar2 + _DAT_112d56330);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x0001000d224c(unaff_x22 + 0x50);
    *(long *)(unaff_x22 + 0x68) = *(long *)(unaff_x22 + 0x50);
    if (*(long *)(unaff_x22 + 0x50) != 0) {
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_101041430;
      func_0x000107c61448(unaff_x22 + 0x10,0);
      func_0x00010103f7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010104142c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101041430; end: 1010414a7;  */

void FUN_101041430(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101041470,0,0);
  return;
}



/* Entry: 1010414a8; end: 10104154f; -[_TtC35SnapEditorVoiceoverPluginEntryPoint22VoiceoverAudioRecorder audioRecorderEncodeErrorDidOccur:error:] */

void FUN_1010414a8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_110379830;
  func_0x000107c613fc(&UNK_110379830,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar2 = 3;
  func_0x0001001ca524(3,2,0x2c,2,0,0,&UNK_10d91d050,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101041550; end: 1010415a7;  */

void FUN_101041550(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10104299c;
  plVar1[0xb] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10104131c,0,0);
  return;
}



/* Entry: 1010415a8; end: 10104162b;  */

void FUN_1010415a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d56370 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91d1a8;
  func_0x000107c61520(&UNK_10d91d1a8,&UNK_110379aa8);
  puRam0000000112d56370 = puVar1;
  return;
}



/* Entry: 10104162c; end: 10104164f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104162c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112d56330);
    *(undefined8 *)(lVar2 + _DAT_112d56330) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61450(uVar1);
  return;
}



/* Entry: 101041650; end: 1010416bf;  */

void FUN_101041650(void)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1010416c0;
  *(undefined1 *)(plVar4 + 0x2a) = uVar1;
  plVar4[0x1a] = lVar6;
  plVar4[0x1b] = lVar5;
  lVar5 = 0;
  func_0x000107c5ede0();
  plVar4[0x1c] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x1d] = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1e] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1f] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101040a9c,0,0);
  return;
}



/* Entry: 1010416c0; end: 1010416fb;  */

void FUN_1010416c0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001010416f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1010416fc; end: 10104184b;  */

code * FUN_1010416fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x000107c5ed90();
  uVar5 = param_2;
  func_0x000107c5f9dc(param_2,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  func_0x000107c6142c(param_2);
  uVar3 = uVar1;
  func_0x000107c48fe0();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  uVar5 = 0;
  uVar1 = param_1;
  if (unaff_x20 == (code *)0x0) {
    func_0x000107c61174(0);
    func_0x000107c5ed30();
    func_0x000107c61170(uVar5);
    func_0x000107c61654();
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 8))();
  }
  else {
    lVar2 = 0;
    func_0x000107c5ede0();
    pcVar6 = *(code **)(*(long *)(lVar2 + -8) + 8);
    func_0x000107c61174(0);
    (*pcVar6)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  *(undefined8 *)(unaff_x20 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x98) = param_1;
  if (lVar2 == 0) {
    lVar2 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x20 + 0xa0) = lVar2;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar3;
  pcVar6 = FUN_1010418b4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1010418b4,lVar2);
  return pcVar6;
}



/* Entry: 10104184c; end: 1010418b3;  */

void FUN_10104184c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  if (param_2 == 0) {
    param_2 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1010418b4,param_2);
  return;
}



/* Entry: 1010418b4; end: 1010419db;  */

void FUN_1010418b4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar2 = 2;
  uVar4 = 0x1a;
  func_0x000100029b9c(2,0x1a,0,0);
  *(int *)(unaff_x22 + 0xb8) = (int)uVar2;
  if ((int)uVar2 == 0) {
    FUN_101041c0c();
  }
  else {
    func_0x000107c5f058();
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,PTR___sSSN_11034da80);
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  func_0x000107c61574(lVar1);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1010419dc;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  uVar2 = 0x112d4e498;
  func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101041ab4;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1103798e8;
  *(long *)(unaff_x22 + 0x70) = lVar1;
  func_0x000107c4b794(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1010419dc; end: 101041a17;  */

void FUN_1010419dc(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101041a18,*(undefined8 *)(*unaff_x22 + 0xa0),*(undefined8 *)(*unaff_x22 + 0xa8));
  return;
}



/* Entry: 101041a18; end: 101041ab3;  */

/* WARNING: Removing unreachable block (ram,0x000101041a6c) */

void FUN_101041a18(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  iVar1 = *(int *)(unaff_x22 + 0xb8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  if (iVar1 == 0) {
    FUN_101041ad4();
    *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
    *(int *)(unaff_x22 + 0x58) = (int)param_2;
    *(int *)(unaff_x22 + 0x5c) = (int)((ulong)param_2 >> 0x20);
  }
  else {
    func_0x000107c60098(unaff_x22 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x000101041ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101041ab4; end: 101041ad3;  */

void FUN_101041ab4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x20);
  func_0x0001006732c8(puVar1,*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(*puVar1);
  return;
}



/* Entry: 101041ad4; end: 101041c0b;  */

undefined8 FUN_101041ad4(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  
  func_0x000107c6009c(&uStack_60);
  if (cStack_48 != '\0') {
    if (cStack_48 != '\x01') {
      func_0x00010104265c(uStack_60,uStack_58,uStack_50,cStack_48);
      func_0x000107c602fc(0x16);
      func_0x000107c6142c(0xe000000000000000);
      puVar2 = &UNK_10d91d080;
      func_0x0001000285a8(0x112d56388,&UNK_10d91d080);
      func_0x000107c5f050();
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar2);
      func_0x000107c5fb78(0x29,0xe100000000000000);
      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef21400,
                          "AVFoundation/arm64e-apple-ios.swiftinterface",0x2c,2,0x19a,0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101041c0c);
      (*pcVar1)();
    }
    func_0x000107c61654();
  }
  return uStack_60;
}



/* Entry: 101041c0c; end: 101041d73;  */

undefined1  [16] FUN_101041c0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c5f054();
  uStack_50 = 0x2e;
  uStack_48 = 0xe100000000000000;
  puStack_60 = &uStack_50;
  lVar5 = 0x7fffffffffffffff;
  FUN_101041d74(0x7fffffffffffffff,1,FUN_101042670,&uStack_70,param_1,param_2);
  if (*(long *)(lVar5 + 0x10) != 0) {
    puVar1 = (undefined8 *)(lVar5 + *(long *)(lVar5 + 0x10) * 0x20);
    uVar7 = *puVar1;
    uVar6 = puVar1[1];
    uVar2 = puVar1[2];
    uVar3 = puVar1[3];
    func_0x000107c61434(uVar3);
    func_0x000107c6142c(lVar5);
    func_0x000107c5fb2c(uVar7,uVar6,uVar2,uVar3);
    func_0x000107c6142c(uVar3);
    auVar8._8_8_ = uVar6;
    auVar8._0_8_ = uVar7;
    return auVar8;
  }
  func_0x000107c6142c();
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x44);
  uVar7 = 0x800000010ef21420;
  func_0x000107c5fb78(0xd000000000000041,0x800000010ef21420);
  func_0x000107c5f054();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar7);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,
                      "AVFoundation/arm64e-apple-ios.swiftinterface",0x2c,2,0x1b4,0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101041d74);
  (*pcVar4)();
}



/* Entry: 101041d74; end: 10104215f;  */

undefined *
FUN_101041d74(long param_1,ulong param_2,code *param_3,undefined8 param_4,ulong param_5,
             ulong param_6)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined *puVar11;
  long unaff_x21;
  ulong uVar12;
  ulong uVar13;
  undefined *puStack_80;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010420f8);
    (*pcVar2)();
  }
  uVar10 = param_6 >> 0x38 & 0xf;
  uVar9 = (uint)(param_5 >> 0x20);
  if (param_1 != 0) {
    uVar13 = param_5 & 0xffffffffffff;
    if ((param_6 & 0x2000000000000000) != 0) {
      uVar13 = uVar10;
    }
    if (uVar13 != 0) {
      uVar9 = uVar9 >> 0x1b & 1;
      if ((param_6 & 0x1000000000000000) == 0) {
        uVar9 = 1;
      }
      uVar10 = 7;
      if (uVar9 == 0) {
        uVar10 = 0xb;
      }
      uVar10 = uVar10 | uVar13 << 0x10;
      uVar13 = uVar13 * 4;
      puVar11 = (undefined *)0xf;
      puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_101041dfc:
      uVar12 = (ulong)puVar11 >> 0xe;
      puVar6 = puVar11;
      puVar5 = puVar11;
      if (uVar12 != uVar13) {
        do {
          puVar11 = puVar6;
          uVar7 = param_5;
          func_0x000107c5fbcc(puVar11,param_5,param_6);
          uVar3 = 0;
          (*param_3)();
          if (unaff_x21 != 0) {
            func_0x000107c6142c(puStack_80);
            func_0x000107c6142c(param_6);
            func_0x000107c6142c(uVar7);
            return puVar11;
          }
          func_0x000107c6142c(uVar7);
          if ((uVar3 & 1) == 0) {
            func_0x000107c5fb60(puVar11,param_5,param_6);
            puVar6 = puVar11;
            puVar11 = puVar5;
          }
          else {
            if (((ulong)puVar5 >> 0xe != uVar12) || ((param_2 & 1) == 0)) goto LAB_101041eb8;
            func_0x000107c5fb60(puVar11,param_5,param_6);
            puVar6 = puVar11;
          }
          uVar12 = (ulong)puVar6 >> 0xe;
          puVar5 = puVar11;
          if (uVar12 == uVar13) break;
        } while( true );
      }
      goto LAB_101042044;
    }
  }
  uVar13 = param_5 & 0xffffffffffff;
  if ((param_6 & 0x2000000000000000) != 0) {
    uVar13 = uVar10;
  }
  if ((uVar13 == 0) && ((param_2 & 1) != 0)) {
    func_0x000107c6142c(param_6);
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar9 = uVar9 >> 0x1b & 1;
  if ((param_6 & 0x1000000000000000) == 0) {
    uVar9 = 1;
  }
  uVar10 = 7;
  if (uVar9 == 0) {
    uVar10 = 0xb;
  }
  uVar10 = uVar10 | uVar13 << 0x10;
  uVar4 = 0xf;
  uVar12 = param_6;
  func_0x000107c5fbd8();
  puVar11 = (undefined *)0x0;
  FUN_101042160(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar13 = *(ulong *)(puVar11 + 0x10);
  puStack_80 = puVar11;
  if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar13) {
    puStack_80 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
    FUN_101042160(puStack_80,uVar13 + 1,1,puVar11);
  }
  *(ulong *)(puStack_80 + 0x10) = uVar13 + 1;
  *(undefined8 *)(puStack_80 + uVar13 * 0x20 + 0x20) = uVar4;
  *(ulong *)(puStack_80 + uVar13 * 0x20 + 0x28) = uVar10;
  *(ulong *)(puStack_80 + uVar13 * 0x20 + 0x30) = param_5;
  *(ulong *)(puStack_80 + uVar13 * 0x20 + 0x38) = uVar12;
LAB_101042058:
  func_0x000107c6142c(param_6);
  return puStack_80;
LAB_101041eb8:
  if (uVar12 < (ulong)puVar5 >> 0xe) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101042160);
    (*pcVar2)();
  }
  puVar8 = puVar11;
  uVar12 = param_5;
  uVar3 = param_6;
  func_0x000107c5fbd8();
  puVar6 = puStack_80;
  func_0x000107c61558();
  if (((ulong)puVar6 & 1) == 0) {
    plVar1 = (long *)(puStack_80 + 0x10);
    puStack_80 = (undefined *)0x0;
    FUN_101042160(0,*plVar1 + 1,1);
  }
  uVar7 = *(ulong *)(puStack_80 + 0x10);
  if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar7) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puStack_80 + 0x18));
    FUN_101042160(puVar6,uVar7 + 1,1,puStack_80);
    puStack_80 = puVar6;
  }
  *(ulong *)(puStack_80 + 0x10) = uVar7 + 1;
  *(undefined **)(puStack_80 + uVar7 * 0x20 + 0x20) = puVar5;
  *(undefined **)(puStack_80 + uVar7 * 0x20 + 0x28) = puVar8;
  *(ulong *)(puStack_80 + uVar7 * 0x20 + 0x30) = uVar12;
  *(ulong *)(puStack_80 + uVar7 * 0x20 + 0x38) = uVar3;
  func_0x000107c5fb60(puVar11,param_5,param_6);
  if (*(long *)(puStack_80 + 0x10) == param_1) goto LAB_101042044;
  goto LAB_101041dfc;
LAB_101042044:
  if (((ulong)puVar11 >> 0xe != uVar13) || ((param_2 & 1) == 0)) {
    if ((ulong)puVar11 >> 0xe <= uVar13) {
      uVar13 = param_6;
      func_0x000107c5fbd8();
      func_0x000107c6142c(param_6);
      puVar6 = puStack_80;
      func_0x000107c61558();
      puVar5 = puStack_80;
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_101042160(0,*(long *)(puStack_80 + 0x10) + 1,1,puStack_80);
      }
      uVar12 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar12) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_101042160(puVar6,uVar12 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar12 + 1;
      *(undefined **)(puVar6 + uVar12 * 0x20 + 0x20) = puVar11;
      *(ulong *)(puVar6 + uVar12 * 0x20 + 0x28) = uVar10;
      *(ulong *)(puVar6 + uVar12 * 0x20 + 0x30) = param_5;
      *(ulong *)(puVar6 + uVar12 * 0x20 + 0x38) = uVar13;
      return puVar6;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10104211c);
    (*pcVar2)();
  }
  goto LAB_101042058;
}



/* Entry: 101042160; end: 101042267;  */

undefined * FUN_101042160(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101042268);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d56390;
    func_0x0001000285a8(0x112d56390,&UNK_10d947440);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSsN_11034e1d8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101042268; end: 101042407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101042268(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d56330) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d56338) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d56340) = 0;
  func_0x0001000285a8(0x112d563a8,&UNK_10d91d0c8);
  uVar1 = param_1;
  func_0x000107c52030();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  *(undefined8 *)(unaff_x20 + _DAT_112d56310) = uVar2;
  func_0x0001000285a8(0x112d563b0,&UNK_10d91d0d0);
  uVar1 = param_1;
  func_0x000107c40114();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  *(undefined8 *)(unaff_x20 + _DAT_112d56318) = uVar2;
  func_0x0001000285a8(0x112d563b8,&UNK_10d91d0d8);
  func_0x000107c4d2e4();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x0001000bda74();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112d56320) = uVar1;
  func_0x0001000285a8(0x112d563c0,&UNK_10d91d0e0);
  func_0x000107c5c800();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112d56328) = uVar1;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101042408; end: 10104241f;  */

void FUN_101042408(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101042420,0,0);
  return;
}



/* Entry: 101042420; end: 101042517;  */

void FUN_101042420(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar2 = 0x112d56380;
  func_0x0001000285a8(0x112d56380,&UNK_10d91d070);
  func_0x000107c5f060();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  iVar1 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___sSo29AVAsynchronousKeyValueLoadingP12AVFoundationE4load_9isolationqd__AC15AVAsyncPropertyCyxqd__G_ScA_pSgYitYaKlFTu_11034d5c0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x20) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101042518;
                    /* WARNING: Could not recover jumptable at 0x00010bdb8984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___sSo29AVAsynchronousKeyValueLoadingP12AVFoundationE4load_9isolationqd__AC15AVAsyncPropertyCyxqd__G_ScA_pSgYitYaKlF_11034d5b8
    )(plVar3,unaff_x22 + 0x30,uVar2,0,0);
    return;
  }
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10104259c;
                    /* WARNING: Could not recover jumptable at 0x000101042514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10104184c(uVar2,0,0);
  return;
}



/* Entry: 101042518; end: 10104259b;  */

void FUN_101042518(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x20));
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  if (unaff_x20 == 0) {
    func_0x000107c61574(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x38);
    uVar2 = *(undefined8 *)(lVar4 + 0x40);
    uVar1 = *(undefined8 *)(lVar4 + 0x30);
  }
  else {
    func_0x000107c614ac();
    func_0x000107c61574(uVar3);
    uVar1 = 0;
    uVar3 = 0;
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000101042598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))(uVar1,uVar3,uVar2,unaff_x20 != 0);
  return;
}



/* Entry: 10104259c; end: 101042643;  */

void FUN_10104259c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x28));
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  if (unaff_x20 == 0) {
    func_0x000107c61574(uVar2);
    *(undefined8 *)(lVar3 + 0x30) = param_1;
    *(int *)(lVar3 + 0x38) = (int)param_2;
    *(int *)(lVar3 + 0x3c) = (int)((ulong)param_2 >> 0x20);
    uVar2 = *(undefined8 *)(lVar3 + 0x38);
  }
  else {
    func_0x000107c614ac();
    func_0x000107c61574(uVar2);
    param_1 = 0;
    uVar2 = 0;
    param_3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000101042640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,uVar2,param_3,unaff_x20 != 0);
  return;
}



/* Entry: 101042644; end: 10104266f;  */

long FUN_101042644(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 101042670; end: 1010426c3;  */

uint FUN_101042670(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 1010426c4; end: 10104272b;  */

void FUN_1010426c4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  long lVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10104272c;
  plVar2[0xb] = param_1;
  plVar2[0xc] = lVar3;
  plVar1 = (long *)0xe0;
  func_0x000107c615b8();
  plVar2[0xd] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_101040810;
  plVar1[0x12] = lVar3;
  plVar1[0x11] = lVar4;
  lVar4 = 0;
  func_0x000107c5fcec();
  plVar1[0x13] = lVar4;
  func_0x000107c5fce8();
  plVar1[0x14] = lVar4;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  plVar1[0x15] = (long)plVar2;
  *plVar2 = (long)plVar1;
  plVar2[1] = (long)FUN_10103ff40;
  plVar2[0x10] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10103f33c,0,0);
  return;
}



/* Entry: 10104272c; end: 101042767;  */

void FUN_10104272c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101042764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101042768; end: 10104279f;  */

void FUN_101042768(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar2;
  func_0x000107c4a2f8();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c255790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_stop_112673008);
    return;
  }
  return;
}



/* Entry: 1010427a0; end: 101042943;  */

void FUN_1010427a0(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  *(bool *)*(undefined8 *)(*(long *)(lVar1 + 0x40) + 0x28) = param_1 == 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 101042944; end: 101042983;  */

void FUN_101042944(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d563c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91d180;
  func_0x000107c61520(&UNK_10d91d180,&UNK_110379aa8);
  puRam0000000112d563c8 = puVar1;
  return;
}



/* Entry: 101042984; end: 10104299f;  */

void FUN_101042984(long param_1,long param_2)

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



/* Entry: 1010429a0; end: 1010429ab; -[SCSnapEditorVoiceoverPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010429a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d563d0;
  func_0x000107c61428(param_1 + _DAT_112d563d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010429ac; end: 1010429b7; -[SCSnapEditorVoiceoverPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010429ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d563d0;
  func_0x000107c61428(param_1 + _DAT_112d563d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010429b8; end: 1010429c3; -[SCSnapEditorVoiceoverPluginEntryPoint audioSessionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010429b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d563d8;
  func_0x000107c61428(param_1 + _DAT_112d563d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010429c4; end: 1010429cf; -[SCSnapEditorVoiceoverPluginEntryPoint setAudioSessionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010429c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d563d8;
  func_0x000107c61428(param_1 + _DAT_112d563d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010429d0; end: 1010429db; -[SCSnapEditorVoiceoverPluginEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010429d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d563e0;
  func_0x000107c61428(param_1 + _DAT_112d563e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010429dc; end: 1010429e7; -[SCSnapEditorVoiceoverPluginEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010429dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d563e0;
  func_0x000107c61428(param_1 + _DAT_112d563e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010429e8; end: 1010429f3; -[SCSnapEditorVoiceoverPluginEntryPoint creativeToolsABServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010429e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d563e8;
  func_0x000107c61428(param_1 + _DAT_112d563e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010429f4; end: 1010429ff; -[SCSnapEditorVoiceoverPluginEntryPoint setCreativeToolsABServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010429f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d563e8;
  func_0x000107c61428(param_1 + _DAT_112d563e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101042a00; end: 101042a0b; -[SCSnapEditorVoiceoverPluginEntryPoint snapEditorScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101042a00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d563f0;
  func_0x000107c61428(param_1 + _DAT_112d563f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101042a0c; end: 101042a17; -[SCSnapEditorVoiceoverPluginEntryPoint setSnapEditorScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101042a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d563f0;
  func_0x000107c61428(param_1 + _DAT_112d563f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101042a18; end: 101042a23; -[SCSnapEditorVoiceoverPluginEntryPoint temporaryFileWriterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101042a18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d563f8;
  func_0x000107c61428(param_1 + _DAT_112d563f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101042a24; end: 101042a67;  */

void FUN_101042a24(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101042a68; end: 101042a73; -[SCSnapEditorVoiceoverPluginEntryPoint setTemporaryFileWriterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101042a68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d563f8;
  func_0x000107c61428(param_1 + _DAT_112d563f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101042a74; end: 101042ac7;  */

void FUN_101042a74(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101042ac8; end: 101042d8f;  */

/* WARNING: Possible PIC construction at 0x000101042c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101042c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101042c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101042c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101042d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101042d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101042d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101042cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101042d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101042cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101042cb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101042ca4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101042cb8) */
/* WARNING: Removing unreachable block (ram,0x000101042cd8) */
/* WARNING: Removing unreachable block (ram,0x000101042d08) */
/* WARNING: Removing unreachable block (ram,0x000101042cf8) */
/* WARNING: Removing unreachable block (ram,0x000101042d54) */
/* WARNING: Removing unreachable block (ram,0x000101042d44) */
/* WARNING: Removing unreachable block (ram,0x000101042d34) */
/* WARNING: Removing unreachable block (ram,0x000101042c90) */
/* WARNING: Removing unreachable block (ram,0x000101042d58) */
/* WARNING: Removing unreachable block (ram,0x000101042c80) */
/* WARNING: Removing unreachable block (ram,0x000101042c70) */
/* WARNING: Removing unreachable block (ram,0x000101042c60) */
/* WARNING: Removing unreachable block (ram,0x000101042ca8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101042ac8(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_70;
  long lStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c3e3f8();
  func_0x000107c61180();
  lVar9 = lVar3;
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c3ff88();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = unaff_x20;
      func_0x000107c40c98();
      func_0x000107c61180();
      if (lVar6 != 0) {
        lVar7 = unaff_x20;
        func_0x000107c5b274();
        func_0x000107c61180();
        lVar9 = lVar4;
        if (lVar7 == 0) {
          func_0x000107c61170(lVar3);
        }
        else {
          func_0x000107c5c804();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
            func_0x000107c61170(lVar3);
          }
          else {
            func_0x00010103efcc(0);
            func_0x000107c613fc();
            uVar8 = *(ulong *)(lVar6 + _DAT_11302ecd0);
            func_0x000107c4a480();
            lVar9 = lVar6;
            if ((uVar8 & 1) != 0) {
              uVar10 = *(undefined8 *)(lVar3 + _DAT_11302ba70);
              lVar9 = 0;
              func_0x00010103efac();
              lVar3 = lVar9;
              func_0x000107c610f8();
              plVar1 = (long *)(lVar3 + _DAT_112d56248);
              *plVar1 = lVar4;
              plVar1[1] = lVar5;
              plVar1[2] = lVar7;
              plVar1[3] = unaff_x20;
              puVar2 = PTR_s_init_1125d9248;
              lStack_70 = lVar3;
              lStack_68 = lVar9;
              func_0x000107c61174(uVar10);
              func_0x000107c61174(lVar4);
              func_0x000107c61174(lVar5);
              func_0x000107c61174(lVar7);
              func_0x000107c61174(unaff_x20);
              func_0x000107c61154(&lStack_70,puVar2);
              func_0x000107c4fba8(uVar10);
              lVar9 = unaff_x20;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 101042d90; end: 101042db7; -[SCSnapEditorVoiceoverPluginEntryPoint begin] */

void FUN_101042d90(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101042ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101042db8; end: 101042dfb; -[SCSnapEditorVoiceoverPluginEntryPoint end] */

void FUN_101042db8(undefined8 param_1)

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



/* Entry: 101042dfc; end: 10104314f;  */

void FUN_101042dfc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10e5200)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000014,0x800000010ef1ae00,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10e63d0)) ||
           (func_0x000107c605b8(0xd000000000000016,0x800000010ef19c30,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53680();
        }
        else {
          uVar2 = 0xd000000000000017;
          if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10e36b0)) ||
             (func_0x000107c605b8(0xd000000000000017,0x800000010ef1c950,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c53ae0();
          }
          else {
            uVar2 = 0x7469644570616e73;
            if (((param_2 == 0x7469644570616e73) && (param_3 == -0x109a8f909cac8d91)) ||
               (func_0x000107c605b8(0x7469644570616e73,0xef65706f6353726f,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c593c0();
            }
            else {
              uVar2 = 0xd00000000000001b;
              if (((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10df490)) &&
                 (func_0x000107c605b8(0xd00000000000001b,0x800000010ef20b70,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "SnapEditorVoiceoverPluginEntryPoint/SCSnapEditorVoiceoverPluginEntryPoint.swift"
                                    ,0x4f,2,0x3d,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101043150);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c59c58();
            }
          }
        }
        goto LAB_101042e88;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52a10();
  }
LAB_101042e88:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101043150; end: 1010431fb; -[SCSnapEditorVoiceoverPluginEntryPoint setValue:forIvarName:] */

void FUN_101043150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101042dfc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1010431fc; end: 1010432bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010431fc(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d563d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d563d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d563e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d563e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d563f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d563f8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d56400) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010432c0; end: 1010432df; -[SCSnapEditorVoiceoverPluginEntryPoint init] */

void FUN_1010432c0(void)

{
  FUN_1010431fc();
  return;
}



/* Entry: 1010432e0; end: 101043313;  */

void FUN_1010432e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101043314; end: 10104339b; -[SCSnapEditorVoiceoverPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101043314(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d563d0);
  func_0x000107c61610(param_1 + _DAT_112d563d8);
  func_0x000107c61610(param_1 + _DAT_112d563e0);
  func_0x000107c61610(param_1 + _DAT_112d563e8);
  func_0x000107c61610(param_1 + _DAT_112d563f0);
  func_0x000107c61610(param_1 + _DAT_112d563f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d56400));
  return;
}



/* Entry: 10104339c; end: 1010433bb;  */

void FUN_10104339c(void)

{
  func_0x000107c61168(&PTR_PTR_1127aa000);
  return;
}



/* Entry: 1010433bc; end: 10104350b;  */

void FUN_1010433bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 10104350c; end: 101043537;  */

/* WARNING: Possible PIC construction at 0x000101043518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101043528: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010104351c) */
/* WARNING: Removing unreachable block (ram,0x00010104352c) */

void FUN_10104350c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101043538; end: 1010435b7;  */

void FUN_101043538(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010435b8; end: 101043637;  */

void FUN_1010435b8(undefined8 param_1)

{
  if (lRam0000000112d56458 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61f2b8);
  return;
}



/* Entry: 101043638; end: 101043b0f;  */

undefined * FUN_101043638(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b28e0;
  func_0x000107c610f8(PTR_PTR_1126b28e0);
  func_0x000107c453e4();
  lVar3 = param_1;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (lVar3 == 0) {
LAB_1010436bc:
    param_2 = 0xe000000000000000;
  }
  else {
    lVar2 = lVar3;
    func_0x000107c3e978();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 == 0) {
      lVar3 = 0;
      goto LAB_1010436bc;
    }
    lVar3 = lVar2;
    func_0x000107c5faec(lVar2);
    func_0x000107c61170(lVar2);
  }
  uVar5 = param_2;
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c52ae0(puVar1);
  func_0x000107c61170(lVar3);
  lVar3 = param_1;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c3ea1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5faec(lVar2);
      func_0x000107c61170(lVar2);
      goto LAB_101043744;
    }
    lVar3 = 0;
  }
  uVar5 = 0xe000000000000000;
LAB_101043744:
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c58e54(puVar1);
  func_0x000107c61170(lVar3);
  puVar4 = PTR_PTR_1126a62d0;
  func_0x000107c610f8(PTR_PTR_1126a62d0);
  func_0x000107c453e4();
  func_0x000107c5d984(param_1);
  func_0x000107c61180();
  func_0x000107c5a344(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c52d10(puVar4);
  func_0x000107c61170(puVar1);
  return puVar4;
}



/* Entry: 101043b10; end: 101043b97; -[_TtC31StoryInviteReceiverServicesImpl32StoryInviteRecipientsBuilderImpl storyInviteParticipantsWithStoryOwnerId:completion:] */

void FUN_101043b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c5faec(param_3);
  func_0x000107c60bc4(param_4);
  func_0x000107c61174(param_1);
  FUN_101043d38(param_3,param_2,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101043b98; end: 101043bf3;  */

void FUN_101043b98(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101044000(0,0x112d56568,&PTR_PTR_1126a62d0);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101043bf4; end: 101043c53; -[_TtC31StoryInviteReceiverServicesImpl32StoryInviteRecipientsBuilderImpl init] */

void FUN_101043bf4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoryInviteReceiverServicesImpl.StoryInviteRecipientsBuilderImpl",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101043c20);
  (*pcVar1)();
}



/* Entry: 101043c54; end: 101043cab; -[_TtC31StoryInviteReceiverServicesImpl32StoryInviteRecipientsBuilderImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101043c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101043c90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101043c74) */
/* WARNING: Removing unreachable block (ram,0x000101043c94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101043c54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d56520));
  return;
}



/* Entry: 101043cac; end: 101043d37;  */

void FUN_101043cac(void)

{
  func_0x000107c61168(&PTR_PTR_1127aa0e8);
  return;
}



/* Entry: 101043d38; end: 101043ff7;  */

/* WARNING: Possible PIC construction at 0x000101043db8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101043fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101043f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101043f14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101043f08) */
/* WARNING: Removing unreachable block (ram,0x000101043fcc) */
/* WARNING: Removing unreachable block (ram,0x000101043dbc) */
/* WARNING: Removing unreachable block (ram,0x000101043dc4) */
/* WARNING: Removing unreachable block (ram,0x000101043dd8) */
/* WARNING: Removing unreachable block (ram,0x000101043dcc) */
/* WARNING: Removing unreachable block (ram,0x000101043f18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101043d38(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  puVar1 = &UNK_110379bf0;
  func_0x000107c613fc(&UNK_110379bf0,0x18,7);
  *(long *)(puVar1 + 0x10) = param_4;
  lVar2 = param_4;
  func_0x000107c60bc4();
  func_0x0001010437d4();
  lVar3 = lVar2;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_3 + _DAT_112d56528);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000101043ccc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 3;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      *(long *)(lVar3 + 0x20) = lVar2;
      uVar6 = 0;
      FUN_101044000(0,0x112d56568,&PTR_PTR_1126a62d0);
      func_0x000107c61174(lVar2);
      func_0x000107c5fc48(lVar3,uVar6);
      (**(code **)(param_4 + 0x10))(param_4,lVar3);
      func_0x000107c61574(puVar1);
    }
    else {
      func_0x000107c5fadc(param_1,param_2);
      FUN_101044000(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      puVar4 = &UNK_110379c18;
      func_0x000107c613fc(&UNK_110379c18,0x28,7);
      *(code **)(puVar4 + 0x10) = FUN_101043ff8;
      *(undefined **)(puVar4 + 0x18) = puVar1;
      *(long *)(puVar4 + 0x20) = lVar2;
      pcStack_70 = FUN_101044040;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      uStack_80 = 0x101043a98;
      puStack_78 = &UNK_110379c30;
      puStack_68 = puVar4;
      func_0x000107c60bc4(&puStack_90);
      puVar4 = puStack_68;
      func_0x000107c61174(lVar2);
      func_0x000107c6157c(puVar1);
      func_0x000107c61574(puVar4);
      func_0x000107c5b49c(lVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61574(puVar1);
    }
  }
  else {
    func_0x000107c5faec();
    lVar2 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101043ff8; end: 101043fff;  */

void FUN_101043ff8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_101044000(0,0x112d56568,&PTR_PTR_1126a62d0);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101044000; end: 10104403f;  */

void FUN_101044000(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101044040; end: 101044067;  */

void FUN_101044040(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  if ((param_1 == 0) || (param_2 != 0)) {
    func_0x000101043ccc();
    func_0x000107c613fc();
    *(undefined8 *)(param_1 + 0x18) = 3;
    *(undefined8 *)(param_1 + 0x10) = 1;
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    func_0x000107c61174(uVar4);
    (*pcVar1)(param_1);
  }
  else {
    func_0x000107c61174();
    lVar2 = param_1;
    FUN_101043638();
    lVar3 = lVar2;
    func_0x000101043ccc();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 5;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    *(long *)(lVar3 + 0x20) = lVar2;
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    func_0x000107c61174(lVar2);
    func_0x000107c61174(uVar4);
    (*pcVar1)(lVar3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar2);
    param_1 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101044068; end: 101044073; -[SCStoryInviteReceiverServiceProvider bitmojiFetchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101044068(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56578;
  func_0x000107c61428(param_1 + _DAT_112d56578,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101044074; end: 10104407f; -[SCStoryInviteReceiverServiceProvider setBitmojiFetchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101044074(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56578;
  func_0x000107c61428(param_1 + _DAT_112d56578,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101044080; end: 10104408b; -[SCStoryInviteReceiverServiceProvider bitmojiSelfieServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101044080(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56580;
  func_0x000107c61428(param_1 + _DAT_112d56580,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10104408c; end: 101044097; -[SCStoryInviteReceiverServiceProvider setBitmojiSelfieServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10104408c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56580;
  func_0x000107c61428(param_1 + _DAT_112d56580,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101044098; end: 1010440a3; -[SCStoryInviteReceiverServiceProvider userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101044098(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56588;
  func_0x000107c61428(param_1 + _DAT_112d56588,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010440a4; end: 1010440af; -[SCStoryInviteReceiverServiceProvider setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010440a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56588;
  func_0x000107c61428(param_1 + _DAT_112d56588,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010440b0; end: 1010440bb; -[SCStoryInviteReceiverServiceProvider snapchatterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010440b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d56590;
  func_0x000107c61428(param_1 + _DAT_112d56590,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010440bc; end: 1010440ff;  */

void FUN_1010440bc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101044100; end: 10104410b; -[SCStoryInviteReceiverServiceProvider setSnapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101044100(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d56590;
  func_0x000107c61428(param_1 + _DAT_112d56590,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10104410c; end: 10104415f;  */

void FUN_10104410c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101044160; end: 1010442cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101044160(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar1 = unaff_x20;
  func_0x000107c3e9b4();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3ea2c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c5da74();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c5b490();
        func_0x000107c61180();
        if (lVar4 != 0) {
          lVar5 = 0;
          FUN_1010435b8();
          func_0x000107c613fc();
          *(long *)(lVar5 + 0x10) = lVar1;
          *(long *)(lVar5 + 0x18) = lVar2;
          *(long *)(lVar5 + 0x20) = lVar3;
          *(long *)(lVar5 + 0x28) = lVar4;
          uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d56598);
          *(long *)(unaff_x20 + _DAT_112d56598) = lVar5;
          func_0x000107c61174(lVar1);
          func_0x000107c61174(lVar2);
          func_0x000107c61174(lVar3);
          func_0x000107c61174(lVar4);
          func_0x000107c6157c(lVar5);
          func_0x000107c61574(uVar6);
          func_0x00010104340c();
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar4);
          func_0x000107c61574(lVar5);
          return;
        }
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        lVar1 = lVar3;
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1010442d0; end: 10104435b; -[SCStoryInviteReceiverServiceProvider provide] */

void FUN_1010442d0(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_101044160();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "StoryInviteReceiverServicesImpl/SCStoryInviteReceiverServiceProvider.swift",
                      0x4a,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10104435c);
  (*pcVar1)();
}



/* Entry: 10104435c; end: 10104438f; -[SCStoryInviteReceiverServiceProvider __safeProvide] */

void FUN_10104435c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101044160();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101044390; end: 1010443d3; -[SCStoryInviteReceiverServiceProvider end] */

void FUN_101044390(undefined8 param_1)

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



/* Entry: 1010443d4; end: 10104463b;  */

void FUN_1010443d4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffec && param_3 == -0x7ffffffef10e69b0) ||
     (func_0x000107c605b8(0xd000000000000014,0x800000010ef19650,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52cf4();
  }
  else {
    uVar2 = 0xd000000000000015;
    if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e62e0)) ||
       (func_0x000107c605b8(0xd000000000000015,0x800000010ef19d20,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52d38();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ef630)) ||
         (func_0x000107c605b8(0xd000000000000010,0x800000010ef109d0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a3f8();
      }
      else {
        if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e3670)) {
          uVar2 = 0xd000000000000013;
          func_0x000107c605b8(0xd000000000000013,0x800000010ef1c990,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "StoryInviteReceiverServicesImpl/SCStoryInviteReceiverServiceProvider.swift"
                                ,0x4a,2,0x37,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10104463c);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c594bc();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10104463c; end: 1010446e7; -[SCStoryInviteReceiverServiceProvider setValue:forIvarName:] */

void FUN_10104463c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1010443d4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1010446e8; end: 101044783; -[SCStoryInviteReceiverServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010446e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d56578,0);
  func_0x000107c61614(param_1 + _DAT_112d56580,0);
  func_0x000107c61614(param_1 + _DAT_112d56588,0);
  func_0x000107c61614(param_1 + _DAT_112d56590,0);
  *(undefined8 *)(param_1 + _DAT_112d56598) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101044784; end: 1010447b7;  */

void FUN_101044784(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010447b8; end: 10104481f; -[SCStoryInviteReceiverServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010447b8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d56578);
  func_0x000107c61610(param_1 + _DAT_112d56580);
  func_0x000107c61610(param_1 + _DAT_112d56588);
  func_0x000107c61610(param_1 + _DAT_112d56590);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d56598));
  return;
}



/* Entry: 101044820; end: 10104483f;  */

void FUN_101044820(void)

{
  func_0x000107c61168(&PTR_PTR_112d565e0);
  return;
}



/* Entry: 101044840; end: 101044897;  */

void FUN_101044840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 101044898; end: 101044b2b;  */

void FUN_101044898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126c48a8;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x0001000bf56c();
  puVar3 = puVar2;
  func_0x0001000bf56c();
  puVar4 = puVar3;
  func_0x0001000bf56c();
  puVar5 = &UNK_110379cf0;
  func_0x000107c613fc(&UNK_110379cf0,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar6 = &UNK_110379d18;
  func_0x000107c613fc(&UNK_110379d18,0x30,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_1;
  pcStack_70 = FUN_101044b2c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101044b54;
  puStack_78 = &UNK_110379d30;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar6;
  func_0x000107c60bc4();
  puVar5 = puStack_68;
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar5);
  func_0x000107c40bb4(puVar1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 101044b2c; end: 101044b53;  */

void FUN_101044b2c(void)

{
  func_0x000101044a08();
  return;
}



/* Entry: 101044b54; end: 101044c13;  */

/* WARNING: Possible PIC construction at 0x000101044bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101044bf8) */

void FUN_101044b54(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    param_3 = 0;
    uVar5 = 0;
    uVar4 = param_2;
  }
  else {
    uVar5 = param_2;
    func_0x000107c5faec(param_3);
    uVar4 = uVar5;
  }
  if (param_4 == 0) {
    param_4 = 0;
    uVar4 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2,param_3,uVar5,param_4,uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 101044c14; end: 101044c2f;  */

void FUN_101044c14(long param_1,long param_2)

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



/* Entry: 101044c30; end: 101044cdf; -[_TtC22StoryInviteSendingImpl22StoryInviteCreatorImpl createStoryInviteWithStoryInviteInfo:completionPerformer:completion:] */

/* WARNING: Possible PIC construction at 0x000101044cc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101044cc8) */

void FUN_101044c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110379d78;
  func_0x000107c613fc(&UNK_110379d78,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c6157c(param_1);
  FUN_101044898(param_3,param_4,FUN_101045278,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101044ce0; end: 101044d5b; -[_TtC22StoryInviteSendingImpl22StoryInviteCreatorImpl storyTypeString:] */

void FUN_101044ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c5c080();
  func_0x000107c61170(param_3);
  bVar2 = (int)uVar3 != 1;
  uVar3 = 0x4d4f54535543;
  if (bVar2) {
    uVar3 = 0x45544156495250;
  }
  uVar1 = 0xe600000000000000;
  if (bVar2) {
    uVar1 = 0xe700000000000000;
  }
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101044d5c; end: 101044d77;  */

void FUN_101044d5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101044d78,0,0);
  return;
}



/* Entry: 101044d78; end: 101044e33;  */

void FUN_101044d78(void)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int *piVar11;
  long unaff_x22;
  undefined1 auVar12 [16];
  
  auVar12 = NEON_ext(*(undefined1 (*) [16])(unaff_x22 + 0x70),
                     *(undefined1 (*) [16])(unaff_x22 + 0x70),8,1);
  *(long *)(unaff_x22 + 0x28) = auVar12._8_8_;
  *(long *)(unaff_x22 + 0x20) = auVar12._0_8_;
  uVar2 = 0x112d55e30;
  func_0x0001000285a8(0x112d55e30,&UNK_10d91cd30);
  pcVar3 = FUN_101045200;
  func_0x00010488bc98(FUN_101045200,unaff_x22 + 0x10,uVar2);
  *(code **)(unaff_x22 + 0x80) = pcVar3;
  *(code **)(unaff_x22 + 0x60) = pcVar3;
  plVar4 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar4;
  lVar5 = 0x112d56658;
  func_0x0001000285a8(0x112d56658,&UNK_10d91d2f0);
  lVar6 = lVar5;
  FUN_101045208();
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101044e34;
  plVar4[3] = unaff_x22 + 0x30;
  uVar7 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar6,lVar5,&UNK_10e821f58,&UNK_10e821f60);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar8 = 0;
  __ss6ResultOMa(0,uVar7,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar4[4] = lVar8;
  uVar9 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[5] = uVar9;
  piVar11 = *(int **)(lVar6 + 0x10);
  iVar1 = *piVar11;
  plVar10 = (long *)(ulong)(uint)piVar11[1];
  _swift_task_alloc();
  plVar4[6] = (long)plVar10;
  *plVar10 = (long)plVar4;
  plVar10[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar11))(plVar10,uVar9,lVar5,lVar6);
  return;
}



/* Entry: 101044e34; end: 101044f0b;  */

void FUN_101044e34(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    uVar1 = 0x101044e90;
  }
  else {
    uVar1 = 0x101044ed8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}


