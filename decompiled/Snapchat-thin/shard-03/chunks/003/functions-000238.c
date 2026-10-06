/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10279586c; end: 102795897;  */

undefined1  [16] FUN_10279586c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x000107c61434(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 102795898; end: 1027958b3;  */

void FUN_102795898(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb4b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation14LocalizedErrorPAAE13failureReasonSSSgvg_1103506b8)();
  return;
}



/* Entry: 1027958b4; end: 1027959b7;  */

void FUN_1027958b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebdfc0,&UNK_10dad9710);
  puVar1 = &UNK_110549220;
  func_0x000107c613fc(&UNK_110549220,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1027959b8,puVar1);
  return;
}



/* Entry: 1027959b8; end: 1027959bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027959b8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_1027965e8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112ebdfc8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112ebdfd0) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1027959c0; end: 102795a23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027959c0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebdfc8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebdfd0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102795a24; end: 102795c5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102795a24(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_2e8 [40];
  undefined1 auStack_2c0 [304];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [48];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char cStack_100;
  
  func_0x000100083b20(auStack_190);
  FUN_10278997c(auStack_180,auStack_2c0);
  func_0x000102789a90(auStack_190);
  func_0x0001027961f4(&uStack_150,auStack_2c0);
  func_0x000102789a5c(auStack_180);
  if (cStack_100 == '\x01') {
    func_0x000107c6157c(uStack_148);
    func_0x000107c6157c(uStack_138);
    func_0x000102796230(&uStack_150);
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000100083b20(auStack_2c0);
    FUN_1027962a4(auStack_2c0,auStack_2e8);
    puVar2 = &UNK_110549248;
    func_0x000107c613fc(&UNK_110549248,0x60,7);
    FUN_1027962a4(auStack_2e8,puVar2 + 0x10);
    *(undefined8 *)(puVar2 + 0x38) = param_1;
    *(undefined8 *)(puVar2 + 0x48) = uStack_148;
    *(undefined8 *)(puVar2 + 0x40) = uStack_150;
    *(undefined8 *)(puVar2 + 0x58) = uStack_138;
    *(undefined8 *)(puVar2 + 0x50) = uStack_140;
    func_0x000107c6157c(uStack_148);
    func_0x000107c6157c(uStack_138);
    func_0x000107c61434(param_1);
    puVar1 = (undefined *)0xc1;
    func_0x000104887c7c(0xc1,0,0x48,4,0xd00000000000001b,0x800000010f0bb770,&UNK_10dad9728,puVar2);
    func_0x000107c61574(puVar2);
    puVar2 = (undefined *)0x0;
    func_0x000104888fc0(0,1,FUN_102795e70,0);
    func_0x000103edf384();
    func_0x000107c61574(uStack_138);
    func_0x000107c61574(uStack_148);
  }
  else {
    func_0x000102796230(&uStack_150);
    puVar3 = (undefined8 *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    FUN_102796264();
    puVar2 = &UNK_1105492e8;
    func_0x000107c613f8(&UNK_1105492e8,puVar3,0,0);
    *puVar3 = 0xd000000000000053;
    puVar3[1] = 0x800000010f0bb710;
    puVar1 = puVar2;
    func_0x00010488904c();
    func_0x000107c614ac(puVar2);
    func_0x000103edf384();
  }
  func_0x000107c61574(puVar1);
  return puVar2;
}



/* Entry: 102795c60; end: 102795c7b;  */

void FUN_102795c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102795c7c,0,0);
  return;
}



/* Entry: 102795c7c; end: 102795d43;  */

void FUN_102795c7c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  uVar5 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  piVar7 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102795d44;
                    /* WARNING: Could not recover jumptable at 0x000102795d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (*(undefined8 *)(unaff_x22 + 0x18),uVar5,0xd00000000000001f,0x800000010f0bb7e0,uVar2,
             lVar3);
  return;
}



/* Entry: 102795d44; end: 102795db7;  */

void FUN_102795d44(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000102795d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102795db8,0,0);
  return;
}



/* Entry: 102795db8; end: 102795e1f;  */

void FUN_102795db8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102795e20,uVar1,uVar2);
  return;
}



/* Entry: 102795e20; end: 102795e6f;  */

void FUN_102795e20(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  pcVar2 = *(code **)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  (*pcVar2)(uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102795e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102795e70; end: 102795e73;  */

void FUN_102795e70(void)

{
  return;
}



/* Entry: 102795e74; end: 102795eef; -[_TtC40MemTwoPickerValdiComponentImplementation38MemTwoPickerMultiPickModeActionHandler onItemsSelectedWithItems:] */

void FUN_102795e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_102796740(0,0x112ebb490,&PTR_PTR_1126aae40);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102795a24(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102795ef0; end: 10279618f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102795ef0(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined *apuStack_2d8 [38];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [48];
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  char cStack_118;
  
  func_0x000100083b20(auStack_1a8);
  FUN_10278997c(auStack_198,apuStack_2d8);
  func_0x000102789a90(auStack_1a8);
  func_0x0001027961f4(auStack_168,apuStack_2d8);
  func_0x000102789a5c(auStack_198);
  if (cStack_118 == '\x01') {
    func_0x000107c6157c(uStack_160);
    func_0x000107c6157c(uStack_150);
    func_0x000102796230(auStack_168);
    if (param_1 >> 0x3e == 0) {
      uVar12 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar12 = param_1;
      }
      func_0x000107c60480();
    }
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar12 != 0) {
      apuStack_2d8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100403514(0,uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102796190);
        (*pcVar1)();
      }
      if ((param_1 & 0xc000000000000001) == 0) {
        puVar15 = (undefined8 *)(param_1 + 0x20);
        do {
          puVar13 = apuStack_2d8[0];
          uVar11 = *puVar15;
          uVar10 = 2;
          uVar6 = uVar11;
          func_0x000107c615f4();
          func_0x000107c44fcc();
          func_0x000107c61180();
          uVar7 = uVar6;
          func_0x000107c44fcc();
          func_0x000107c61180();
          uVar8 = uVar7;
          func_0x000107c5faec();
          func_0x000107c615ec(uVar11,2);
          func_0x000107c615e8(uVar6);
          func_0x000107c61170(uVar7);
          uVar14 = *(ulong *)(puVar13 + 0x10);
          apuStack_2d8[0] = puVar13;
          if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar14) {
            func_0x000100403514(1 < *(ulong *)(puVar13 + 0x18),uVar14 + 1,1);
          }
          *(ulong *)(apuStack_2d8[0] + 0x10) = uVar14 + 1;
          *(undefined8 *)(apuStack_2d8[0] + uVar14 * 0x10 + 0x20) = uVar8;
          *(undefined8 *)(apuStack_2d8[0] + uVar14 * 0x10 + 0x28) = uVar10;
          uVar12 = uVar12 - 1;
          puVar13 = apuStack_2d8[0];
          puVar15 = puVar15 + 1;
        } while (uVar12 != 0);
      }
      else {
        uVar14 = 0;
        do {
          puVar13 = apuStack_2d8[0];
          uVar2 = uVar14;
          uVar9 = param_1;
          FUN_102739830();
          uVar3 = uVar2;
          func_0x000107c615f0();
          func_0x000107c44fcc();
          func_0x000107c61180();
          uVar4 = uVar3;
          func_0x000107c44fcc();
          func_0x000107c61180();
          uVar5 = uVar4;
          func_0x000107c5faec();
          func_0x000107c615ec(uVar2,2);
          func_0x000107c615e8(uVar3);
          func_0x000107c61170(uVar4);
          uVar2 = *(ulong *)(puVar13 + 0x10);
          apuStack_2d8[0] = puVar13;
          if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar2) {
            func_0x000100403514(1 < *(ulong *)(puVar13 + 0x18),uVar2 + 1,1);
          }
          uVar14 = uVar14 + 1;
          *(ulong *)(apuStack_2d8[0] + 0x10) = uVar2 + 1;
          *(ulong *)(apuStack_2d8[0] + uVar2 * 0x10 + 0x20) = uVar5;
          *(ulong *)(apuStack_2d8[0] + uVar2 * 0x10 + 0x28) = uVar9;
          puVar13 = apuStack_2d8[0];
        } while (uVar12 != uVar14);
      }
    }
    (*pcStack_158)(puVar13);
    func_0x000107c61574(uStack_150);
    func_0x000107c61574(uStack_160);
    func_0x000107c6142c(puVar13);
  }
  else {
    func_0x000102796230(auStack_168);
  }
  return;
}



/* Entry: 102796190; end: 102796263; -[_TtC40MemTwoPickerValdiComponentImplementation38MemTwoPickerMultiPickModeActionHandler onSelectionChangedWithItems:] */

void FUN_102796190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ebb488;
  func_0x0001000285a8(0x112ebb488,&UNK_10dad3f20);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_102795ef0(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102796264; end: 1027962a3;  */

void FUN_102796264(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebdfd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad9814;
  func_0x000107c61520(&UNK_10dad9814,&UNK_1105492e8);
  puRam0000000112ebdfd8 = puVar1;
  return;
}



/* Entry: 1027962a4; end: 1027962bb;  */

undefined8 * FUN_1027962a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1027962bc; end: 102796347;  */

void FUN_1027962bc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102796348;
  plVar5[4] = lVar3;
  plVar5[5] = lVar2;
  plVar5[2] = unaff_x20 + 0x10;
  plVar5[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102795c7c,0,0,lVar3,lVar2,uVar4,uVar6);
  return;
}



/* Entry: 102796348; end: 102796383;  */

void FUN_102796348(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102796380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102796384; end: 1027963e3; -[_TtC40MemTwoPickerValdiComponentImplementation38MemTwoPickerMultiPickModeActionHandler init] */

void FUN_102796384(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoPickerValdiComponentImplementation.MemTwoPickerMultiPickModeActionHandler"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027963b0);
  (*pcVar1)();
}



/* Entry: 1027963e4; end: 10279641b; -[_TtC40MemTwoPickerValdiComponentImplementation38MemTwoPickerMultiPickModeActionHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102796400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102796404) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027963e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebdfc8));
  return;
}



/* Entry: 10279641c; end: 1027964a3;  */

void FUN_10279641c(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_102796740(0,0x112ebdfb8,&PTR_PTR_1126aaee0);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ebe008;
  plVar5 = (long *)&UNK_10dad9858;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1027964a4; end: 1027965d7;  */

undefined * FUN_1027964a4(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027965d8);
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
    puVar3 = param_1;
    FUN_10279641c();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_102796740(0,0x112ebdfb8,&PTR_PTR_1126aaee0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1027965d8; end: 1027965e7;  */

undefined1  [16] FUN_1027965d8(void)

{
  return ZEXT816(0x110549270);
}



/* Entry: 1027965e8; end: 102796607;  */

void FUN_1027965e8(void)

{
  func_0x000107c61168(&PTR_PTR_1128609b8);
  return;
}



/* Entry: 102796608; end: 10279660f;  */

void FUN_102796608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102796610; end: 10279667f;  */

undefined8 * FUN_102796610(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102796680; end: 10279673f;  */

int FUN_102796680(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102796740; end: 10279677f;  */

void FUN_102796740(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102796780; end: 102796787;  */

undefined8 * FUN_102796780(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102796788; end: 102796807;  */

void FUN_102796788(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebe010,&UNK_10dad9860);
  puVar1 = &UNK_110549368;
  func_0x000107c613fc(&UNK_110549368,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102796a68,puVar1);
  return;
}



/* Entry: 102796808; end: 102796a67;  */

void FUN_102796808(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_428 [304];
  undefined8 auStack_2f8 [40];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [48];
  undefined1 auStack_178 [32];
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  char cStack_128;
  
  func_0x000100083b20(auStack_2f8);
  func_0x000107c610b4(auStack_1b8,auStack_2f8,0x13b);
  FUN_10278997c(auStack_1a8,auStack_428);
  func_0x000102789a90(auStack_1b8);
  func_0x0001027961f4(auStack_178,auStack_428);
  func_0x000102789a5c(auStack_1a8);
  if (cStack_128 == '\x01') {
    func_0x000100083b20(auStack_2f8);
    puVar2 = PTR_PTR_1126aaee8;
    func_0x000107c610f8();
    uVar1 = 0;
    FUN_102796a80(0);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar1);
    func_0x000107c48034();
    func_0x000107c61170(auStack_2f8[0]);
    func_0x000107c61170(puVar3);
    puVar3 = (undefined *)0x0;
    if (lStack_130 != 1) {
      puVar3 = PTR_PTR_1126aaef8;
      func_0x000107c610f8(PTR_PTR_1126aaef8);
      func_0x000107c61434(lStack_130);
      func_0x000107c47468((double)lStack_140,puVar3);
      if (lStack_130 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = uStack_138;
        func_0x000107c5fadc(uStack_138,lStack_130);
      }
      func_0x000107c5662c(puVar3);
      func_0x000107c61170(uVar1);
      FUN_102793308(lStack_140,uStack_138,lStack_130);
    }
    func_0x000107c56344(puVar2);
    func_0x000107c61170(puVar3);
    if (lStack_148 == 1) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126aaef8;
      func_0x000107c610f8(PTR_PTR_1126aaef8);
      func_0x000107c61434(lStack_148);
      func_0x000107c47468((double)lStack_158,puVar3);
      if (lStack_148 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = uStack_150;
        func_0x000107c5fadc(uStack_150,lStack_148);
      }
      func_0x000107c5662c(puVar3);
      func_0x000107c61170(uVar1);
      FUN_102793308(lStack_158,uStack_150,lStack_148);
    }
    func_0x000107c566cc(puVar2);
    func_0x000102796230(auStack_178);
    func_0x000107c61170(puVar3);
  }
  else {
    func_0x000102796230(auStack_178);
    puVar2 = (undefined *)0x0;
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 102796a68; end: 102796a7f;  */

void FUN_102796a68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined *puVar3;
  undefined1 auStack_428 [304];
  undefined8 auStack_2f8 [40];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [48];
  undefined1 auStack_178 [32];
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  char cStack_128;
  
  func_0x000100083b20(auStack_2f8,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c610b4(auStack_1b8,auStack_2f8,0x13b);
  FUN_10278997c(auStack_1a8,auStack_428);
  func_0x000102789a90(auStack_1b8);
  func_0x0001027961f4(auStack_178,auStack_428);
  func_0x000102789a5c(auStack_1a8);
  if (cStack_128 == '\x01') {
    func_0x000100083b20(auStack_2f8);
    puVar2 = PTR_PTR_1126aaee8;
    func_0x000107c610f8();
    uVar1 = 0;
    FUN_102796a80(0);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar1);
    func_0x000107c48034();
    func_0x000107c61170(auStack_2f8[0]);
    func_0x000107c61170(puVar3);
    puVar3 = (undefined *)0x0;
    if (lStack_130 != 1) {
      puVar3 = PTR_PTR_1126aaef8;
      func_0x000107c610f8(PTR_PTR_1126aaef8);
      func_0x000107c61434(lStack_130);
      func_0x000107c47468((double)lStack_140,puVar3);
      if (lStack_130 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = uStack_138;
        func_0x000107c5fadc(uStack_138,lStack_130);
      }
      func_0x000107c5662c(puVar3);
      func_0x000107c61170(uVar1);
      FUN_102793308(lStack_140,uStack_138,lStack_130);
    }
    func_0x000107c56344(puVar2);
    func_0x000107c61170(puVar3);
    if (lStack_148 == 1) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126aaef8;
      func_0x000107c610f8(PTR_PTR_1126aaef8);
      func_0x000107c61434(lStack_148);
      func_0x000107c47468((double)lStack_158,puVar3);
      if (lStack_148 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = uStack_150;
        func_0x000107c5fadc(uStack_150,lStack_148);
      }
      func_0x000107c5662c(puVar3);
      func_0x000107c61170(uVar1);
      FUN_102793308(lStack_158,uStack_150,lStack_148);
    }
    func_0x000107c566cc(puVar2);
    func_0x000102796230(auStack_178);
    func_0x000107c61170(puVar3);
  }
  else {
    func_0x000102796230(auStack_178);
    puVar2 = (undefined *)0x0;
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 102796a80; end: 102796ac3;  */

void FUN_102796a80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebe018 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aaef0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ebe018 = puVar1;
  return;
}



/* Entry: 102796ac4; end: 102796aef;  */

undefined1  [16] FUN_102796ac4(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x000107c61434(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 102796af0; end: 102796b0b;  */

void FUN_102796af0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb4b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation14LocalizedErrorPAAE13failureReasonSSSgvg_1103506b8)();
  return;
}



/* Entry: 102796b0c; end: 102796c0f;  */

void FUN_102796b0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebe020,&UNK_10dad98b0);
  puVar1 = &UNK_1105493b0;
  func_0x000107c613fc(&UNK_1105493b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102796c10,puVar1);
  return;
}



/* Entry: 102796c10; end: 102796c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102796c10(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_1027971fc();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112ebe028) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112ebe030) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 102796c18; end: 102796c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102796c18(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebe028) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebe030) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102796c7c; end: 102796c97;  */

void FUN_102796c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102796c98,0,0);
  return;
}



/* Entry: 102796c98; end: 102796d5f;  */

void FUN_102796c98(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  uVar5 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102796d60;
                    /* WARNING: Could not recover jumptable at 0x000102796d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (*(undefined8 *)(unaff_x22 + 0x18),uVar5,0xd00000000000001f,0x800000010f0bb7e0,uVar2,
             lVar3);
  return;
}



/* Entry: 102796d60; end: 102796df3;  */

void FUN_102796d60(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  long lVar2;
  
  lVar2 = *unaff_x22;
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000102796dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  *(undefined1 *)(lVar2 + 0x58) = param_3;
  *(undefined8 *)(lVar2 + 0x38) = param_4;
  *(undefined8 *)(lVar2 + 0x40) = param_2;
  *(undefined8 *)(lVar2 + 0x48) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102796df4,0,0);
  return;
}



/* Entry: 102796df4; end: 102796e5b;  */

void FUN_102796df4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102796e5c,uVar1,uVar2);
  return;
}



/* Entry: 102796e5c; end: 102796ecf;  */

void FUN_102796e5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  pcVar3 = *(code **)(unaff_x22 + 0x20);
  uVar5 = *(undefined1 *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  (*pcVar3)(uVar1,uVar4,uVar5,uVar2);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102796ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102796ed0; end: 102796ed3;  */

void FUN_102796ed0(void)

{
  return;
}



/* Entry: 102796ed4; end: 102796f43; -[_TtC40MemTwoPickerValdiComponentImplementation39MemTwoPickerSinglePickModeActionHandler onItemSelectedWithItem:thumbnailView:] */

void FUN_102796ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102796fdc(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102796f44; end: 102796fa3; -[_TtC40MemTwoPickerValdiComponentImplementation39MemTwoPickerSinglePickModeActionHandler init] */

void FUN_102796f44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoPickerValdiComponentImplementation.MemTwoPickerSinglePickModeActionHandler"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102796f70);
  (*pcVar1)();
}



/* Entry: 102796fa4; end: 102796fdb; -[_TtC40MemTwoPickerValdiComponentImplementation39MemTwoPickerSinglePickModeActionHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102796fc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102796fc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102796fa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebe028));
  return;
}



/* Entry: 102796fdc; end: 1027971eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102796fdc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_2e8 [40];
  undefined1 auStack_2c0 [304];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [48];
  undefined8 uStack_150;
  undefined8 uStack_148;
  char cStack_100;
  
  func_0x000100083b20(auStack_190);
  FUN_10278997c(auStack_180,auStack_2c0);
  func_0x000102789a90(auStack_190);
  func_0x0001027961f4(&uStack_150,auStack_2c0);
  func_0x000102789a5c(auStack_180);
  if (cStack_100 == '\x01') {
    func_0x000102796230(&uStack_150);
    puVar1 = (undefined8 *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x00010279721c();
    puVar4 = &UNK_110549478;
    func_0x000107c613f8(&UNK_110549478,puVar1,0,0);
    *puVar1 = 0xd00000000000006d;
    puVar1[1] = 0x800000010f0bb860;
    puVar2 = puVar4;
    func_0x00010488904c();
    func_0x000107c614ac(puVar4);
    func_0x000103edf384();
    func_0x000107c61574(puVar2);
  }
  else {
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000100083b20(auStack_2c0);
    FUN_1027962a4(auStack_2c0,auStack_2e8);
    puVar4 = &UNK_1105493f8;
    func_0x000107c613fc(&UNK_1105493f8,0x50,7);
    FUN_1027962a4(auStack_2e8,puVar4 + 0x10);
    *(undefined8 *)(puVar4 + 0x38) = param_1;
    *(undefined8 *)(puVar4 + 0x48) = uStack_148;
    *(undefined8 *)(puVar4 + 0x40) = uStack_150;
    func_0x0001027961f4(&uStack_150,auStack_2c0);
    func_0x000107c61174(param_1);
    uVar3 = 0xc1;
    func_0x000104887c7c(0xc1,0,0x48,4,0xd000000000000027,0x800000010f0bb8d0,&UNK_10dad9938,puVar4);
    func_0x000107c61574(puVar4);
    puVar4 = (undefined *)0x0;
    func_0x000104888fc0(0,1,FUN_102796ed0,0);
    func_0x000103edf384();
    func_0x000107c61574(uVar3);
    func_0x000102796230(&uStack_150);
  }
  return puVar4;
}



/* Entry: 1027971ec; end: 1027971fb;  */

undefined1  [16] FUN_1027971ec(void)

{
  return ZEXT816(0x1105493d8);
}



/* Entry: 1027971fc; end: 10279725b;  */

void FUN_1027971fc(void)

{
  func_0x000107c61168(&PTR_PTR_112860a80);
  return;
}



/* Entry: 10279725c; end: 1027972d3;  */

void FUN_10279725c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1027972d4;
  plVar3[4] = lVar2;
  plVar3[5] = lVar4;
  plVar3[2] = unaff_x20 + 0x10;
  plVar3[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102796c98,0,0);
  return;
}



/* Entry: 1027972d4; end: 10279730f;  */

void FUN_1027972d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010279730c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102797310; end: 102797317;  */

void FUN_102797310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102797318; end: 102797387;  */

undefined8 * FUN_102797318(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102797388; end: 10279744f;  */

int FUN_102797388(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102797450; end: 1027974cf;  */

void FUN_102797450(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebe0b0,&UNK_10dad9a00);
  puVar1 = &UNK_1105494f8;
  func_0x000107c613fc(&UNK_1105494f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1027975a0,puVar1);
  return;
}



/* Entry: 1027974d0; end: 10279759f;  */

void FUN_1027974d0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined1 auStack_3f0 [304];
  undefined8 auStack_2c0 [40];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [48];
  undefined1 auStack_140 [80];
  char cStack_f0;
  
  func_0x000100083b20(auStack_2c0);
  func_0x000107c610b4(auStack_180,auStack_2c0,0x13b);
  FUN_10278997c(auStack_170,auStack_3f0);
  func_0x000102789a90(auStack_180);
  func_0x0001027961f4(auStack_140,auStack_3f0);
  func_0x000102789a5c(auStack_170);
  func_0x000102796230(auStack_140);
  if (cStack_f0 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(auStack_2c0);
    puVar1 = PTR_PTR_1126aaf00;
    func_0x000107c610f8();
    func_0x000107c45e44();
    func_0x000107c61170(auStack_2c0[0]);
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 1027975a0; end: 1027975b7;  */

void FUN_1027975a0(undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_3f0 [304];
  undefined8 auStack_2c0 [40];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [48];
  undefined1 auStack_140 [80];
  char cStack_f0;
  
  func_0x000100083b20(auStack_2c0,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c610b4(auStack_180,auStack_2c0,0x13b);
  FUN_10278997c(auStack_170,auStack_3f0);
  func_0x000102789a90(auStack_180);
  func_0x0001027961f4(auStack_140,auStack_3f0);
  func_0x000102789a5c(auStack_170);
  func_0x000102796230(auStack_140);
  if (cStack_f0 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(auStack_2c0);
    puVar1 = PTR_PTR_1126aaf00;
    func_0x000107c610f8();
    func_0x000107c45e44();
    func_0x000107c61170(auStack_2c0[0]);
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 1027975b8; end: 102797623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027975b8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x000100326390();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ebe0c0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102797624; end: 10279762b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102797624(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x000100326390();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ebe0c0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10279762c; end: 10279769f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10279762c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebe0c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027976a0; end: 1027976ff; -[_TtC36MemTwoCameraRollPermissionHandlerAPI41MemTwoCameraRollPermissionHandlerServices init] */

void FUN_1027976a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoCameraRollPermissionHandlerAPI.MemTwoCameraRollPermissionHandlerServices"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027976cc);
  (*pcVar1)();
}



/* Entry: 102797700; end: 10279770f;  */

undefined1  [16] FUN_102797700(void)

{
  return ZEXT816(0x1105495c0);
}



/* Entry: 102797710; end: 10279771f; -[_TtC36MemTwoCameraRollPermissionHandlerAPI41MemTwoCameraRollPermissionHandlerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102797710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebe0c0));
  return;
}



/* Entry: 102797720; end: 10279772f;  */

undefined1  [16] FUN_102797720(void)

{
  return ZEXT816(0x110549668);
}



/* Entry: 102797730; end: 102797817;  */

/* WARNING: Removing unreachable block (ram,0x00010279778c) */
/* WARNING: Removing unreachable block (ram,0x000102797780) */

void FUN_102797730(void)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  
  func_0x000100087bd4(*(undefined8 *)(unaff_x20 + 0x28),FUN_102797f60,auStack_60,
                      PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 102797818; end: 102797843;  */

void FUN_102797818(void)

{
  long unaff_x20;
  
  func_0x000100e79bb8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102797844; end: 10279784f;  */

/* WARNING: Removing unreachable block (ram,0x00010279778c) */
/* WARNING: Removing unreachable block (ram,0x000102797780) */

void FUN_102797844(void)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  
  func_0x000100087bd4(*(undefined8 *)(unaff_x20 + 0x28),FUN_102797f60,auStack_60,
                      PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 102797850; end: 1027978a3;  */

code * FUN_102797850(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000100087438(0,*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c6157c(param_1);
  pcVar1 = FUN_1027978a4;
  func_0x0001000b6400(FUN_1027978a4,param_1);
  func_0x000107c61574(param_1);
  return pcVar1;
}



/* Entry: 1027978a4; end: 1027979c3;  */

/* WARNING: Removing unreachable block (ram,0x000102797990) */

undefined1  [16] FUN_1027978a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long *unaff_x20;
  undefined1 auVar7 [16];
  
  lVar1 = param_1;
  FUN_102797bbc();
  func_0x000107c613fc();
  uVar2 = 0;
  func_0x00010006a340();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined1 *)(lVar1 + 0x20) = 0;
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  puVar3 = &UNK_1105497d8;
  func_0x000107c613fc(&UNK_1105497d8,0x18,7);
  pcVar4 = (code *)(puVar3 + 0x10);
  lVar6 = lVar1;
  func_0x000107c61644(pcVar4,lVar1);
  (**(code **)(*unaff_x20 + 0x60))();
  puVar5 = &UNK_110549800;
  func_0x000107c613fc(&UNK_110549800,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(long *)(puVar5 + 0x18) = param_1;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(param_1);
  (*pcVar4)(FUN_102798094,puVar5);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(lVar6);
  func_0x000107c61574(puVar3);
  auVar7._8_8_ = &PTR_DAT_110549730;
  auVar7._0_8_ = lVar1;
  return auVar7;
}



/* Entry: 1027979c4; end: 102797b0f;  */

void FUN_1027979c4(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(*param_6 + 0x50);
  func_0x000107c60188(0,lVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = auStack_70 + -extraout_x12;
  if (param_1 < 2) {
    if (param_1 == 0) {
      func_0x000107c61428(param_5 + 0x10,auStack_68,0,0);
      param_5 = param_5 + 0x10;
      func_0x000107c61648();
      if (param_5 != 0) {
        uVar1 = *(undefined8 *)(param_5 + 0x10);
        uVar2 = *(undefined8 *)(param_5 + 0x18);
        *(undefined8 *)(param_5 + 0x10) = param_2;
        *(undefined8 *)(param_5 + 0x18) = param_3;
        func_0x000100e79bb4(param_2,param_3);
        func_0x000100e79bb8(uVar1,uVar2);
        func_0x000107c61574(param_5);
      }
    }
    else {
      (**(code **)(extraout_x8 + 0x10))(puVar7,param_4);
      lVar6 = *(long *)(lVar5 + -8);
      puVar4 = puVar7;
      (**(code **)(lVar6 + 0x30))(puVar7,1,lVar5);
      if ((int)puVar4 == 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102797b10);
        (*pcVar3)();
      }
      func_0x000100087f6c(puVar7);
      (**(code **)(lVar6 + 8))(puVar7,lVar5);
    }
  }
  else if (param_1 != 2) {
    func_0x000100c7f554();
  }
  return;
}



/* Entry: 102797b10; end: 102797bbb;  */

code * FUN_102797b10(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = *unaff_x20;
  FUN_102797bbc();
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010006a340();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  FUN_102798ca8(0,*(undefined8 *)(lVar4 + 0x50));
  puVar2 = &UNK_110549718;
  func_0x000107c613fc(&UNK_110549718,0x20,7);
  *(long *)(puVar2 + 0x10) = param_1;
  *(long **)(puVar2 + 0x18) = unaff_x20;
  pcVar3 = FUN_102797d90;
  FUN_10279a368(FUN_102797d90,puVar2);
  func_0x000107c6157c();
  return pcVar3;
}



/* Entry: 102797bbc; end: 102797bdb;  */

void FUN_102797bbc(void)

{
  func_0x000107c61168(&PTR_PTR_112ebe130);
  return;
}



/* Entry: 102797bdc; end: 102797d8f;  */

void FUN_102797bdc(code *param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x21;
  code *pcVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  
  lVar9 = *(long *)(*param_4 + 0x50);
  lVar3 = 0;
  func_0x000107c60188(0,lVar9);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffa0 + -extraout_x8;
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(puVar10,1,1,lVar9);
  func_0x000107c6157c(param_3);
  (*param_1)(0,FUN_102797f88,param_3,puVar10,0);
  (**(code **)(lVar11 + 8))(puVar10,lVar3);
  func_0x000107c61574(param_3);
  if (unaff_x21 == 0) {
    puVar4 = &UNK_110549760;
    func_0x000107c613fc(&UNK_110549760,0x28,7);
    *(long *)(puVar4 + 0x10) = lVar9;
    *(code **)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    puVar5 = &UNK_110549788;
    func_0x000107c613fc(&UNK_110549788,0x28,7);
    *(long *)(puVar5 + 0x10) = lVar9;
    *(code **)(puVar5 + 0x18) = param_1;
    *(undefined8 *)(puVar5 + 0x20) = param_2;
    pcVar8 = *(code **)(*param_4 + 0x70);
    func_0x000107c61580(param_2,2);
    pcVar6 = FUN_10279800c;
    puVar7 = puVar4;
    (*pcVar8)(FUN_10279800c,puVar4,0x102798018,puVar5);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar5);
    puVar4 = &UNK_1105497b0;
    func_0x000107c613fc(&UNK_1105497b0,0x20,7);
    *(code **)(puVar4 + 0x10) = pcVar6;
    *(undefined **)(puVar4 + 0x18) = puVar7;
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    *(code **)(param_3 + 0x10) = FUN_102798024;
    *(undefined **)(param_3 + 0x18) = puVar4;
    func_0x000100e79bb8(uVar1,uVar2);
  }
  return;
}



/* Entry: 102797d90; end: 102797da7;  */

void FUN_102797d90(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_102797bdc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Entry: 102797da8; end: 102797f5f;  */

/* WARNING: Removing unreachable block (ram,0x000102797e6c) */

void FUN_102797da8(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [16];
  
  lVar1 = 0;
  func_0x000107c60188(0,param_4);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_60 + -extraout_x8;
  lVar4 = *(long *)(param_4 + -8);
  (**(code **)(lVar4 + 0x10))(puVar2,param_1,param_4);
  (**(code **)(lVar4 + 0x38))(puVar2,0,1,param_4);
  (*param_2)(1,0,0,puVar2,0);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 102797f60; end: 102797f87;  */

void FUN_102797f60(void)

{
  long unaff_x20;
  
  func_0x0001027977b4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102797f88; end: 10279800b;  */

/* WARNING: Removing unreachable block (ram,0x000102797fd0) */
/* WARNING: Removing unreachable block (ram,0x000102797fdc) */
/* WARNING: Removing unreachable block (ram,0x000102797fe8) */

void FUN_102797f88(void)

{
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  func_0x000100087bd4(*(undefined8 *)(unaff_x20 + 0x28),FUN_1027980bc,auStack_50,
                      PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10279800c; end: 102798023;  */

/* WARNING: Removing unreachable block (ram,0x000102797e6c) */

void FUN_10279800c(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000107c60188(0,lVar1,*(undefined8 *)(unaff_x20 + 0x20));
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  lVar6 = *(long *)(lVar1 + -8);
  (**(code **)(lVar6 + 0x10))(puVar4,param_1,lVar1);
  (**(code **)(lVar6 + 0x38))(puVar4,0,1,lVar1);
  (*pcVar2)(1,0,0,puVar4,0);
  (**(code **)(lVar5 + 8))(puVar4,lVar3);
  return;
}



/* Entry: 102798024; end: 102798067;  */

void FUN_102798024(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102798068; end: 102798093;  */

void FUN_102798068(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102798094; end: 1027980bb;  */

void FUN_102798094(void)

{
  FUN_1027979c4();
  return;
}



/* Entry: 1027980bc; end: 1027980cf;  */

void FUN_1027980bc(void)

{
  FUN_102797f60();
  return;
}



/* Entry: 1027980d0; end: 102798133;  */

undefined1 FUN_1027980d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uVar1 = param_1;
  FUN_102798134();
  func_0x000103c38e04(&uStack_21,param_1,param_2,&UNK_110549a40,uVar1);
  func_0x000107c61574(param_1);
  return uStack_21;
}



/* Entry: 102798134; end: 102798173;  */

void FUN_102798134(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebe1d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dad9d04;
  func_0x000107c61520(&DAT_10dad9d04,&UNK_110549a40);
  puRam0000000112ebe1d8 = puVar1;
  return;
}



/* Entry: 102798174; end: 102798183;  */

uint FUN_102798174(uint param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 102798184; end: 1027981af;  */

void FUN_102798184(void)

{
  func_0x0001000285a8(0x112ebe210,&UNK_10dad9c20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 1027981b0; end: 1027981d3;  */

undefined1 FUN_1027981b0(undefined1 param_1)

{
  return param_1;
}



/* Entry: 1027981d4; end: 102798217;  */

void FUN_1027981d4(undefined1 param_1)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(param_1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102798218; end: 10279821f;  */

void FUN_102798218(void)

{
  undefined1 *unaff_x20;
  
  func_0x000107c6069c(*unaff_x20);
  return;
}



/* Entry: 102798220; end: 102798243;  */

void FUN_102798220(undefined8 param_1,undefined1 param_2)

{
  func_0x000107c6069c(param_2);
  return;
}



/* Entry: 102798244; end: 10279824b;  */

void FUN_102798244(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  func_0x000107c6069c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10279824c; end: 1027982df;  */

void FUN_10279824c(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  func_0x000107c6069c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1027982e0; end: 102798307;  */

void FUN_1027982e0(undefined1 *param_1,undefined1 param_2)

{
  long unaff_x21;
  
  FUN_1027980d0();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102798308; end: 10279832b;  */

void FUN_102798308(undefined8 *param_1,undefined8 param_2)

{
  FUN_102798184();
  *param_1 = param_2;
  return;
}



/* Entry: 10279832c; end: 1027983ab;  */

void FUN_10279832c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  
  FUN_1027983ac();
  uVar1 = param_1;
  func_0x0001027983ec();
  puVar2 = (undefined8 *)&UNK_110549a40;
  func_0x000103c30d9c(&UNK_110549a40,&UNK_110549a40,param_1,uVar1);
  puVar3 = puVar2;
  func_0x000103c31f74();
  plVar4 = (long *)*puVar3;
  pcVar5 = *(code **)(*plVar4 + 0xc0);
  func_0x00010279a5dc();
  (*pcVar5)(0xd000000000000013,0x800000010dad9c10,puVar2);
  func_0x000107c6142c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar4);
  return;
}



/* Entry: 1027983ac; end: 10279842b;  */

void FUN_1027983ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebe218 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad9d58;
  func_0x000107c61520(&UNK_10dad9d58,&UNK_110549a40);
  puRam0000000112ebe218 = puVar1;
  return;
}



/* Entry: 10279842c; end: 10279845b;  */

void FUN_10279842c(void)

{
  long unaff_x20;
  
  func_0x00010279a4a8(unaff_x20 + 0x10);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x00010279a814();
  return;
}



/* Entry: 10279845c; end: 102798467;  */

void FUN_10279845c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR__swift_bridgeObjectRelease_11034f258;
  func_0x00010279a510(unaff_x20 + 0x10,auStack_48,1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  (*(code *)puVar1)(uVar2);
  return;
}


